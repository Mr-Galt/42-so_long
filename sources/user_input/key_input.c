/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   key_input.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mheinke <mheinke@student.42abudhabi.ae>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/08 14:25:33 by mheinke           #+#    #+#             */
/*   Updated: 2023/11/09 13:25:44 by mheinke          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/so_long.h"

int	keydown(int keycode, t_game *game)
{
	if (check_state(game) == STATE_START_MENU || check_state(game) == STATE_OPTIONS || check_state(game) == STATE_CREDITS )
	{
		game->screen_width = 1280;
		game->screen_height = 960;
		mlx_destroy_window(game->mlx, game->win);
		game->win = mlx_new_window(game->mlx, game->screen_height, game->screen_height, "1280 x 960");
		
		// printf("USED"); fflush(stdout);
		return (0);	
	}
	if (check_state(game) == STATE_GAME)	
		player_move(keycode, game);
	return (0);
}

int keyup(int keycode, t_game *game)
{
	(void) game;
	if (keycode == ESC)
		kill(game);
	return (0);
}

int	kill(t_game *game)
{
	mlx_destroy_window(game->mlx, game->win);
	exit(1);
}