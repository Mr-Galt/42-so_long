/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   init_optionscreen_buttons.c                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mheinke <mheinke@student.42abudhabi.ae>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/15 20:18:24 by mheinke           #+#    #+#             */
/*   Updated: 2023/12/14 16:35:46 by mheinke          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/so_long.h"

void	coordinates_option_back(t_game *game)
{
	game->start_menu->option_back[0] = 123 * game->screen_size;
	game->start_menu->option_back[1] = 255 * game->screen_size;
	game->start_menu->option_back[2] = 196 * game->screen_size;
	game->start_menu->option_back[3] = 282 * game->screen_size;
}

void	coordinates_button_screensize_1(t_game *game)
{
	game->start_menu->button_screensize_1[0] = 196 * game->screen_size;
	game->start_menu->button_screensize_1[1] = 85 * game->screen_size;
	game->start_menu->button_screensize_1[2] = 209 * game->screen_size;
	game->start_menu->button_screensize_1[3] = 99 * game->screen_size;
}

void	coordinates_button_screensize_2(t_game *game)
{
	game->start_menu->button_screensize_2[0] = 196 * game->screen_size;
	game->start_menu->button_screensize_2[1] = 108 * game->screen_size;
	game->start_menu->button_screensize_2[2] = 209 * game->screen_size;
	game->start_menu->button_screensize_2[3] = 122 * game->screen_size;
}

void	coordinates_button_screensize_3(t_game *game)
{
	game->start_menu->button_screensize_3[0] = 196 * game->screen_size;
	game->start_menu->button_screensize_3[1] = 130 * game->screen_size;
	game->start_menu->button_screensize_3[2] = 209 * game->screen_size;
	game->start_menu->button_screensize_3[3] = 144 * game->screen_size;
}

void	init_buttons_optionscreen(t_game *game)
{
	coordinates_option_back(game);
	coordinates_button_screensize_1(game);
	coordinates_button_screensize_2(game);
	coordinates_button_screensize_3(game);
}
