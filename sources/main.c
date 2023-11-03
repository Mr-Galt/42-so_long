/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mheinke <mheinke@student.42abudhabi.ae>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/18 09:20:58 by mheinke           #+#    #+#             */
/*   Updated: 2023/11/02 15:04:29 by mheinke          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/so_long.h"

void game_status(t_game *game)
{
	if (game->status->actual_status == START_MENU)
	{
		render_img(0, 0, game->status->startscreen, game);
		mouse_register(game);
	}
	if (game->status->actual_status == GAME_RUN)
	{
		render_img(game->player->player_pos_x, game->player->player_pos_y, game->player->idle, game);
		key_register(game);
	}
}

int	game_loop(t_game *game)
{
	long long	now;
	long long	delta_now;
	
	now = delta_time();
	delta_now = now - game->last_timestamp;
	if (delta_now > 15)
	{
		calculate_fps(game);
		mlx_clear_window(game->mlx, game->win);
		show_fps(game);
		game_status(game);
	}
	return (0);
}

int	main(void)
{
	t_game	game;
	
	init_game(&game);
	init_player(&game);
	// mouse_register(&game);
	// key_register(&game);
	mlx_loop_hook(game.mlx, game_loop, &game);
	mlx_loop(game.mlx);
}
