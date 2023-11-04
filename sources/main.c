/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mheinke <mheinke@student.42abudhabi.ae>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/18 09:20:58 by mheinke           #+#    #+#             */
/*   Updated: 2023/11/04 15:08:21 by mheinke          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/so_long.h"

void startscreen(t_game *game)
{
	if (game->status->startscreen_status == 0)
	 	render_img(0, 0, game->status->startscreen[0], game);
	if (game->status->startscreen_status == 1)
	 	render_img(0, 0, game->status->startscreen[1], game);
	if (game->status->startscreen_status == 2)
	 	render_img(0, 0, game->status->startscreen[2], game);
	if (game->status->startscreen_status == 3)
	 	render_img(0, 0, game->status->startscreen[3], game);
	if (game->status->startscreen_status == 4)
	 	render_img(0, 0, game->status->startscreen[4], game);
}

void game_status(t_game *game)
{
	if (game->status->actual_status == START_MENU)
	{
		mouse_register_startmenu(game);
		startscreen(game);
	}
	if (game->status->actual_status == GAME_RUN)
	{
		render_img(game->player->player_pos_x, game->player->player_pos_y, game->player->idle, game);
		key_register(game);
	}
	if (game->status->actual_status == GAME_QUIT)
	{
		mlx_destroy_window(game->mlx, game->win);
		free_startscreen(game);
		exit(1);
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
	mlx_loop_hook(game.mlx, game_loop, &game);
	mlx_loop(game.mlx);
}
