/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   init_player.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mheinke <mheinke@student.42abudhabi.ae>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/19 15:07:19 by mheinke           #+#    #+#             */
/*   Updated: 2023/10/19 16:31:50 by mheinke          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/so_long.h"

void	init_player(t_game *game)
{
	game->player->current_collect = 0;
	game->player->img_width = 16;
	game->player->img_height = 16;
	game->player->idle = mlx_xpm_file_to_image(game->mlx, "./assets/player/player_idle_o.xpm", &game->player->img_width, &game->player->img_height);
	//mlx_put_image_to_window(game->mlx, game->win, game->player->idle, 500, 500);
}