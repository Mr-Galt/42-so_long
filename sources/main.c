/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mheinke <mheinke@student.42abudhabi.ae>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/18 09:20:58 by mheinke           #+#    #+#             */
/*   Updated: 2023/11/06 09:22:06 by mheinke          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/so_long.h"

void startscreen(t_game *game)
{
	if (game->status->startscreen_status == 0)
	 	render_img(0, 0, game->status->startscreen[0], game);
	else if (game->status->startscreen_status == 1)
	 	render_img(0, 0, game->status->startscreen[1], game);
	else if (game->status->startscreen_status == 2)
	 	render_img(0, 0, game->status->startscreen[2], game);
	else if (game->status->startscreen_status == 3)
	 	render_img(0, 0, game->status->startscreen[3], game);
	else if (game->status->startscreen_status == 4)
	 	render_img(0, 0, game->status->startscreen[4], game);
}

void optionscreen(t_game *game)
{
	if (game->status->optionscreen_status == 0)
		render_img(0, 0, game->status->optionscreen[0], game);
	else if (game->status->optionscreen_status == 1)
		render_img(0, 0, game->status->optionscreen[1], game);
}

void game_status(t_game *game)
{
	if (game->status->actual_status == START_MENU)
	{
		startscreen(game);
	}
	else if (game->status->actual_status == OPTION_MENU)
	{
		optionscreen(game);
	}
	else if (game->status->actual_status == CREDITS_MENU)
	{
		render_img(0, 0, game->status->creditscreen, game);
	}
	else if (game->status->actual_status == GAME_RUN)
	{
		render_img(game->player->player_pos_x, game->player->player_pos_y, game->player->idle, game);
	}
	else if (game->status->actual_status == GAME_QUIT)
	{
		mlx_destroy_window(game->mlx, game->win);
		free_startscreen(game);
		free_optionscreen(game);
		free_creditscreen(game);
		free_structs(game);
		exit (1);
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
		game_status(game);
		show_fps(game);
	}
	return (1);
}

int	main(void)
{
	t_game	game;
	
	init_game(&game);
	init_player(&game);
	init_startscreen(&game);
	init_creditscreen(&game);
	init_optionscreen(&game);
	key_register(&game);
	mouse_register_startmenu(&game);
	mlx_loop_hook(game.mlx, game_loop, &game);
	mlx_loop(game.mlx);
}
