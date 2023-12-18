/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   read_map.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mheinke <mheinke@student.42abudhabi.ae>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/16 16:26:32 by mheinke           #+#    #+#             */
/*   Updated: 2023/12/18 21:14:10 by mheinke          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/so_long.h"


void	open_map(t_game *game, char *relative_map_path)
{
	game->map_fd = open(relative_map_path, O_RDONLY);
	if (game->map_fd < 0)
		error("Coulnd't open the map file.\n");
}

char	*check_empty_map(t_game *game)
{   
	char *line = get_next_line(game->map_fd);
	if (line == NULL)
	{
		ft_printf("Invalid map. The map is empty.\n");
		close(game->map_fd);
		exit(1);
	}
	return (line);
}

void process_map_to_list(t_game *game, char *initial_line, t_list **map_list)
{
    char *line = initial_line;
    t_list *map_line;

	game->map->string = "";
    while (line != NULL)
    {
        game->map->string = ft_strjoin(game->map->string, line);
        map_line = ft_lstnew(line);
        ft_lstadd_back(map_list, map_line);
        line = get_next_line(game->map_fd);
    }
    free(line);
}

void	map_to_array(t_list *map_list, t_game *game)
{
	int		y;
	int		x;
	char	*line_content;
	t_list	*temp;

	y = 0;
	while (map_list != NULL)
	{
		line_content = map_list->content;
		x = 0;
		while (line_content[x])
		{
			game->map->full[y][x] = line_content[x];
			x++;
		}
		y++;
		free(map_list->content);
		temp = map_list;
		map_list = map_list->next;
		free(temp);
	}
}

void	read_map(t_game *game, char *argv)
{
	char	*line;
	t_list	*map_list;

	map_list = NULL;

	open_map(game, argv);
	line = check_empty_map(game);
	map_calloc(game, 1);
	process_map_to_list(game, line, &map_list);
	close(game->map_fd);
	game->map->rows = ft_lstsize(map_list);
	game->map->columns = ft_strlen(map_list->content) - 1;
	map_calloc(game, 2);
	map_to_array(map_list, game);
	check_whole_map(game);
	check_valid_path(game);
	debug_map(game);
}
