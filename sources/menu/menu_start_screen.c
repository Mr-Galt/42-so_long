/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   menu_start_screen.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mheinke <mheinke@student.42abudhabi.ae>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/07 13:12:51 by mheinke           #+#    #+#             */
/*   Updated: 2023/12/13 19:29:03 by mheinke          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/so_long.h"

void optionscreen_s(t_game *game)
{
		if (game->start_menu->optionscreen_status == 0)
			render_img(0, 0, game->start_menu->optionscreen_s[0], game);
		else if (game->start_menu->optionscreen_status == 1)
			render_img(0, 0, game->start_menu->optionscreen_s[1], game);

		if (game->start_menu->option_screensize_status == 1)
			render_img(190 * OFFSET_S, 56 * OFFSET_S, game->start_menu->option_screensize_s[0], game);
		else if (game->start_menu->option_screensize_status == 2)
			render_img(190 * OFFSET_S, 56 * OFFSET_S, game->start_menu->option_screensize_s[1], game);
		else if (game->start_menu->option_screensize_status == 3)
			render_img(190 * OFFSET_S, 56 * OFFSET_S, game->start_menu->option_screensize_s[2], game);
}

void optionscreen_m(t_game *game)
{
		if (game->start_menu->optionscreen_status == 0)
			render_img(0, 0, game->start_menu->optionscreen_m[0], game);
		else if (game->start_menu->optionscreen_status == 1)
			render_img(0, 0, game->start_menu->optionscreen_m[1], game);

		if (game->start_menu->option_screensize_status == 1)
			render_img(190 * OFFSET_M, 56 * OFFSET_M, game->start_menu->option_screensize_m[0], game);
		else if (game->start_menu->option_screensize_status == 2)
			render_img(190 * OFFSET_M, 56 * OFFSET_M, game->start_menu->option_screensize_m[1], game);
		else if (game->start_menu->option_screensize_status == 3)
			render_img(190 * OFFSET_M, 56 * OFFSET_M, game->start_menu->option_screensize_m[2], game);
}

void optionscreen_l(t_game *game)
{
		if (game->start_menu->optionscreen_status == 0)
			render_img(0, 0, game->start_menu->optionscreen_l[0], game);
		else if (game->start_menu->optionscreen_status == 1)
			render_img(0, 0, game->start_menu->optionscreen_l[1], game);

		if (game->start_menu->option_screensize_status == 1)
			render_img(190 * OFFSET_L, 56 * OFFSET_L, game->start_menu->option_screensize_l[0], game);
		else if (game->start_menu->option_screensize_status == 2)
			render_img(190 * OFFSET_L, 56 * OFFSET_L, game->start_menu->option_screensize_l[1], game);
		else if (game->start_menu->option_screensize_status == 3)
			render_img(190 * OFFSET_L, 56 * OFFSET_L, game->start_menu->option_screensize_l[2], game);
}

void optionscreen(t_game *game)
{
	if (game->screen_size == OFFSET_S)
		optionscreen_s(game);
	else if (game->screen_size == OFFSET_M)
		optionscreen_m(game);
	else if (game->screen_size == OFFSET_L)
		optionscreen_l(game);

	init_buttons_optionscreen(game);
}
void creditscreen_s(t_game *game)
{
	if (game->start_menu->creditscreen_status == 0)
		render_img(0, 0, game->start_menu->creditscreen_s[0], game);
	else if (game->start_menu->creditscreen_status == 1)
		render_img(0, 0, game->start_menu->creditscreen_s[1], game);
}

void creditscreen_m(t_game *game)
{
	if (game->start_menu->creditscreen_status == 0)
		render_img(0, 0, game->start_menu->creditscreen_m[0], game);
	else if (game->start_menu->creditscreen_status == 1)
		render_img(0, 0, game->start_menu->creditscreen_m[1], game);
}

void creditscreen_l(t_game *game)
{
	if (game->start_menu->creditscreen_status == 0)
		render_img(0, 0, game->start_menu->creditscreen_l[0], game);
	else if (game->start_menu->creditscreen_status == 1)
		render_img(0, 0, game->start_menu->creditscreen_l[1], game);
}

void creditscreen(t_game *game)
{	
	if (game->screen_size == OFFSET_S)
		creditscreen_s(game);
	else if (game->screen_size == OFFSET_M)
		creditscreen_m(game);
	else if (game->screen_size == OFFSET_L)
		creditscreen_l(game);

	coordinates_credit_back(game);
}

void init_game_menu(t_game*game, int size)
{
	init_startscreen(game, size);
	init_creditscreen(game, size);
	init_optionscreen(game, size);
	init_creditscreen(game, size);
}
