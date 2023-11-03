/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   init_game.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mheinke <mheinke@student.42abudhabi.ae>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/19 14:53:09 by mheinke           #+#    #+#             */
/*   Updated: 2023/11/02 14:59:37 by mheinke          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/so_long.h"
#include <stdio.h>

void init_startscreen(t_game *game)
{
	game->status->startscreen = mlx_xpm_file_to_image(game->mlx, START_SCREEN, &game->screen_width, &game->screen_height);
	if (!game->status->startscreen)
		error("!Startscreen");
}

void callocs_for_game(t_game *game)
{
	game->player = ft_calloc(sizeof(t_player), 1);
	if (!game->player)
		error("!Malloc for Player Struct");
	printf("CALLOCed Player Struct\n"); fflush(stdout);
	game->status = ft_calloc(sizeof(t_game_status), 1);
	if (!game->status)
		error("!Malloc for Status Struct");
	printf("CALLOCed Status Struct\n"); fflush(stdout);
	printf("Status %d", game->status->actual_status); fflush(stdout);
}
void	init_game(t_game *game)
{
	game->mlx = mlx_init();
	callocs_for_game(game);
	game->status->actual_status = START_MENU;
	game->screen_width = SCREEN_WIDTH;
	game->screen_height = SCREEN_HEIGHT;
	game->last_timestamp = 0;
	game->monsters = NULL;
	game->collectibles = NULL;
	game->win = mlx_new_window(game->mlx, game->screen_width, game->screen_height, SCREEN_NAME);
	init_startscreen(game);
}