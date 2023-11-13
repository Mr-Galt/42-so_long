/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   key_input.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mheinke <mheinke@student.42abudhabi.ae>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/08 14:25:33 by mheinke           #+#    #+#             */
/*   Updated: 2023/11/13 14:56:16 by mheinke          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/so_long.h"

int	keydown(int keycode, t_game *game)
{
	if (check_state(game) == STATE_START_MENU || check_state(game) == STATE_OPTIONS || check_state(game) == STATE_CREDITS )
	{
		if (keycode == W)
		{
			stop_music(game);
		}
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