/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   player.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mheinke <mheinke@student.42abudhabi.ae>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/14 18:01:00 by mheinke           #+#    #+#             */
/*   Updated: 2024/01/02 08:20:35 by mheinke          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/so_long.h"

void	player(t_game *game)
{
	game->player->last_position[0] = game->player->position[0];
	game->player->last_position[1] = game->player->position[1];

	// game->player->top_left[0] = game->player->position[0];
	// game->player->top_left[1] = game->player->position[1];
	// game->player->top_right[0] = game->player->top_left[0];
	// game->player->top_right[1] = game->player->top_left[1] + SPRITE_SIZE;
	// game->player->bottom_left[0] = game->player->top_left[0] + SPRITE_SIZE;
	// game->player->bottom_left[1] = game->player->top_left[1];
	// game->player->bottom_right[0] = game->player->top_left[0] + SPRITE_SIZE;
	// game->player->bottom_right[1] = game->player->top_left[1] + SPRITE_SIZE;
}

void	player_viewport(t_game *game)
{
	player(game);
	update_camera(game);
	render_img(game->player->position[0] - game->camera_x, game->player->position[1] - game->camera_y, game->player->idle, game);
}
