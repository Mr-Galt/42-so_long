/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   optionscreen.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mheinke <mheinke@student.42abudhabi.ae>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/14 16:03:26 by mheinke           #+#    #+#             */
/*   Updated: 2023/12/14 16:03:59 by mheinke          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/so_long.h"

void	optionscreen_s(t_game *game)
{
	if (game->start_menu->optionscreen_status == 0)
		render_img(0, 0, game->start_menu->optionscreen_s[0], game);
	else if (game->start_menu->optionscreen_status == 1)
		render_img(0, 0, game->start_menu->optionscreen_s[1], game);
	if (game->start_menu->option_screensize_status == 1)
		render_img(190 * OFFSET_S, 56 * OFFSET_S,
			game->start_menu->option_screensize_s[0], game);
	else if (game->start_menu->option_screensize_status == 2)
		render_img(190 * OFFSET_S, 56 * OFFSET_S,
			game->start_menu->option_screensize_s[1], game);
	else if (game->start_menu->option_screensize_status == 3)
		render_img(190 * OFFSET_S, 56 * OFFSET_S,
			game->start_menu->option_screensize_s[2], game);
}

void	optionscreen_m(t_game *game)
{
	if (game->start_menu->optionscreen_status == 0)
		render_img(0, 0, game->start_menu->optionscreen_m[0], game);
	else if (game->start_menu->optionscreen_status == 1)
		render_img(0, 0, game->start_menu->optionscreen_m[1], game);
	if (game->start_menu->option_screensize_status == 1)
		render_img(190 * OFFSET_M, 56 * OFFSET_M,
			game->start_menu->option_screensize_m[0], game);
	else if (game->start_menu->option_screensize_status == 2)
		render_img(190 * OFFSET_M, 56 * OFFSET_M,
			game->start_menu->option_screensize_m[1], game);
	else if (game->start_menu->option_screensize_status == 3)
		render_img(190 * OFFSET_M, 56 * OFFSET_M,
			game->start_menu->option_screensize_m[2], game);
}

void	optionscreen_l(t_game *game)
{
	if (game->start_menu->optionscreen_status == 0)
		render_img(0, 0, game->start_menu->optionscreen_l[0], game);
	else if (game->start_menu->optionscreen_status == 1)
		render_img(0, 0, game->start_menu->optionscreen_l[1], game);
	if (game->start_menu->option_screensize_status == 1)
		render_img(190 * OFFSET_L, 56 * OFFSET_L,
			game->start_menu->option_screensize_l[0], game);
	else if (game->start_menu->option_screensize_status == 2)
		render_img(190 * OFFSET_L, 56 * OFFSET_L,
			game->start_menu->option_screensize_l[1], game);
	else if (game->start_menu->option_screensize_status == 3)
		render_img(190 * OFFSET_L, 56 * OFFSET_L,
			game->start_menu->option_screensize_l[2], game);
}

void	optionscreen(t_game *game)
{
	if (game->screen_size == OFFSET_S)
		optionscreen_s(game);
	else if (game->screen_size == OFFSET_M)
		optionscreen_m(game);
	else if (game->screen_size == OFFSET_L)
		optionscreen_l(game);
	init_buttons_optionscreen(game);
}
