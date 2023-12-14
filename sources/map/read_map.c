/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   read_map.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mheinke <mheinke@student.42abudhabi.ae>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/16 16:26:32 by mheinke           #+#    #+#             */
/*   Updated: 2023/12/14 19:45:49 by mheinke          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/so_long.h"

void	read_map(t_game *game, char *argv)
{
	int		fd;
	char	*line;
	t_list	*map_list;
	t_list	*map_line;

	map_list = NULL;
	map_line = NULL;

	fd = open(argv, O_RDONLY);
	if (fd < 0)
		error("Coulnd't open the map file.\n");
	
	line = get_next_line(fd);
	if (line == NULL)
	{
		ft_printf("Invalid map. The map is empty.\n");
		close (fd);
		exit (1);
	}
	
	game->map = ft_calloc(1, sizeof(t_map));
	if (game->map == NULL)
		error("Couldn't allocate memory for the map.\n");
	
	while (line != NULL)
	{
		game->map->string = ft_strjoin(game->map->string, line);
		map_line = ft_lstnew(line);
		ft_lstadd_back(&map_list, map_line);
		line = get_next_line(fd);
	}
	free(line);
	close(fd);
	
	
	game->map->rows = ft_lstsize(map_list);
	game->map->columns = ft_strlen(map_list->content) - 1;


	game->map->full = ft_calloc(game->map->rows, sizeof(char *));
	if (game->map->full == NULL)
		error("Error\nMemory allocation for rows failed.");
	ft_printf("Row Allocation done.\n");

	int i = 0;
	while (i < game->map->rows)
	{
		game->map->full[i] = ft_calloc(game->map->columns, sizeof(char));
		if (game->map->full[i] == NULL)
			error("Error\nMemory allocation for columns failed.");
		i++;
	}
	ft_printf("Columns Allocation done.\n");
	
	while (map_list)
	{
		ft_printf("%s", map_list->content);
		map_list = map_list->next;
	}
	
	ft_printf("\n");
	ft_printf("Rows: %d\tColums: %d", game->map->rows, game->map->columns);
	ft_printf("\n");
}
