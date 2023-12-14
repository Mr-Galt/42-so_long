/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mheinke <mheinke@student.42abudhabi.ae>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/18 09:20:58 by mheinke           #+#    #+#             */
/*   Updated: 2023/12/14 10:52:14 by mheinke          ###   ########.fr       */
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
		destroy_all_images(game);
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

// typedef struct {
// t_game *game;
// int size;
// } thread_data_t;

// void *init_game_menu_thread(void *arg) {
//     thread_data_t *data = (thread_data_t *)arg;
//     init_game_menu(data->game, data->size);
//     return NULL;
// }

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
	
// With Threading
// Size: 3
// Size: 2
// Time M: 0.079592 seconds
// Time L: 0.178622 seconds
// Time taken for leftover alloc: 0.286255 seconds
// Threading OVERHEAD?
	
	// clock_t start2 = clock();

	// pthread_t thread1, thread2;
    // thread_data_t data1, data2;
	// data1.game = &game;
    // data1.size = 2;
    // data2.game = &game;
    // data2.size = 3;
    // pthread_create(&thread2, NULL, init_game_menu_thread, (void *)&data2);
	// pthread_create(&thread1, NULL, init_game_menu_thread, (void *)&data1);
	// pthread_join(thread2, NULL);
	// pthread_join(thread1, NULL);

	// clock_t end2 = clock();
	// double time_taken2 = ((double)(end2 - start2)) / CLOCKS_PER_SEC;
	// printf("Time taken for leftover alloc: %f seconds\n", time_taken2);
	
// Threading ends here	

	// play_music(BACKGROUND_MUSIC, &game);
	// play_music(JUMP_SFX, &game);
	// play_music(JUMP_SFX, &game);
	// play_music(JUMP_SFX, &game);
	// play_music(JUMP_SFX, &game);
	// play_music(JUMP_SFX, &game);
	mlx_loop(game.mlx);
}
