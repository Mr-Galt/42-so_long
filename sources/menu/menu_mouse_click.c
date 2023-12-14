/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   menu_mouse_click.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mheinke <mheinke@student.42abudhabi.ae>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/08 13:51:04 by mheinke           #+#    #+#             */
/*   Updated: 2023/12/14 16:21:50 by mheinke          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/so_long.h"

void	click_start_menu(int x, int y, t_game *game)
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

void	click_option_menu(int x, int y, t_game *game)
{
	if (check_button_screensize(x, y, game) == 1
		&& check_screenstatus(game) != 1)
	{
		game->start_menu->option_screensize_status = 1;
		window_changer(game);
	}
	else if (check_button_screensize(x, y, game) == 2
		&& check_screenstatus(game) != 2)
	{
		game->start_menu->option_screensize_status = 2;
		window_changer(game);
	}
	else if (check_button_screensize(x, y, game) == 3
		&& check_screenstatus(game) != 3)
	{
		game->start_menu->option_screensize_status = 3;
		window_changer(game);
	}
	if (check_button_option_menu(x, y, game))
	{
		change_state(game, STATE_START_MENU);
		game->start_menu->optionscreen_status = 0;
		game->start_menu->option_screensize_status = game->screen_size;
	}
}

void	click_credit_screen(int x, int y, t_game *game)
{
	if (check_button_credit_menu(x, y, game))
		change_state(game, STATE_START_MENU);
	game->start_menu->creditscreen_status = 0;
}

int	mouse_click_start_menu(int button, int x, int y, t_game *game)
{
	if (button != 1)
		return (1);
	else if (check_state(game) == STATE_START_MENU)
		click_start_menu(x, y, game);
	else if (check_state(game) == STATE_OPTIONS)
		click_option_menu(x, y, game);
	else if (check_state(game) == STATE_CREDITS)
		click_credit_screen(x, y, game);
	return (0);
}
