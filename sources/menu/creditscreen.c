/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   creditscreen.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mheinke <mheinke@student.42abudhabi.ae>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/14 16:02:35 by mheinke           #+#    #+#             */
/*   Updated: 2023/12/14 16:27:12 by mheinke          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/so_long.h"

void	creditscreen_s(t_game *game)
{
	if (game->start_menu->creditscreen_status == 0)
		render_img(0, 0, game->start_menu->creditscreen_s[0], game);
	else if (game->start_menu->creditscreen_status == 1)
		render_img(0, 0, game->start_menu->creditscreen_s[1], game);
}

void	creditscreen_m(t_game *game)
{
	if (game->start_menu->creditscreen_status == 0)
		render_img(0, 0, game->start_menu->creditscreen_m[0], game);
	else if (game->start_menu->creditscreen_status == 1)
		render_img(0, 0, game->start_menu->creditscreen_m[1], game);
}

void	creditscreen_l(t_game *game)
{
	if (game->start_menu->creditscreen_status == 0)
		render_img(0, 0, game->start_menu->creditscreen_l[0], game);
	else if (game->start_menu->creditscreen_status == 1)
		render_img(0, 0, game->start_menu->creditscreen_l[1], game);
}

void	creditscreen(t_game *game)
{
	if (game->screen_size == OFFSET_S)
		creditscreen_s(game);
	else if (game->screen_size == OFFSET_M)
		creditscreen_m(game);
	else if (game->screen_size == OFFSET_L)
		creditscreen_l(game);
	coordinates_credit_back(game);
}
