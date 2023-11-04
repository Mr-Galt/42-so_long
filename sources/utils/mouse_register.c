/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   mouse_register.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mheinke <mheinke@student.42abudhabi.ae>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/02 14:33:15 by mheinke           #+#    #+#             */
/*   Updated: 2023/11/04 14:06:05 by mheinke          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/so_long.h"

int mouse_click(int button, int x, int y, t_game *game)
{
	if (button == 1 && x >= game->status->start_button[0] && x <= game->status->start_button[2] &&
           y >= game->status->start_button[1] && y <= game->status->start_button[3])
	 	game->status->actual_status = GAME_RUN;
	if (button == 1 && x >= game->status->start_exit[0] && x <= game->status->start_exit[2] &&
		y >= game->status->start_exit[1] && y <= game->status->start_exit[3])
		game->status->actual_status = GAME_QUIT;
    return (0);
}

int mouse_move(int x, int y, t_game *game) 
{
	if (x >= game->status->start_button[0] && x <= game->status->start_button[2] &&
           y >= game->status->start_button[1] && y <= game->status->start_button[3])
		game->status->startscreen_status = 1;

	else if (x >= game->status->start_options[0] && x <= game->status->start_options[2] &&
		y >= game->status->start_options[1] && y <= game->status->start_options[3])
	game->status->startscreen_status = 2;

	else if (x >= game->status->start_credits[0] && x <= game->status->start_credits[2] &&
		y >= game->status->start_credits[1] && y <= game->status->start_credits[3])
	game->status->startscreen_status = 3;

	else if (x >= game->status->start_exit[0] && x <= game->status->start_exit[2] &&
		y >= game->status->start_exit[1] && y <= game->status->start_exit[3])
	game->status->startscreen_status = 4;

	else
		game->status->startscreen_status = 0;		
	return 0;
}

void	mouse_register_startmenu(t_game *game)
{
	mlx_hook(game->win, 6, 1L << 6, mouse_move, game);
	mlx_mouse_hook(game->win, mouse_click, game);
}
