/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   menu_mouse_hover.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mheinke <mheinke@student.42abudhabi.ae>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/08 13:37:19 by mheinke           #+#    #+#             */
/*   Updated: 2023/11/09 09:59:30 by mheinke          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/so_long.h"

void mouse_hover_start_menu(int x, int y, t_game *game)
{
	if (check_state(game) == STATE_START_MENU)
	{
		if (check_button_start_menu(x, y, game) == 1)
			game->start_menu->startscreen_status = 1;
		else if (check_button_start_menu(x, y, game) == 2)
			game->start_menu->startscreen_status = 2;
		else if (check_button_start_menu(x, y, game) == 3)
			game->start_menu->startscreen_status = 3;
		else if (check_button_start_menu(x, y, game) == 4)
			game->start_menu->startscreen_status = 4;
		else
			game->start_menu->startscreen_status = 0;		
	}
}

void mouse_hover_option_menu(int x, int y, t_game *game)
{
	if (check_state(game) == STATE_OPTIONS)
	{
		if (check_button_option_menu(x, y, game))
			game->start_menu->optionscreen_status = 1;
		else
		 	game->start_menu->optionscreen_status = 0;
	}
}

void	mouse_hover_credit_menu(int x, int y, t_game *game)
{
	if (check_state(game) == STATE_CREDITS)
	{
		if (check_button_credit_menu(x, y, game))
			game->start_menu->creditscreen_status = 1;
		else
		 	game->start_menu->creditscreen_status = 0;
	}	
}

int mouse_move_start_menu(int x, int y, t_game *game)
{
	mouse_hover_start_menu(x, y, game);
	mouse_hover_option_menu(x, y, game);
	mouse_hover_credit_menu(x, y, game);
	return 0;
}
