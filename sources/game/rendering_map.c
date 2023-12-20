/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rendering_map.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mheinke <mheinke@student.42abudhabi.ae>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/19 07:00:57 by mheinke           #+#    #+#             */
/*   Updated: 2023/12/20 09:28:47 by mheinke          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/so_long.h"

void draw_borders(t_game *game)
{
    int y;
	int x;

	x = 1;
	while (x < game->map->columns - 1)
	{
		render_img((x * SPRITE_SIZE) - game->camera_x, -game->camera_y, game->tileset->wall_s[2], game);
        render_img((x * SPRITE_SIZE) - game->camera_x, ((game->map->rows - 1) * SPRITE_SIZE) - game->camera_y, game->tileset->wall_s[0], game);
		x++;
	}
	y = 1;
	while (y < game->map->rows - 1) 
	{
		render_img(-game->camera_x, (y * SPRITE_SIZE) - game->camera_y, game->tileset->wall_s[1], game);
        render_img(((game->map->columns - 1) * SPRITE_SIZE) - game->camera_x, (y * SPRITE_SIZE) - game->camera_y, game->tileset->wall_s[3], game);
		y++;
	}
}


void	draw_walls(t_game *game)
{
	draw_borders(game);
}