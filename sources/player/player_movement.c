/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   player_movement.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mheinke <mheinke@student.42abudhabi.ae>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/20 14:09:04 by mheinke           #+#    #+#             */
/*   Updated: 2023/12/20 09:30:41 by mheinke          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/so_long.h"

int	player_move(int keycode, t_game *game)
{
	if (keycode == 2)
		game->player->position[0] += 16;
	if (keycode == 0)
		game->player->position[0] -= 16;
	if (keycode == 1)
		game->player->position[1] += 16;
	if (keycode == 13)
		game->player->position[1] -= 16;
	return (0);
}

// void	player_move_y(t_game *game)
// {
// 	if (game->player->action_key[0] == 2)
// 		game->player->position[0] += get_prwc(game);
// 	else if (game->player->action_key[0] == 1)
// 		game->player->position[0] -= get_plwc(game);
// }

// void	player_move_z(t_game *game)
// {
// 	if (game->player->action_key[0] == 3)
// 		game->player->position[1] -= get_pjwc(game);
// 	else if (game->player->action_key[0] == 4)
// 		game->player->position[1] += get_pdwc(game);
// }
