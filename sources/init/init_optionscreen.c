/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   init_optionscreen.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mheinke <mheinke@student.42abudhabi.ae>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/05 20:54:48 by mheinke           #+#    #+#             */
/*   Updated: 2023/11/05 21:31:56 by mheinke          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/so_long.h"

void coordinates_back_button(t_game *game)
{
	game->status->option_back[0] = 123;
	game->status->option_back[1] = 255;
	game->status->option_back[2] = 196;
	game->status->option_back[3] = 282;
}

void init_optionscreen(t_game *game)
{
	game->status->optionscreen_status = 0;
	game->status->optionscreen[0] = mlx_xpm_file_to_image(game->mlx, OPTIONSCREEN, &game->screen_width, &game->screen_height);
	game->status->optionscreen[1] = mlx_xpm_file_to_image(game->mlx, OPTIONSCREEN_BACK, &game->screen_width, &game->screen_height);
	coordinates_back_button(game);
}