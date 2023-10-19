/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   init_game.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mheinke <mheinke@student.42abudhabi.ae>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/19 14:53:09 by mheinke           #+#    #+#             */
/*   Updated: 2023/10/19 16:59:09 by mheinke          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/so_long.h"

void	init_game(t_game *game)
{
	game->mlx = mlx_init();
	game->status = 0;
	game->screen_width = SCREEN_WIDTH;
	game->screen_height = SCREEN_HEIGHT;
	game->last_timestamp = 0;
	game->win = mlx_new_window(game->mlx, game->screen_width, game->screen_height, "My Game...");
	game->monsters = NULL;
	game->collectibles = NULL;
	game->player = (t_player *)malloc(sizeof(t_player));
	if (!game->player)
		exit (1);
}