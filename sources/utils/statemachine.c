/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   menu_statemachine.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mheinke <mheinke@student.42abudhabi.ae>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/08 10:38:12 by mheinke           #+#    #+#             */
/*   Updated: 2023/11/08 14:45:58 by mheinke          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/so_long.h"

int	check_state(t_game *game)
{
	return (game->state);
}

void change_state(t_game *game, e_state new_state)
{
	game->state = new_state;
}

// void	kill_menu(t_game *game)
// {
// 		mlx_destroy_image(game->mlx, game->status->startscreen[0]);
// 		mlx_destroy_image(game->mlx, game->status->startscreen[1]);
// 		mlx_destroy_image(game->mlx, game->status->startscreen[2]);
// 		mlx_destroy_image(game->mlx, game->status->startscreen[3]);
// 		mlx_destroy_image(game->mlx, game->status->startscreen[4]);
// 		mlx_destroy_image(game->mlx, game->status->optionscreen[0]);
// 		mlx_destroy_image(game->mlx, game->status->optionscreen[1]);
// 		mlx_destroy_image(game->mlx, game->status->creditscreen[0]);
// 		mlx_destroy_image(game->mlx, game->status->creditscreen[1]);	
// }