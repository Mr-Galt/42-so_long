/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   player.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mheinke <mheinke@student.42abudhabi.ae>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/14 18:01:00 by mheinke           #+#    #+#             */
/*   Updated: 2023/12/20 09:36:18 by mheinke          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/so_long.h"

void	player(t_game *game)
{
	game->player->last_position[0] = game->player->position[0];
	game->player->last_position[1] = game->player->position[1];
	game->player->top_left[0] = game->player->position[0];
	game->player->top_left[1] = game->player->position[1];
	game->player->top_right[0] = game->player->top_left[0];
	game->player->top_right[1] = game->player->top_left[1] + SPRITE_SIZE;
	game->player->bottom_left[0] = game->player->top_left[0] + SPRITE_SIZE;
	game->player->bottom_left[1] = game->player->top_left[1];
	game->player->bottom_right[0] = game->player->top_left[0] + SPRITE_SIZE;
	game->player->bottom_right[1] = game->player->top_left[1] + SPRITE_SIZE;
}

void	update_camera(t_game *game)
{
	game->camera_x = (game->player->position[0] + (SPRITE_SIZE / 2)) - (game->screen_width / 2);
	game->camera_y = (game->player->position[1] + (SPRITE_SIZE / 2)) - (game->screen_height / 2);

	if (game->camera_x < 0) 
		game->camera_x = 0;
    if (game->camera_y < 0) 
		game->camera_y = 0;
	if (game->camera_x > game->map_px_width - game->screen_width) 
		game->camera_x = game->map_px_width - game->screen_width;
    if (game->camera_y > game->map_px_height - game->screen_height) 
		game->camera_y = game->map_px_height - game->screen_height;
}


void	player_viewport(t_game *game)
{
	player(game);
	update_camera(game);
	render_img(game->player->position[0] - game->camera_x, game->player->position[1] - game->camera_y, game->player->idle, game);
	ft_printf("Plaxer X: %d, Player Y: %d\n", game->player->position[0], game->player->position[1]);
	ft_printf("Screen Width: %d, Screen Height: %d\n", game->screen_width, game->screen_height);
}
