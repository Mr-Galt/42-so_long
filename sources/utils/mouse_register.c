/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   mouse_register.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mheinke <mheinke@student.42abudhabi.ae>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/02 14:33:15 by mheinke           #+#    #+#             */
/*   Updated: 2023/11/05 21:37:00 by mheinke          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/so_long.h"

int mouse_click(int button, int x, int y, t_game *game)
{
	if (game->status->actual_status == START_MENU)
	{
		if (button == 1 && x >= game->status->start_button[0] && x <= game->status->start_button[2] &&
			y >= game->status->start_button[1] && y <= game->status->start_button[3])
		{	
			game->status->actual_status = GAME_RUN;
			game->status->startscreen_status = 0;
		}
		if (button == 1 && x >= game->status->start_options[0] && x <= game->status->start_options[2] &&
			y >= game->status->start_options[1] && y <= game->status->start_options[3])
		{
			game->status->actual_status = OPTION_MENU;	
			game->status->startscreen_status = 0;
		}	
		if (button == 1 && x >= game->status->start_credits[0] && x <= game->status->start_credits[2] &&
			y >= game->status->start_credits[1] && y <= game->status->start_credits[3])
		{
			game->status->actual_status = CREDITS_MENU;
			game->status->startscreen_status = 0;
		}	
		if (button == 1 && x >= game->status->start_exit[0] && x <= game->status->start_exit[2] &&
			y >= game->status->start_exit[1] && y <= game->status->start_exit[3])
			game->status->actual_status = GAME_QUIT;
	}
	
	if (game->status->actual_status == OPTION_MENU)
	{
		if (button == 1 && x >= game->status->option_back[0] && x <= game->status->option_back[2] &&
			y >= game->status->option_back[1] && y <= game->status->option_back[3])
		{
			game->status->actual_status = START_MENU;
			game->status->optionscreen_status = 0;
		}
	}
    return (0);
}

int mouse_move(int x, int y, t_game *game) 
{
	if (game->status->actual_status == START_MENU)
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
	}
	if (game->status->actual_status == OPTION_MENU)
	{
		if (x >= game->status->option_back[0] && x <= game->status->option_back[2] &&
			y >= game->status->option_back[1] && y <= game->status->option_back[3])
			game->status->optionscreen_status = 1;
		else
		 	game->status->optionscreen_status = 0;
	}
	
	return 0;
}

void	mouse_register_startmenu(t_game *game)
{
	mlx_hook(game->win, 6, 1L << 6, mouse_move, game);
	mlx_mouse_hook(game->win, mouse_click, game);
}
