/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   init_game.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mheinke <mheinke@student.42abudhabi.ae>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/19 14:53:09 by mheinke           #+#    #+#             */
/*   Updated: 2023/11/05 21:33:55 by mheinke          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/so_long.h"
#include <stdio.h>

void callocs_for_game(t_game *game)
{
	game->player = ft_calloc(sizeof(t_player), 1);
	if (!game->player)
		error("!Malloc for Player Struct");
	game->status = ft_calloc(sizeof(t_game_status), 1);
	if (!game->status)
		error("!Malloc for Status Struct");
}

void	init_game(t_game *game)
{
	game->mlx = mlx_init();
	callocs_for_game(game);
	game->screen_width = SCREEN_WIDTH;
	game->screen_height = SCREEN_HEIGHT;
	game->last_timestamp = 0;
	game->win = mlx_new_window(game->mlx, game->screen_width, game->screen_height, SCREEN_NAME);
	game->status->actual_status = START_MENU;
}
