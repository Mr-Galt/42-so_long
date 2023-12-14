/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   init_creditscreen.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mheinke <mheinke@student.42abudhabi.ae>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/05 20:54:52 by mheinke           #+#    #+#             */
/*   Updated: 2023/12/14 16:40:00 by mheinke          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/so_long.h"

void	coordinates_credit_back(t_game *game)
{
	game->start_menu->credit_back[0] = 287 * game->screen_size;
	game->start_menu->credit_back[1] = 25 * game->screen_size;
	game->start_menu->credit_back[2] = 347 * game->screen_width;
	game->start_menu->credit_back[3] = 43 * game->screen_size;
}

void	init_creditscreen_s(t_game *game)
{
	int	width;
	int	height;

	width = game->screen_width * OFFSET_S;
	height = game->screen_height * OFFSET_S;
	game->start_menu->creditscreen_s[0] = mlx_xpm_file_to_image(game->mlx,
			S_CREDITSCREEN_0, &width, &height);
	game->start_menu->creditscreen_s[1] = mlx_xpm_file_to_image(game->mlx,
			S_CREDITSCREEN_1, &width, &height);
}

void	init_creditscreen_m(t_game *game)
{
	int	width;
	int	height;

	width = game->screen_width * OFFSET_M;
	height = game->screen_height * OFFSET_M;
	game->start_menu->creditscreen_m[0] = mlx_xpm_file_to_image(game->mlx,
			M_CREDITSCREEN_0, &width, &height);
	game->start_menu->creditscreen_m[1] = mlx_xpm_file_to_image(game->mlx,
			M_CREDITSCREEN_1, &width, &height);
}

void	init_creditscreen_l(t_game *game)
{
	int	width;
	int	height;

	width = game->screen_width * OFFSET_L;
	height = game->screen_height * OFFSET_L;
	game->start_menu->creditscreen_l[0] = mlx_xpm_file_to_image(game->mlx,
			L_CREDITSCREEN_0, &width, &height);
	game->start_menu->creditscreen_l[1] = mlx_xpm_file_to_image(game->mlx,
			L_CREDITSCREEN_1, &width, &height);
}

void	init_creditscreen(t_game *game, int size)
{
	game->start_menu->creditscreen_status = 0;
	if (size == 1)
		init_creditscreen_s(game);
	else if (size == 2)
		init_creditscreen_m(game);
	else if (size == 3)
		init_creditscreen_l(game);
	coordinates_credit_back(game);
	game->start_menu->credit_alloc_flag = 1;
}
