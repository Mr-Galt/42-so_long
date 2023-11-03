/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   init_player.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mheinke <mheinke@student.42abudhabi.ae>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/19 15:07:19 by mheinke           #+#    #+#             */
/*   Updated: 2023/11/01 09:07:12 by mheinke          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/so_long.h"
#include <stdio.h>

void	init_player(t_game *game)
{
	game->player->current_collect = 0;
	game->player->img_width = 64;
	game->player->img_height = 64;
	game->player->player_pos_x = 20;
	game->player->player_pos_y = 20;
	game->player->idle = mlx_xpm_file_to_image(game->mlx, PLAYER, &game->player->img_width, &game->player->img_height);
	if (!game->player->idle){
		error("!Playersprite");
	}
}
