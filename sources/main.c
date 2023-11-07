/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mheinke <mheinke@student.42abudhabi.ae>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/18 09:20:58 by mheinke           #+#    #+#             */
/*   Updated: 2023/11/07 15:29:26 by mheinke          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/so_long.h"

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
		creditscreen(game);
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
		free_player(game);
		free_structs(game);
		free(game->mlx);
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
		mlx_clear_window(game->mlx, game->win);
		calculate_fps(game);
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
	init_game_menu(&game);
	key_register(&game);
	mouse_register_startmenu(&game);
	mlx_loop_hook(game.mlx, game_loop, &game);
	mlx_loop(game.mlx);
}
