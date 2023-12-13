/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   init_optionscreen.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mheinke <mheinke@student.42abudhabi.ae>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/05 20:54:48 by mheinke           #+#    #+#             */
/*   Updated: 2023/12/13 19:32:02 by mheinke          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/so_long.h"

void init_optionscreen_s(t_game *game)
{
	int width;
	int height;
	int option_width;
	int option_height;

	width = game->screen_width * OFFSET_S;
	height = game->screen_height * OFFSET_S;
	option_width = 294;
	option_height = 98;
	game->start_menu->optionscreen_status = 0;
	game->start_menu->optionscreen_s[0] = mlx_xpm_file_to_image(game->mlx, S_OPTIONSCREEN_0, &width, &height);
	game->start_menu->optionscreen_s[1] = mlx_xpm_file_to_image(game->mlx, S_OPTIONSCREEN_1, &width, &height);
	game->start_menu->option_screensize_s[0] = mlx_xpm_file_to_image(game->mlx, S_OPTION_0, &option_width, &option_height);
	game->start_menu->option_screensize_s[1] = mlx_xpm_file_to_image(game->mlx, S_OPTION_1, &option_width, &option_height);
	game->start_menu->option_screensize_s[2] = mlx_xpm_file_to_image(game->mlx, S_OPTION_2, &option_width, &option_height);
}

void	init_optionscreen_m(t_game *game)
{
	int width;
	int height;
	int option_width;
	int option_height;

	width = game->screen_width * OFFSET_M;
	height = game->screen_height * OFFSET_M;
	option_width = 588;
	option_height = 196;
	game->start_menu->optionscreen_status = 0;
	game->start_menu->optionscreen_m[0] = mlx_xpm_file_to_image(game->mlx, M_OPTIONSCREEN_0, &width, &height);
	game->start_menu->optionscreen_m[1] = mlx_xpm_file_to_image(game->mlx, M_OPTIONSCREEN_1, &width, &height);
	game->start_menu->option_screensize_m[0] = mlx_xpm_file_to_image(game->mlx, M_OPTION_0, &option_width, &option_height);
	game->start_menu->option_screensize_m[1] = mlx_xpm_file_to_image(game->mlx, M_OPTION_1, &option_width, &option_height);
	game->start_menu->option_screensize_m[2] = mlx_xpm_file_to_image(game->mlx, M_OPTION_2, &option_width, &option_height);
}

void	init_optionscreen_l(t_game *game)
{
	int width;
	int height;
	int option_width;
	int option_height;

	width = game->screen_width * OFFSET_L;
	height = game->screen_height * OFFSET_L;
	option_width = 882;
	option_height = 294;
	game->start_menu->optionscreen_status = 0;
	game->start_menu->optionscreen_l[0] = mlx_xpm_file_to_image(game->mlx, L_OPTIONSCREEN_0, &width, &height);
	game->start_menu->optionscreen_l[1] = mlx_xpm_file_to_image(game->mlx, L_OPTIONSCREEN_1, &width, &height);
	game->start_menu->option_screensize_l[0] = mlx_xpm_file_to_image(game->mlx, L_OPTION_0, &option_width, &option_height);
	game->start_menu->option_screensize_l[1] = mlx_xpm_file_to_image(game->mlx, L_OPTION_1, &option_width, &option_height);
	game->start_menu->option_screensize_l[2] = mlx_xpm_file_to_image(game->mlx, L_OPTION_2, &option_width, &option_height);
}

void init_optionscreen(t_game *game, int size)
{
	if (size == 1)
		init_optionscreen_s(game);
	else if (size == 2)
		init_optionscreen_m(game);
	else if (size == 3)
		init_optionscreen_l(game);

	init_buttons_optionscreen(game);

	game->start_menu->option_screensize_status = 1;
	game->start_menu->option_alloc_flag = 1;
}
