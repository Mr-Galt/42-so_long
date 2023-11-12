/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   init_startscreen.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mheinke <mheinke@student.42abudhabi.ae>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/04 12:28:56 by mheinke           #+#    #+#             */
/*   Updated: 2023/11/12 10:20:55 by mheinke          ###   ########.fr       */
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


void init_startscreen(t_game *game)
{
	init_startscreen_s(game);
	init_startscreen_m(game);
	init_startmenu_buttons(game);
}

