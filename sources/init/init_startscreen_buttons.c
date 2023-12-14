/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   init_startscreen_buttons.c                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mheinke <mheinke@student.42abudhabi.ae>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/12 08:22:37 by mheinke           #+#    #+#             */
/*   Updated: 2023/12/14 16:32:58 by mheinke          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/so_long.h"

void	coordinates_start_button(t_game *game)
{
	game->start_menu->start_button[0] = 294 * game->screen_size;
	game->start_menu->start_button[1] = 205 * game->screen_size;
	game->start_menu->start_button[2] = 365 * game->screen_size;
	game->start_menu->start_button[3] = 222 * game->screen_size;
}

void	coordinates_options_button(t_game *game)
{
	game->start_menu->start_options[0] = 232 * game->screen_size;
	game->start_menu->start_options[1] = 241 * game->screen_size;
	game->start_menu->start_options[2] = 375 * game->screen_size;
	game->start_menu->start_options[3] = 257 * game->screen_size;
}

void	coordinates_credits_button(t_game *game)
{
	game->start_menu->start_credits[0] = 284 * game->screen_size;
	game->start_menu->start_credits[1] = 276 * game->screen_size;
	game->start_menu->start_credits[2] = 375 * game->screen_size;
	game->start_menu->start_credits[3] = 291 * game->screen_size;
}

void	coordinates_exit_button(t_game *game)
{
	game->start_menu->start_exit[0] = 304 * game->screen_size;
	game->start_menu->start_exit[1] = 310 * game->screen_size;
	game->start_menu->start_exit[2] = 354 * game->screen_size;
	game->start_menu->start_exit[3] = 327 * game->screen_size;
}

void	init_startmenu_buttons(t_game *game)
{
	coordinates_start_button(game);
	coordinates_options_button(game);
	coordinates_credits_button(game);
	coordinates_exit_button(game);
}
