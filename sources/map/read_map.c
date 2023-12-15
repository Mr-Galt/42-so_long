/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   read_map.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mheinke <mheinke@student.42abudhabi.ae>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/16 16:26:32 by mheinke           #+#    #+#             */
/*   Updated: 2023/12/15 06:46:06 by mheinke          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/so_long.h"
#include <stdio.h>

void	open_map(t_game *game, char *relative_map_path)
{
	game->map_fd = open(relative_map_path, O_RDONLY);
	if (game->map_fd < 0)
		error("Coulnd't open the map file.\n");
}

void	read_map(t_game *game, char *argv)
{
	char	*line;
	t_list	*map_list;
	t_list	*map_line;

	map_list = NULL;
	map_line = NULL;

	open_map(game, argv);
	
	line = get_next_line(game->map_fd);
	if (line == NULL)
	{
		ft_printf("Invalid map. The map is empty.\n");
		close (game->map_fd);
		exit (1);
	}
	
	map_calloc(game, 1);
	game->map->string = "";
	
	while (line != NULL)
	{
		game->map->string = ft_strjoin(game->map->string, line);
		map_line = ft_lstnew(line);
		ft_lstadd_back(&map_list, map_line);
		line = get_next_line(game->map_fd);
	}
	free(line);
	close(game->map_fd);
	
	game->map->rows = ft_lstsize(map_list);
	game->map->columns = ft_strlen(map_list->content) - 1;

	map_calloc(game, 2);

	ft_printf("%s", game->map->string);
	
	ft_printf("\n");
	ft_printf("Rows: %d\tColums: %d", game->map->rows, game->map->columns);
	ft_printf("\n");
}
