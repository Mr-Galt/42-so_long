/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   startmenu.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mheinke <mheinke@student.42abudhabi.ae>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/07 13:12:51 by mheinke           #+#    #+#             */
/*   Updated: 2023/11/07 14:25:46 by mheinke          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/so_long.h"

void startscreen(t_game *game)
{
	if (game->status->startscreen_status == 0)
	 	render_img(0, 0, game->status->startscreen[0], game);
	else if (game->status->startscreen_status == 1)
	 	render_img(0, 0, game->status->startscreen[1], game);
	else if (game->status->startscreen_status == 2)
	 	render_img(0, 0, game->status->startscreen[2], game);
	else if (game->status->startscreen_status == 3)
	 	render_img(0, 0, game->status->startscreen[3], game);
	else if (game->status->startscreen_status == 4)
	 	render_img(0, 0, game->status->startscreen[4], game);
}

void optionscreen(t_game *game)
{
	if (game->status->optionscreen_status == 0)
		render_img(0, 0, game->status->optionscreen[0], game);
	else if (game->status->optionscreen_status == 1)
	 	render_img(0, 0, game->status->optionscreen[1], game);
}

void creditscreen(t_game *game)
{
	if (game->status->creditscreen_status == 0)
		render_img(0, 0, game->status->creditscreen[0], game);
	else if (game->status->creditscreen_status == 1)
		render_img(0, 0, game->status->creditscreen[1], game);
}

void init_game_menu(t_game*game)
{
	init_startscreen(game);
	init_creditscreen(game);
	init_optionscreen(game);
	init_creditscreen(game);
}
