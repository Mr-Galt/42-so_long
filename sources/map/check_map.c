/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_map.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mheinke <mheinke@student.42abudhabi.ae>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/16 18:13:42 by mheinke           #+#    #+#             */
/*   Updated: 2023/12/18 08:32:15 by mheinke          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/so_long.h"
#include <stdlib.h>

void	check_columns(t_game *game)
{
	int	i;

	i = 0;
	while (i < game->map->rows)
	{
		if (game->map->full[i][0] != WALL)
		{
			ft_printf("Invalid Map. There's a Wall missing from the first column.", game);
			exit (EXIT_FAILURE);
		}
		else if (game->map->full[i][game->map->columns] != WALL)
		{
			ft_printf("Invalid Map. There's a Wall missing from the last column.\n", game);
			exit (EXIT_FAILURE);
		}
		i++;
	}
}

void	check_rows(t_game *game)
{
	int	i;

	i = 0;
	while (i < game->map->columns)
	{
		if (game->map->full[0][i] != WALL)
		{
			ft_printf("Invalid Map. There's a Wall missing from the first row.\n", game);
			exit (EXIT_FAILURE);
		}
		else if (game->map->full[game->map->rows][i] != WALL)
		{
			ft_printf("Invalid Map. There's a Wall missing from the last row.\n", game);
			exit (EXIT_FAILURE);
		}
		i++;
	}
}

void	count_map_content(t_game *game)
{
	int	x;
	int	y;

	y = 0;
	while (y < game->map->rows)
	{
		x = 0;
		while (x < game->map->columns)
		{
			if (!ft_strchr("CEP01X", game->map->full[y][x]))
				ft_printf("Invalid Map. Not expected map parameter.\n", game);
			else if (game->map->full[y][x] == SPAWN)
				game->map->players++;
			else if (game->map->full[y][x] == COLLECT)
				game->map->collectibles++;
			else if (game->map->full[y][x] == EXIT)
				game->map->exits++;
			x++;
		}
		y++;
	}
}

void	verify_map_content(t_game *game)
{
	if (game->map->collectibles <= 0)
		ft_printf("Invalid Map. There are no Coins!\n", game);
	else if (game->map->exits != 0)
		ft_printf("Invalid Map. Invalid Exit quantity.\n", game);
	else if (game->map->players != 1)
		ft_printf("Invalid Map. Invalid Player quantity.\n", game);
}

void	check_whole_map(t_game *game)
{
	ft_printf("Checking map...\n");
	check_rows(game);
	ft_printf("Rows checked...\n");
	check_columns(game);
	ft_printf("Columns checked...\n");
	count_map_content(game);
	ft_printf("Counting...\n");
	verify_map_content(game);
	ft_printf("Collected content...\n");
}
