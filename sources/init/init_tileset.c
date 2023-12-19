/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   init_tileset.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mheinke <mheinke@student.42abudhabi.ae>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/19 09:55:27 by mheinke           #+#    #+#             */
/*   Updated: 2023/12/19 10:01:28 by mheinke          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/so_long.h"

void	init_tileset_s(t_game *game)
{
	int	width;
	int	height;

	width = SPRITE_SIZE * OFFSET_S;
	height = SPRITE_SIZE * OFFSET_S;
	game->tileset->wall_s[0] = mlx_xpm_file_to_image(game->mlx,
			S_GROUND_01, &width, &height);
	game->tileset->wall_s[1] = mlx_xpm_file_to_image(game->mlx,
			S_GROUND_02, &width, &height);
	game->tileset->wall_s[2] = mlx_xpm_file_to_image(game->mlx,
			S_GROUND_03, &width, &height);
	game->tileset->wall_s[3] = mlx_xpm_file_to_image(game->mlx,
			S_GROUND_04, &width, &height);
}

void	init_tileset(t_game *game)
{
	init_tileset_s(game);
}
