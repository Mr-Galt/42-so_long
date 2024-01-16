/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mheinke <mheinke@student.42abudhabi.ae>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/18 09:20:58 by mheinke           #+#    #+#             */
/*   Updated: 2024/01/16 08:24:52 by mheinke          ###   ########.fr       */
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
		draw_walls(game);
		player_viewport(game);
	//	ft_printf("Player Direction X: %d\tPlayer Direction Y: %d\n", game->player->direction_x, game->player->direction_y);
	}
	else if (game->state == STATE_EXIT)
	{
		mlx_destroy_window(game->mlx, game->win);
		destroy_all_images(game);
		free_map_array(game, game->map->rows);
		free_all_structs(game);
		exit (1);
	}
}

int	game_loop(t_game *game)
{
	long long	now;
	long long	delta_now;
	
	now = delta_time();
	delta_now = now - game->last_timestamp;
//	game->delta = delta();
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
	
	clock_t start = clock();
	
	check_terminal_arguments(argc, argv);
	read_map(&game, argv[1]);

	init_game(&game);
	init_player(&game);
	init_game_menu(&game, 1);
	init_loadingscreen(&game);

	clock_t end = clock();
	double time_taken = ((double)(end - start)) / CLOCKS_PER_SEC;
	printf("Time taken for game ready: %f seconds\n", time_taken);
	
	do_it(&game);

// Without Threading
// Size: 2
// Time M: 0.034155 seconds
// Size: 3
// Time L: 0.075853 seconds
// Time taken for leftover alloc: 0.248433 seconds
// faster?

	clock_t start2 = clock();
	init_game_menu(&game, 2);
	init_game_menu(&game, 3);
	clock_t end2 = clock();
	double time_taken2 = ((double)(end2 - start2)) / CLOCKS_PER_SEC;
	printf("Time taken for leftover alloc: %f seconds\n", time_taken2);
	printf("Rows: %d, Columns: %d\n", game.map->rows, game.map->columns);

	init_tileset(&game);
	ft_printf("tileset done\n");

	// play_music(BACKGROUND_MUSIC, &game);
	// play_music(JUMP_SFX, &game);
	// play_music(JUMP_SFX, &game);
	// play_music(JUMP_SFX, &game);
	// play_music(JUMP_SFX, &game);
	// play_music(JUMP_SFX, &game);
	mlx_loop(game.mlx);
}
