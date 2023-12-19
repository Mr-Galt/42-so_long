/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   init_game.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mheinke <mheinke@student.42abudhabi.ae>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/19 14:53:09 by mheinke           #+#    #+#             */
/*   Updated: 2023/12/19 08:58:16 by mheinke          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/so_long.h"
#include <stdio.h>

void	randomiser(t_game *game)
{
	srand(time(NULL));
	game->loadingscreen->random_screen = rand() % 5;
}

void	callocs_for_game(t_game *game)
{
	game->player = ft_calloc(1, sizeof(t_player));
	game->start_menu = ft_calloc(1, sizeof(t_start_menu));
	game->loadingscreen = ft_calloc(1, sizeof(t_loadingscreen));
	game->music = ft_calloc(1, sizeof(t_music));
}

void	init_game(t_game *game)
{
	game->mlx = mlx_init();
	callocs_for_game(game);
	game->screen_width = SCREEN_WIDTH;
	game->screen_height = SCREEN_HEIGHT;
	game->screen_size = OFFSET_S;
	game->last_timestamp = 0;
	game->win = mlx_new_window(game->mlx,
			game->screen_width * game->screen_size,
			game->screen_height * game->screen_size,
			SCREEN_NAME);
	game->state = STATE_START_MENU;
	randomiser(game);
}
