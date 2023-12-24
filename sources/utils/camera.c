/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   camera.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mheinke <mheinke@student.42abudhabi.ae>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/22 19:16:39 by mheinke           #+#    #+#             */
/*   Updated: 2023/12/22 19:17:05 by mheinke          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/so_long.h"

/**
 * @brief Updates the camera's position based on the player's position.
 *
 * This function centers the camera on the player's position, taking into account
 * the size of the player sprite and the screen dimensions. It clamps the camera's
 * position to ensure it stays within the boundaries of the map when the map is
 * larger than the screen. If the map is smaller than the screen, the camera is
 * centered within the map. This approach ensures that the camera does not show
 * areas outside the playable map area.
 *
 * @param game Pointer to the game structure
 */

void update_camera(t_game *game)
{
	int max_x_offset;
	int max_y_offset;
	
    game->camera_x = (game->player->position[0] + (SPRITE_SIZE / 2)) - (game->screen_width / 2);
    game->camera_y = (game->player->position[1] + (SPRITE_SIZE / 2)) - (game->screen_height / 2);
    max_x_offset = game->map_px_width - game->screen_width;
    max_y_offset = game->map_px_height - game->screen_height;
	if (max_x_offset > 0)
	{
        if (game->camera_x > max_x_offset)
            game->camera_x = max_x_offset;
        else if (game->camera_x < 0)
            game->camera_x = 0;
    }
	else
        game->camera_x = (game->map_px_width - game->screen_width) / 2;
	if (max_y_offset > 0) 
	{
        if (game->camera_y > max_y_offset)
            game->camera_y = max_y_offset;
        else if (game->camera_y < 0)
            game->camera_y = 0;
    } 
	else
        game->camera_y = (game->map_px_height - game->screen_height) / 2;
}