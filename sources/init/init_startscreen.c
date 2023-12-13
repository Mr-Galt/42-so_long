/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   init_startscreen.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mheinke <mheinke@student.42abudhabi.ae>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/04 12:28:56 by mheinke           #+#    #+#             */
/*   Updated: 2023/12/13 20:43:48 by mheinke          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/so_long.h"

void init_startscreen_s(t_game *game)
{
	int width;
	int height;

	width = game->screen_width * OFFSET_S;
	height = game->screen_height * OFFSET_S;
	game->start_menu->startscreen_s[0] = mlx_xpm_file_to_image(game->mlx, S_STARTSCREEN_MENU, &width, &height);
	game->start_menu->startscreen_s[1] = mlx_xpm_file_to_image(game->mlx, S_STARTSCREEN_START, &width, &height);
	game->start_menu->startscreen_s[2] = mlx_xpm_file_to_image(game->mlx, S_STARTSCREEN_OPTIONS, &width, &height);
	game->start_menu->startscreen_s[3] = mlx_xpm_file_to_image(game->mlx, S_STARTSCREEN_CREDITS, &width, &height);
	game->start_menu->startscreen_s[4] = mlx_xpm_file_to_image(game->mlx, S_STARTSCREEN_EXIT, &width, &height);
}

void init_startscreen_m(t_game *game)
{
	int width;
	int height;

	width = game->screen_width * OFFSET_M;
	height = game->screen_height * OFFSET_M;
	game->start_menu->startscreen_m[0] = mlx_xpm_file_to_image(game->mlx, M_STARTSCREEN_MENU, &width, &height);
	game->start_menu->startscreen_m[1] = mlx_xpm_file_to_image(game->mlx, M_STARTSCREEN_START, &width, &height);
	game->start_menu->startscreen_m[2] = mlx_xpm_file_to_image(game->mlx, M_STARTSCREEN_OPTIONS, &width, &height);
	game->start_menu->startscreen_m[3] = mlx_xpm_file_to_image(game->mlx, M_STARTSCREEN_CREDITS, &width, &height);
	game->start_menu->startscreen_m[4] = mlx_xpm_file_to_image(game->mlx, M_STARTSCREEN_EXIT, &width, &height);
}

void init_startscreen_l(t_game *game)
{
	int width;
	int height;

	width = game->screen_width * OFFSET_L;
	height = game->screen_height * OFFSET_L;
	game->start_menu->startscreen_l[0] = mlx_xpm_file_to_image(game->mlx, L_STARTSCREEN_MENU, &width, &height);
	game->start_menu->startscreen_l[1] = mlx_xpm_file_to_image(game->mlx, L_STARTSCREEN_START, &width, &height);
	game->start_menu->startscreen_l[2] = mlx_xpm_file_to_image(game->mlx, L_STARTSCREEN_OPTIONS, &width, &height);
	game->start_menu->startscreen_l[3] = mlx_xpm_file_to_image(game->mlx, L_STARTSCREEN_CREDITS, &width, &height);
	game->start_menu->startscreen_l[4] = mlx_xpm_file_to_image(game->mlx, L_STARTSCREEN_EXIT, &width, &height);
}

// void init_startscreen(t_game *game)
// {
// 	init_startscreen_s(game);
// 	init_startscreen_m(game);
// 	init_startscreen_l(game);
// 	init_startmenu_buttons(game);
// 	game->start_menu->start_alloc_flag = 1;
// }

void init_startscreen(t_game *game, int size)
{
	printf("Size: %d\n", size);
	if (size == 1){
		clock_t start_s = clock();
		init_startscreen_s(game);
		clock_t end_s = clock();
		double time_s = ((double)(end_s - start_s)) / CLOCKS_PER_SEC;
		printf("Time S: %f seconds\n", time_s);
	}
	else if (size == 2){
		clock_t start_m = clock();
		init_startscreen_m(game);
		clock_t end_m = clock();
		double time_m = ((double)(end_m - start_m)) / CLOCKS_PER_SEC;
		printf("Time M: %f seconds\n", time_m);
	}
	else if (size == 3){
		clock_t start_l = clock();
		init_startscreen_l(game);
		clock_t end_l = clock();
		double time_l = ((double)(end_l - start_l)) / CLOCKS_PER_SEC;
		printf("Time L: %f seconds\n", time_l);
	}
	
	init_startmenu_buttons(game);
	game->start_menu->start_alloc_flag = 1;
}
