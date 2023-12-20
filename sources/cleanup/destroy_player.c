/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   destroy_player.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mheinke <mheinke@student.42abudhabi.ae>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/15 21:04:55 by mheinke           #+#    #+#             */
/*   Updated: 2023/12/20 08:14:44 by mheinke          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/so_long.h"

void	destroy_player(t_game *game)
{
	mlx_destroy_image(game->mlx, game->player->idle);

	mlx_destroy_image(game->mlx, game->player->walk[0]);
	mlx_destroy_image(game->mlx, game->player->walk[1]);
	mlx_destroy_image(game->mlx, game->player->walk[2]);
	mlx_destroy_image(game->mlx, game->player->walk[3]);
}
