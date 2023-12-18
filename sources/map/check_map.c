/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_map.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mheinke <mheinke@student.42abudhabi.ae>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/16 18:13:42 by mheinke           #+#    #+#             */
/*   Updated: 2023/12/18 21:15:25 by mheinke          ###   ########.fr       */
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
			exit_map_failure(game, "Invalid Map. There's a Wall missing from the first column.\n");
		else if (game->map->full[i][game->map->columns - 1] != WALL)
			exit_map_failure(game, "Invalid Map. There's a Wall missing from the last column.\n.");
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
			exit_map_failure(game, "Invalid Map. There's a Wall missing from the first row.\n");
		else if (game->map->full[game->map->rows - 1][i] != WALL)
			exit_map_failure(game, "Invalid Map. There's a Wall missing from the last row.\n");
		i++;
	}
}

void count_map_content(t_game *game)
{
    int i = 0;

    while (game->map->string[i] != '\0')
    {
        if (!ft_strchr("CEP01X\n", game->map->string[i]))
			exit_map_failure(game, "Invalid Map. Not expected map parameter.\n");
        else if (game->map->string[i] == SPAWN)
            game->map->players++;
        else if (game->map->string[i] == COLLECT)
            game->map->collectibles++;
        else if (game->map->string[i] == EXIT)
            game->map->exits++;
        i++;
    }
}

void	verify_map_content(t_game *game)
{
	if (game->map->collectibles <= 0)
		exit_map_failure(game, "Invalid Map. There are no Coins!\n");
	else if (game->map->exits == 0 || game->map->exits > 1)
		exit_map_failure(game, "Invalid Map. Invalid amount of Exits.\n");
	else if (game->map->players != 1)
		exit_map_failure(game, "Invalid Map. Invalid amount of Players.\n");
}

void	check_whole_map(t_game *game)
{
	check_rows(game);
	check_columns(game);
	count_map_content(game);
	verify_map_content(game);
}
