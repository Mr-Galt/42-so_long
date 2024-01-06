/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   player_movement.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mheinke <mheinke@student.42abudhabi.ae>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/20 14:09:04 by mheinke           #+#    #+#             */
/*   Updated: 2024/01/02 08:25:56 by mheinke          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/so_long.h"

// long long delta(void) {
//     static struct timeval last_time;  // Static variable to store the time of the last frame
//     struct timeval current_time;
//     float delta;

//     gettimeofday(&current_time, NULL);

//     // Calculate the time difference in milliseconds
//     delta = (current_time.tv_sec - last_time.tv_sec) * 1000LL + 
//             (current_time.tv_usec - last_time.tv_usec) / 1000;

//     // Update last_time to current_time for the next call
//     last_time = current_time;

//     return delta;
// }

int	player_move(int keycode, t_game *game)
{	
	float deltaTime = game->delta;
	float distance = PLAYER_SPEED * (deltaTime / 1000.0f);

	if (keycode == 2)
		game->player->position[0] += 1 * distance;
	if (keycode == 0)
		game->player->position[0] -= 1 * distance;
	if (keycode == 1)
		game->player->position[1] += 1 * distance;
	if (keycode == 13)
		game->player->position[1] -= 1 * distance;
	return (0);
}
