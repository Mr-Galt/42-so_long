/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pathfinding.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mheinke <mheinke@student.42abudhabi.ae>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/18 20:58:04 by mheinke           #+#    #+#             */
/*   Updated: 2023/12/18 21:32:13 by mheinke          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/so_long.h"
#include <stdbool.h>

char	**copy_map(t_game *game)
{
	char	**map_copy;
	int		i;

	i = 0;
	map_copy = (char **)malloc(game->map->rows * sizeof(char *) + 1);
	if (map_copy == NULL)
		return (NULL);
	while (i < game->map->rows)
	{
		map_copy[i] = ft_strdup(game->map->full[i]);
		i++;
	}
	map_copy[i] = NULL;
	return(map_copy);
}

int	check_valid_path_rec(t_game *game, int x, int y)
{
	static int	coins_collected = 0;
	static int	exit_found = 0;

	if (game->map->copy[y][x] == '0' || game->map->copy[y][x] == 'E'
		|| game->map->copy[y][x] == 'C')
	{
		if (game->map->copy[y][x] == 'C')
			coins_collected++;
		if (game->map->copy[y][x] == 'E')
			exit_found = 1;
		game->map->copy[y][x] = 'F';
		if (x != 1)
			check_valid_path_rec(game, x - 1, y);
		if (x < game->map->columns)
			check_valid_path_rec(game, x + 1, y);
		if (y != 1)
			check_valid_path_rec(game, x, y - 1);
		if (y < game->map->rows)
			check_valid_path_rec(game, x, y + 1);
	}
	if (coins_collected == game->map->collectibles && exit_found == 1)
		return (true);
	return (false);
}

void	check_valid_path(t_game *game)
{
	int		x;
	int		y;
	
	x = 2;
	y = 2;
	game->map->copy = copy_map(game);
	if (!check_valid_path_rec(game, x, y))
		ft_printf("Map has NO valid path\n");
	else
		ft_printf("Map has a valid path\n");
	free_map_copy(game, game->map->rows);
}
