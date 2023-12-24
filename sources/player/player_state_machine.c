/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   player_state_machine.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mheinke <mheinke@student.42abudhabi.ae>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/22 19:47:43 by mheinke           #+#    #+#             */
/*   Updated: 2023/12/24 06:41:16 by mheinke          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/so_long.h"

// void updating_player_state(t_game *game)
// {
//     // ft_printf("Current Pos: (%d, %d), Last Pos: (%d, %d)\n",
//     //           game->player->position[0], game->player->position[1],
//     //           game->player->last_position[0], game->player->last_position[1]);
//     // ft_printf("Player Status: %d\n", game->player->state);

//     if (game->player->position[0] != game->player->last_position[0] && 
//         game->player->position[1] == game->player->last_position[1])
//     {
//         game->player->state = PLAYER_WALKING;
//     }
//     else if (game->player->position[1] > game->player->last_position[1])
//     {
//         game->player->state = PLAYER_JUMPING;
//     }
//     else if (game->player->position[1] < game->player->last_position[1])
//     {
//         game->player->state = PLAYER_FALLING;
//     }
//     else if (game->player->position[0] == game->player->last_position[0] && 
// 			 game->player->position[1] == game->player->last_position[1])
//     {
//         game->player->state = PLAYER_STANDING;
//     }

// }
