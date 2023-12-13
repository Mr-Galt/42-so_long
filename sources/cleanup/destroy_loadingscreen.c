/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   destroy_loadingscreen.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mheinke <mheinke@student.42abudhabi.ae>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/15 21:07:10 by mheinke           #+#    #+#             */
/*   Updated: 2023/12/12 20:13:04 by mheinke          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/so_long.h"

static void	destroy_loadingscreen_s(t_game *game)
{
	mlx_destroy_image(game->mlx, game->loadingscreen->screen_s[0]);
	mlx_destroy_image(game->mlx, game->loadingscreen->screen_s[1]);
	mlx_destroy_image(game->mlx, game->loadingscreen->screen_s[2]);
	mlx_destroy_image(game->mlx, game->loadingscreen->screen_s[3]);
	mlx_destroy_image(game->mlx, game->loadingscreen->screen_s[4]);
}

static void	destroy_loadingscreen_m(t_game *game)
{
	mlx_destroy_image(game->mlx, game->loadingscreen->screen_m[0]);
	mlx_destroy_image(game->mlx, game->loadingscreen->screen_m[1]);
	mlx_destroy_image(game->mlx, game->loadingscreen->screen_m[2]);
	mlx_destroy_image(game->mlx, game->loadingscreen->screen_m[3]);
	mlx_destroy_image(game->mlx, game->loadingscreen->screen_m[4]);
}

static void	destroy_loadingscreen_l(t_game *game)
{
	mlx_destroy_image(game->mlx, game->loadingscreen->screen_l[0]);
	mlx_destroy_image(game->mlx, game->loadingscreen->screen_l[1]);
	mlx_destroy_image(game->mlx, game->loadingscreen->screen_l[2]);
	mlx_destroy_image(game->mlx, game->loadingscreen->screen_l[3]);
	mlx_destroy_image(game->mlx, game->loadingscreen->screen_l[4]);
}

void	destroy_loadingscreen(t_game *game)
{
	if (game->loadingscreen->loading_alloc_flag == 1)
	{
		destroy_loadingscreen_s(game);
		destroy_loadingscreen_m(game);
		destroy_loadingscreen_l(game);
	}
}
