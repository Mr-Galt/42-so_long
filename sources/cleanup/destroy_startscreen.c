/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   destroy_startmenu.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mheinke <mheinke@student.42abudhabi.ae>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/15 20:39:44 by mheinke           #+#    #+#             */
/*   Updated: 2023/11/15 21:02:51 by mheinke          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/so_long.h"

static void	destroy_startscreen_s(t_game *game)
{
	mlx_destroy_image(game->mlx, game->start_menu->startscreen_s[0]);
	mlx_destroy_image(game->mlx, game->start_menu->startscreen_s[1]);
	mlx_destroy_image(game->mlx, game->start_menu->startscreen_s[2]);
	mlx_destroy_image(game->mlx, game->start_menu->startscreen_s[3]);
	mlx_destroy_image(game->mlx, game->start_menu->startscreen_s[4]);
}

static void	destroy_startscreen_m(t_game *game)
{
	mlx_destroy_image(game->mlx, game->start_menu->startscreen_m[0]);
	mlx_destroy_image(game->mlx, game->start_menu->startscreen_m[1]);
	mlx_destroy_image(game->mlx, game->start_menu->startscreen_m[2]);
	mlx_destroy_image(game->mlx, game->start_menu->startscreen_m[3]);
	mlx_destroy_image(game->mlx, game->start_menu->startscreen_m[4]);
}

static void	destroy_startscreen_l(t_game *game)
{
	mlx_destroy_image(game->mlx, game->start_menu->startscreen_l[0]);
	mlx_destroy_image(game->mlx, game->start_menu->startscreen_l[1]);
	mlx_destroy_image(game->mlx, game->start_menu->startscreen_l[2]);
	mlx_destroy_image(game->mlx, game->start_menu->startscreen_l[3]);
	mlx_destroy_image(game->mlx, game->start_menu->startscreen_l[4]);
}

void	destroy_startscreen(t_game *game)
{
	destroy_startscreen_s(game);
	destroy_startscreen_m(game);
	destroy_startscreen_l(game);
}