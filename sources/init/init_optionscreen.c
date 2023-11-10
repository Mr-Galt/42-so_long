/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   init_optionscreen.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mheinke <mheinke@student.42abudhabi.ae>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/05 20:54:48 by mheinke           #+#    #+#             */
/*   Updated: 2023/11/10 12:47:32 by mheinke          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/so_long.h"

void coordinates_option_back(t_game *game)
{
	game->start_menu->option_back[0] = 123;
	game->start_menu->option_back[1] = 255;
	game->start_menu->option_back[2] = 196;
	game->start_menu->option_back[3] = 282;
}

void init_optionscreen(t_game *game)
{
	int x;
	int y;
	
	x = 80;
	y = 30;
	game->start_menu->optionscreen_status = 0;
	game->start_menu->optionscreen = mlx_xpm_file_to_image(game->mlx, OPTIONSCREEN, &game->screen_width, &game->screen_height);
	game->start_menu->optionscreen_button[0] = mlx_xpm_file_to_image(game->mlx, OPTION_BUTTON_BACK_1, &x, &y);
	game->start_menu->optionscreen_button[1] = mlx_xpm_file_to_image(game->mlx, OPTION_BUTTON_BACK_2, &x, &y);
	coordinates_option_back(game);
}