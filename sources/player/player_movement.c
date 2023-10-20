/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   player_movement.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mheinke <mheinke@student.42abudhabi.ae>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/20 14:09:04 by mheinke           #+#    #+#             */
/*   Updated: 2023/10/20 14:21:14 by mheinke          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/so_long.h"

int player_move(int keycode, t_game *game)
{
	if (keycode == 2)
		game->player->player_pos_x += 1;
	if (keycode == 0)
		game->player->player_pos_x -= 1;
	if (keycode == 1)
		game->player->player_pos_y += 1;
	if (keycode == 13)
		game->player->player_pos_y -= 1;
	return (0);	
}
