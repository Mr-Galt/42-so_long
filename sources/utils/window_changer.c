/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   window_changer.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mheinke <mheinke@student.42abudhabi.ae>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/12 18:25:35 by mheinke           #+#    #+#             */
/*   Updated: 2023/11/12 18:42:21 by mheinke          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/so_long.h"

void	change_to_s(t_game *game)
{
	mlx_destroy_window(game->mlx, game->win);
	game->screen_height = 640;
	game->screen_width = 480;
	game->screen_size = OFFSET_S;
	game->win = mlx_new_window(game->mlx, game->screen_height, game->screen_width, "OFFSET S");
	game->start_menu->startscreen_status = 0;
	do_it(game);
}

void	change_to_m(t_game *game)
{
	mlx_destroy_window(game->mlx, game->win);
	game->screen_height = 1280;
	game->screen_width = 960;
	game->screen_size = OFFSET_M;
	game->win = mlx_new_window(game->mlx, game->screen_height, game->screen_width, "OFFSET M");
	game->start_menu->startscreen_status = 0;
	do_it(game);
}

void	change_to_l(t_game *game)
{
	mlx_destroy_window(game->mlx, game->win);
	game->screen_height = 1920;
	game->screen_width = 1440;
	game->screen_size = OFFSET_L;
	game->win = mlx_new_window(game->mlx, game->screen_height, game->screen_width, "OFFSET L");
	game->start_menu->startscreen_status = 0;
	do_it(game);
}

void	window_changer(t_game *game)
{
	if (check_screenstatus(game) == 1)
		change_to_s(game);
	if (check_screenstatus(game) == 2)
		change_to_m(game);
	if (check_screenstatus(game) == 3)
		change_to_l(game);
}