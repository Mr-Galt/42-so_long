/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   mouse_input.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mheinke <mheinke@student.42abudhabi.ae>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/08 14:25:00 by mheinke           #+#    #+#             */
/*   Updated: 2023/12/14 10:42:33 by mheinke          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/so_long.h"

int	mouse_click(int button, int x, int y, t_game *game)
{
	if (check_state(game) == STATE_START_MENU
		|| check_state(game) == STATE_OPTIONS
		|| check_state(game) == STATE_CREDITS)
		mouse_click_start_menu(button, x, y, game);
	return (0);
}

int	mouse_move(int x, int y, t_game *game)
{
	if (check_state(game) == STATE_START_MENU
		|| check_state(game) == STATE_OPTIONS
		|| check_state(game) == STATE_CREDITS)
		mouse_move_start_menu(x, y, game);
	return (0);
}
