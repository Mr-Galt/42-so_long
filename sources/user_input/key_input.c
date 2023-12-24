/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   key_input.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mheinke <mheinke@student.42abudhabi.ae>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/08 14:25:33 by mheinke           #+#    #+#             */
/*   Updated: 2023/12/24 06:55:36 by mheinke          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/so_long.h"

int	keydown_start(int keycode, t_game *game)
{
	if (keycode == SPACE)
	{
		game->state = STATE_GAME;
	}
	return (0);
}

int	keyup_start(int keycode, t_game *game)
{
	(void) game;
	if (keycode == ESC)
		game->state = STATE_EXIT;

	// if (check_state(game) == STATE_GAME)
	// 	reset_player_direction(keycode, game);
	
	return (0);
}

int	kill(t_game *game)
{
	mlx_destroy_window(game->mlx, game->win);
	exit(1);
}

int	keydown_game(int keycode, t_game *game)
{
	//	set_player_direction(keycode, game);
	player_move(keycode, game);
	return (0);
}

int	keyup_game(int keycode, t_game *game)
{
	(void) game;
	if (keycode == ESC)
		game->state = STATE_EXIT;	
	return (0);
}