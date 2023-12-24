/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   player_movement.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mheinke <mheinke@student.42abudhabi.ae>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/20 14:09:04 by mheinke           #+#    #+#             */
/*   Updated: 2023/12/24 06:49:56 by mheinke          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/so_long.h"

int	player_move(int keycode, t_game *game)
{	
	if (keycode == D)
		game->player->position[0] += 16;
	if (keycode == A)
		game->player->position[0] -= 16;
	if (keycode == S)
		game->player->position[1] += 16;
	if (keycode == W)
		game->player->position[1] -= 16;
	return (0);
}
