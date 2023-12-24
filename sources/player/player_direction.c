/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   player_direction.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mheinke <mheinke@student.42abudhabi.ae>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/24 06:30:44 by mheinke           #+#    #+#             */
/*   Updated: 2023/12/24 06:39:16 by mheinke          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/so_long.h"

void	set_player_direction(int keycode, t_game *game)
{
	if (keycode == D)
		game->player->direction_x = 1;
	else if (keycode == A)
		game->player->direction_x = -1;
	
	if (keycode == S)
		game->player->direction_y = 1;
	else if (keycode == W)
		game->player->direction_y = -1;
}


void	reset_player_direction(int keycode, t_game *game)
{
	if (keycode == D)
		game->player->direction_x = 0;
	else if (keycode == A)
		game->player->direction_x = 0;
	
	if (keycode == S)
		game->player->direction_y = 0;
	else if (keycode == W)
		game->player->direction_y = 0;
}