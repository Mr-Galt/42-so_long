/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   init_startscreen.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mheinke <mheinke@student.42abudhabi.ae>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/04 12:28:56 by mheinke           #+#    #+#             */
/*   Updated: 2023/11/04 12:40:19 by mheinke          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/so_long.h"

void coordinates_start_button(t_game *game)
{
	game->status->start_button[0] = 294;
	game->status->start_button[1] = 205;
	game->status->start_button[2] = 365;
	game->status->start_button[3] = 222;
}
void coordinates_options_button(t_game *game)
{
	game->status->start_options[0] = 232;
	game->status->start_options[1] = 241;
	game->status->start_options[2] = 375;
	game->status->start_options[3] = 257;
}

void coordinates_credits_button(t_game *game)
{
	game->status->start_credits[0] = 284;
	game->status->start_credits[1] = 276;
	game->status->start_credits[2] = 375;
	game->status->start_credits[3] = 291;
}

void coordinates_exit_button(t_game *game)
{
	game->status->start_exit[0] = 304;
	game->status->start_exit[1] = 310;
	game->status->start_exit[2] = 354;
	game->status->start_exit[3] = 327;
}

void init_startscreen(t_game *game)
{
	game->status->startscreen[0] = mlx_xpm_file_to_image(game->mlx, STARTSCREEN_MENU, &game->screen_width, &game->screen_height);
	game->status->startscreen[1] = mlx_xpm_file_to_image(game->mlx, STARTSCREEN_START, &game->screen_width, &game->screen_height);
	game->status->startscreen[2] = mlx_xpm_file_to_image(game->mlx, STARTSCREEN_OPTIONS, &game->screen_width, &game->screen_height);
	game->status->startscreen[3] = mlx_xpm_file_to_image(game->mlx, STARTSCREEN_CREDITS, &game->screen_width, &game->screen_height);
	game->status->startscreen[4] = mlx_xpm_file_to_image(game->mlx, STARTSCREEN_EXIT, &game->screen_width, &game->screen_height);
	coordinates_start_button(game);
	coordinates_options_button(game);
	coordinates_credits_button(game);
	coordinates_exit_button(game);
}

