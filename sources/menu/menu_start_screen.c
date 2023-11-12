/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   menu_start_screen.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mheinke <mheinke@student.42abudhabi.ae>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/07 13:12:51 by mheinke           #+#    #+#             */
/*   Updated: 2023/11/12 18:11:15 by mheinke          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/so_long.h"

void optionscreen(t_game *game)
{
	if (game->start_menu->optionscreen_status == 0)
		render_img(0, 0, game->start_menu->optionscreen_s[0], game);
	else if (game->start_menu->optionscreen_status == 1)
	 	render_img(0, 0, game->start_menu->optionscreen_s[1], game);

	if (game->start_menu->option_screensize_status == 1)
		render_img(190, 56, game->start_menu->option_screensize_s[0], game);
	else if (game->start_menu->option_screensize_status == 2)
		render_img(190, 56, game->start_menu->option_screensize_s[1], game);
	else if (game->start_menu->option_screensize_status == 3)
		render_img(190, 56, game->start_menu->option_screensize_s[2], game);
}

void creditscreen(t_game *game)
{
	if (game->start_menu->creditscreen_status == 0)
		render_img(0, 0, game->start_menu->creditscreen_s[0], game);
	else if (game->start_menu->creditscreen_status == 1)
		render_img(0, 0, game->start_menu->creditscreen_s[1], game);
}

void init_game_menu(t_game*game)
{
	init_startscreen(game);
	init_creditscreen(game);
	init_optionscreen(game);
	init_creditscreen(game);
}
