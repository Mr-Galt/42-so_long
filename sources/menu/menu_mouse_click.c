/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   menu_mouse_click.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mheinke <mheinke@student.42abudhabi.ae>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/08 13:51:04 by mheinke           #+#    #+#             */
/*   Updated: 2023/11/09 10:12:49 by mheinke          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/so_long.h"

int mouse_click_start_menu(int button, int x, int y, t_game *game)
{
	if (button == 1 && check_state(game) == STATE_START_MENU)
	{
		if (check_button_start_menu(x, y, game) == 1)
			change_state(game, STATE_LOADING);
		else if (check_button_start_menu(x, y, game) == 2)
			change_state(game, STATE_OPTIONS);	
		else if (check_button_start_menu(x, y, game) == 3)
			change_state(game, STATE_CREDITS);
		else if (check_button_start_menu(x, y, game) == 4)
			change_state(game, STATE_EXIT);
		game->start_menu->startscreen_status = 0;
	}	
	if (button == 1 && check_state(game) == STATE_OPTIONS)
	{
		if (check_button_option_menu(x, y, game))
			change_state(game, STATE_START_MENU);
		game->start_menu->optionscreen_status = 0;
	}
	if (button == 1 && check_state(game) == STATE_CREDITS)
	{
		if (check_button_credit_menu(x, y, game))
			change_state(game, STATE_START_MENU);
		game->start_menu->creditscreen_status = 0;
	}
    return (0);
}
