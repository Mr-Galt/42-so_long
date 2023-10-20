/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   key_register.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mheinke <mheinke@student.42abudhabi.ae>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/20 13:33:53 by mheinke           #+#    #+#             */
/*   Updated: 2023/10/20 14:12:24 by mheinke          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/so_long.h"
#include <stdio.h>

int	keydown(int keycode, t_game *game)
{
	player_move(keycode, game);
	printf("Key pressed: %d\n", keycode);
	return (0);
}

int keyup(int keycode, t_game *game)
{
	(void) game;
	if (keycode != ESC)
		printf("Key released: %d\n", keycode);
	else
		kill(keycode, game);
	return (0);
}

int	kill(int keycode, t_game *game)
{
	if (keycode == 53)
	{
		mlx_destroy_window(game->mlx, game->win);
		exit(1);
	}
	return (0);
}



void	key_register(t_game *game)
{
	mlx_hook(game->win, 17, 1L << 0, kill, game);
	mlx_hook(game->win, 2, 0, keydown, game);
	mlx_key_hook(game->win, keyup, game);	
}
