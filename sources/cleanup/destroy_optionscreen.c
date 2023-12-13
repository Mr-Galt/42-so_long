/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   destroy_optionscreen.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mheinke <mheinke@student.42abudhabi.ae>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/15 20:39:44 by mheinke           #+#    #+#             */
/*   Updated: 2023/12/12 20:13:38 by mheinke          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/so_long.h"

static void	destroy_option_s(t_game *game)
{
	mlx_destroy_image(game->mlx, game->start_menu->optionscreen_s[0]);
	mlx_destroy_image(game->mlx, game->start_menu->optionscreen_s[1]);
	mlx_destroy_image(game->mlx, game->start_menu->option_screensize_s[0]);
	mlx_destroy_image(game->mlx, game->start_menu->option_screensize_s[1]);
	mlx_destroy_image(game->mlx, game->start_menu->option_screensize_s[2]);
}

static void	destroy_option_m(t_game *game)
{
	mlx_destroy_image(game->mlx, game->start_menu->optionscreen_m[0]);
	mlx_destroy_image(game->mlx, game->start_menu->optionscreen_m[1]);
	mlx_destroy_image(game->mlx, game->start_menu->option_screensize_m[0]);
	mlx_destroy_image(game->mlx, game->start_menu->option_screensize_m[1]);
	mlx_destroy_image(game->mlx, game->start_menu->option_screensize_m[2]);
}

static void	destroy_option_l(t_game *game)
{
	mlx_destroy_image(game->mlx, game->start_menu->optionscreen_l[0]);
	mlx_destroy_image(game->mlx, game->start_menu->optionscreen_l[1]);
	mlx_destroy_image(game->mlx, game->start_menu->option_screensize_l[0]);
	mlx_destroy_image(game->mlx, game->start_menu->option_screensize_l[1]);
	mlx_destroy_image(game->mlx, game->start_menu->option_screensize_l[2]);
}

void	destroy_optionscreen(t_game *game)
{
	if (game->start_menu->option_alloc_flag == 1)
	{
		destroy_option_s(game);
		destroy_option_m(game);
		destroy_option_l(game);
	}
}
