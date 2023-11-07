/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   init_creditscreen.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mheinke <mheinke@student.42abudhabi.ae>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/05 20:54:52 by mheinke           #+#    #+#             */
/*   Updated: 2023/11/07 14:36:54 by mheinke          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/so_long.h"

void coordinates_credit_back(t_game *game)
{
	game->status->credit_back[0] = 287; 
	game->status->credit_back[1] = 25;
	game->status->credit_back[2] = 347;
	game->status->credit_back[3] = 43;
}

void init_creditscreen(t_game *game)
{
	game->status->creditscreen_status = 0;
	game->status->creditscreen[0] = mlx_xpm_file_to_image(game->mlx, CREDITSCREEN, &game->screen_width, &game->screen_height);
	game->status->creditscreen[1] = mlx_xpm_file_to_image(game->mlx, CREDITSCREEN_BACK, &game->screen_width, &game->screen_height);
	coordinates_credit_back(game);
}
