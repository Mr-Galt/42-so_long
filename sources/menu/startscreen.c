/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   startscreen.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mheinke <mheinke@student.42abudhabi.ae>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/12 08:30:34 by mheinke           #+#    #+#             */
/*   Updated: 2023/11/12 10:35:52 by mheinke          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/so_long.h"

void	startscreen_s(t_game *game)
{
	if (game->start_menu->startscreen_status == 0)
	 	render_img(0, 0, game->start_menu->startscreen_s[0], game);
	else if (game->start_menu->startscreen_status == 1)
	 	render_img(0, 0, game->start_menu->startscreen_s[1], game);
	else if (game->start_menu->startscreen_status == 2)
	 	render_img(0, 0, game->start_menu->startscreen_s[2], game);
	else if (game->start_menu->startscreen_status == 3)
	 	render_img(0, 0, game->start_menu->startscreen_s[3], game);
	else if (game->start_menu->startscreen_status == 4)
	 	render_img(0, 0, game->start_menu->startscreen_s[4], game);
}

void	startscreen_m(t_game *game)
{
	if (game->start_menu->startscreen_status == 0)
	 	render_img(0, 0, game->start_menu->startscreen_m[0], game);
	else if (game->start_menu->startscreen_status == 1)
	 	render_img(0, 0, game->start_menu->startscreen_m[1], game);
	else if (game->start_menu->startscreen_status == 2)
	 	render_img(0, 0, game->start_menu->startscreen_m[2], game);
	else if (game->start_menu->startscreen_status == 3)
	 	render_img(0, 0, game->start_menu->startscreen_m[3], game);
	else if (game->start_menu->startscreen_status == 4)
	 	render_img(0, 0, game->start_menu->startscreen_m[4], game);
}

void startscreen(t_game *game)
{
	if (game->screen_size == OFFSET_S)
		startscreen_s(game);
	else if (game->screen_size == OFFSET_M)
		startscreen_m(game);
	else if (game->screen_size == OFFSET_L)
		startscreen_s(game);
	init_startmenu_buttons(game);
}