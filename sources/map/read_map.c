/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   read_map.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mheinke <mheinke@student.42abudhabi.ae>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/16 16:26:32 by mheinke           #+#    #+#             */
/*   Updated: 2023/11/17 11:18:03 by mheinke          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/so_long.h"

// static void	empty_spaces_on_map(char *map)
// {
// 	int	i;

// 	i = 0;
// 	if (map[0] == '\n')
// 	{
// 		free(map);
// 		error("Invalid map. The map have an empty line right at the beginning.");
// 	}
// 	else if (map[ft_strlen(map) - 1] == '\n')
// 	{
// 		free (map);
// 		error("Invalid map. The map have an empty line at the end.");
// 	}
// 	while (map[i + 1])
// 	{
// 		if (map[i] == '\n' && map[i + 1] == '\n')
// 		{
// 			free(map);
// 			error("Invalid map. The map have an empty line at the middle.");
// 		}
// 		i++;
// 	}
// }


void	read_map(t_game *game, char *argv)
{
	int		fd;
	char	*line;
	(void)game;
	fd = open(argv, O_RDONLY);
	if (fd == -1)
		ft_printf("Coulnd't open the map file.\n");
//	game->map->rows = 0;
	while ((line = get_next_line(fd)) != NULL)
	{
		printf("%s", line);
		free(line);
	}
	close(fd);
}

// void	read_map(t_game *game, char *argv)
// {
// 	char 	*temp_map;
// 	char	*temp_line;
// 	int		fd_map;

// 	fd_map = open(argv, O_RDONLY);
// 	if (fd_map == -1)
// 		error("Couldn't open the map file.");
// 	printf("open done\n"); fflush(stdout);
// 	temp_map = NULL;
// 	temp_line = NULL;
// 	printf("temp_map done\n"); fflush(stdout);
// 	game->map->rows = 0;
// 	printf("rows = 0\n"); fflush(stdout);
// 	while ((temp_line = get_next_line(fd_map)) != NULL)
// 	{
// 	//	temp_map = function for putting the lines into one big array
// 		printf("%s\n", temp_line);
// 		free(temp_line);
// 	//	game->map->rows++;
// 	}
// 	close (fd_map);
// 	empty_spaces_on_map(temp_map);
// //	game->map->full = ft_split(temp_map, '\n');
// 	free(temp_map);
// }
