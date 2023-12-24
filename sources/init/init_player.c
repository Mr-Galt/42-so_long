/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   init_player.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mheinke <mheinke@student.42abudhabi.ae>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/19 15:07:19 by mheinke           #+#    #+#             */
/*   Updated: 2023/12/24 06:38:43 by mheinke          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/so_long.h"
#include <stdio.h>

void	init_player(t_game *game)
{
	game->player->current_collect = 0;
	game->player->img_width = 64;
	game->player->img_height = 64;
	game->player->position[0] = 512;
	game->player->position[1] = 224;
	game->player->direction_x = 0;
	game->player->direction_y = 0;
	
	game->player->idle_frames = 1;
	game->player->idle = mlx_xpm_file_to_image(game->mlx,
			PLAYER_IDLE, &game->player->img_width, &game->player->img_height);
	
	game->player->walk_frames = 4;
	game->player->walk[0] = mlx_xpm_file_to_image(game->mlx,
			PLAYER_WALK_01, &game->player->img_width, &game->player->img_height);
	game->player->walk[1] = mlx_xpm_file_to_image(game->mlx,
			PLAYER_WALK_02, &game->player->img_width, &game->player->img_height);
	game->player->walk[2] = mlx_xpm_file_to_image(game->mlx,
			PLAYER_WALK_03, &game->player->img_width, &game->player->img_height);
	game->player->walk[3] = mlx_xpm_file_to_image(game->mlx,
			PLAYER_WALK_04, &game->player->img_width, &game->player->img_height);
}
