/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   init_optionscreen.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mheinke <mheinke@student.42abudhabi.ae>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/05 20:54:48 by mheinke           #+#    #+#             */
/*   Updated: 2023/11/12 18:12:11 by mheinke          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/so_long.h"

void coordinates_option_back(t_game *game)
{
	game->start_menu->option_back[0] = 123 * game->screen_size;
	game->start_menu->option_back[1] = 255 * game->screen_size;
	game->start_menu->option_back[2] = 196 * game->screen_size;
	game->start_menu->option_back[3] = 282 * game->screen_size;
}

void coordinates_button_screensize_1(t_game *game)
{
	game->start_menu->button_screensize_1[0] = 196 * game->screen_size;
	game->start_menu->button_screensize_1[1] = 85 * game->screen_size;
	game->start_menu->button_screensize_1[2] = 209 * game->screen_size;
	game->start_menu->button_screensize_1[3] = 99 * game->screen_size;
}

void coordinates_button_screensize_2(t_game *game)
{
	game->start_menu->button_screensize_2[0] = 196 * game->screen_size;
	game->start_menu->button_screensize_2[1] = 108 * game->screen_size;
	game->start_menu->button_screensize_2[2] = 209 * game->screen_size;
	game->start_menu->button_screensize_2[3] = 122 * game->screen_size;
}

void coordinates_button_screensize_3(t_game *game)
{
	game->start_menu->button_screensize_3[0] = 196 * game->screen_size;
	game->start_menu->button_screensize_3[1] = 130 * game->screen_size;
	game->start_menu->button_screensize_3[2] = 209 * game->screen_size;
	game->start_menu->button_screensize_3[3] = 144 * game->screen_size;
}

void init_optionscreen_s(t_game *game)
{
	// int x;
	// int y;
	
	// x = 80;
	// y = 30;
	// game->start_menu->optionscreen_button[0] = mlx_xpm_file_to_image(game->mlx, OPTION_BUTTON_BACK_1, &x, &y);
	// game->start_menu->optionscreen_button[1] = mlx_xpm_file_to_image(game->mlx, OPTION_BUTTON_BACK_2, &x, &y);
	
	int width;
	int height;
	int option_width;
	int option_height;

	width = game->screen_width * OFFSET_S;
	height = game->screen_height * OFFSET_S;
	option_width = 294;
	option_height = 98;
	game->start_menu->optionscreen_status = 0;
	game->start_menu->optionscreen_s[0] = mlx_xpm_file_to_image(game->mlx, S_OPTIONSCREEN_0, &width, &height);
	game->start_menu->optionscreen_s[1] = mlx_xpm_file_to_image(game->mlx, S_OPTIONSCREEN_1, &width, &height);
	game->start_menu->option_screensize_s[0] = mlx_xpm_file_to_image(game->mlx, S_OPTION_0, &option_width, &option_height);
	game->start_menu->option_screensize_s[1] = mlx_xpm_file_to_image(game->mlx, S_OPTION_1, &option_width, &option_height);
	game->start_menu->option_screensize_s[2] = mlx_xpm_file_to_image(game->mlx, S_OPTION_2, &option_width, &option_height);
}

void init_optionscreen(t_game *game)
{
	init_optionscreen_s(game);
	coordinates_option_back(game);
	coordinates_button_screensize_1(game);
	coordinates_button_screensize_2(game);
	coordinates_button_screensize_3(game);
	game->start_menu->option_screensize_status = 1;
}