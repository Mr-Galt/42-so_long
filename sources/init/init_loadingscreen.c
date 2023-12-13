/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   init_loadingscreen.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mheinke <mheinke@student.42abudhabi.ae>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/09 09:31:11 by mheinke           #+#    #+#             */
/*   Updated: 2023/12/12 20:10:27 by mheinke          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/so_long.h"

void init_loadingscreen_s(t_game *game)
{
	int width;
	int height;
	
	width = game->screen_width * OFFSET_S;
	height = game->screen_height * OFFSET_S;
	game->loadingscreen->screen_s[0] = mlx_xpm_file_to_image(game->mlx, S_LOADINGSCREEN_0, &width, &height);
	game->loadingscreen->screen_s[1] = mlx_xpm_file_to_image(game->mlx, S_LOADINGSCREEN_1, &width, &height);
	game->loadingscreen->screen_s[2] = mlx_xpm_file_to_image(game->mlx, S_LOADINGSCREEN_2, &width, &height);
	game->loadingscreen->screen_s[3] = mlx_xpm_file_to_image(game->mlx, S_LOADINGSCREEN_3, &width, &height);
	game->loadingscreen->screen_s[4] = mlx_xpm_file_to_image(game->mlx, S_LOADINGSCREEN_4, &width, &height);

}

void init_loadingscreen_m(t_game *game)
{	
	int width;
	int height;
	
	width = game->screen_width * OFFSET_M;
	height = game->screen_height * OFFSET_M;
	game->loadingscreen->screen_m[0] = mlx_xpm_file_to_image(game->mlx, M_LOADINGSCREEN_0, &width, &height);
	game->loadingscreen->screen_m[1] = mlx_xpm_file_to_image(game->mlx, M_LOADINGSCREEN_1, &width, &height);
	game->loadingscreen->screen_m[2] = mlx_xpm_file_to_image(game->mlx, M_LOADINGSCREEN_2, &width, &height);
	game->loadingscreen->screen_m[3] = mlx_xpm_file_to_image(game->mlx, M_LOADINGSCREEN_3, &width, &height);
	game->loadingscreen->screen_m[4] = mlx_xpm_file_to_image(game->mlx, M_LOADINGSCREEN_4, &width, &height);
}

void init_loadingscreen_l(t_game *game)
{	
	int width;
	int height;
	
	width = game->screen_width * OFFSET_L;
	height = game->screen_height * OFFSET_L;
	game->loadingscreen->screen_l[0] = mlx_xpm_file_to_image(game->mlx, L_LOADINGSCREEN_0, &width, &height);
	game->loadingscreen->screen_l[1] = mlx_xpm_file_to_image(game->mlx, L_LOADINGSCREEN_1, &width, &height);
	game->loadingscreen->screen_l[2] = mlx_xpm_file_to_image(game->mlx, L_LOADINGSCREEN_2, &width, &height);
	game->loadingscreen->screen_l[3] = mlx_xpm_file_to_image(game->mlx, L_LOADINGSCREEN_3, &width, &height);
	game->loadingscreen->screen_l[4] = mlx_xpm_file_to_image(game->mlx, L_LOADINGSCREEN_4, &width, &height);
}

void	init_loadingscreen(t_game *game)
{
	init_loadingscreen_s(game);
	init_loadingscreen_m(game);
	init_loadingscreen_l(game);
	game->loadingscreen->loading_alloc_flag = 1;
}