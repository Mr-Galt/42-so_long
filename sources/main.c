/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mheinke <mheinke@student.42abudhabi.ae>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/18 09:20:58 by mheinke           #+#    #+#             */
/*   Updated: 2023/11/17 11:16:45 by mheinke          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/so_long.h"

void game_status(t_game *game)
{
	if (game->state == STATE_START_MENU)
	{
		startscreen(game);
	}
	else if (game->state == STATE_OPTIONS)
	{
		optionscreen(game);
	}
	else if (game->state == STATE_CREDITS)
	{
		creditscreen(game);
	}
	else if (game->state == STATE_LOADING)
	{
		loadingscreen(game);
	}
	else if (game->state == STATE_GAME)
	{
		render_img(game->player->player_pos_x, game->player->player_pos_y, game->player->idle, game);
	}
	else if (game->state == STATE_EXIT)
	{
		mlx_destroy_window(game->mlx, game->win);
//		kill_menu(game);
		// destroy_player(game);
		// free_all_structs(game);
		// free(game->mlx);
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

void do_it(t_game *game)
{
	input_hooks(game);
	mlx_loop_hook(game->mlx, game_loop, game);
}

int	main(int argc, char **argv)
{
	t_game	game;
	
	// check_terminal_arguments(argc, argv);
	// read_map(&game, argv[1]);
	(void)argv, (void)argc;

	init_game(&game);
	init_player(&game);
	init_game_menu(&game);
	init_loadingscreen(&game);
	do_it(&game);
	// play_music(BACKGROUND_MUSIC, &game);
	// play_music(JUMP_SFX, &game);
	// play_music(JUMP_SFX, &game);
	// play_music(JUMP_SFX, &game);
	// play_music(JUMP_SFX, &game);
	// play_music(JUMP_SFX, &game);
	mlx_loop(game.mlx);
}
