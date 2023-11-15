/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   menu_buttons.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mheinke <mheinke@student.42abudhabi.ae>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/08 11:28:46 by mheinke           #+#    #+#             */
/*   Updated: 2023/11/15 20:23:46 by mheinke          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/so_long.h"

int	check_button_start_menu(int x, int y, t_game *game)
{
	if (x >= game->start_menu->start_button[0] && x <= game->start_menu->start_button[2] &&
			y >= game->start_menu->start_button[1] && y <= game->start_menu->start_button[3])
		return (1);
	if (x >= game->start_menu->start_options[0] && x <= game->start_menu->start_options[2] &&
			y >= game->start_menu->start_options[1] && y <= game->start_menu->start_options[3])
		return (2);
	if (x >= game->start_menu->start_credits[0] && x <= game->start_menu->start_credits[2] &&
			y >= game->start_menu->start_credits[1] && y <= game->start_menu->start_credits[3])
		return (3);
	if (x >= game->start_menu->start_exit[0] && x <= game->start_menu->start_exit[2] &&
			y >= game->start_menu->start_exit[1] && y <= game->start_menu->start_exit[3])
		return (4);
	else
	 return(0);
}

int	check_button_option_menu(int x, int y, t_game *game)
{
	if (x >= game->start_menu->option_back[0] && x <= game->start_menu->option_back[2] &&
			y >= game->start_menu->option_back[1] && y <= game->start_menu->option_back[3])
		return (1);
	else
		return(0);
}

int	check_button_screensize(int x, int y, t_game *game)
{
	if (x >= game->start_menu->button_screensize_1[0] && x <= game->start_menu->button_screensize_1[2] &&
			y >= game->start_menu->button_screensize_1[1] && y <= game->start_menu->button_screensize_1[3])
		return (1);
	if (x >= game->start_menu->button_screensize_2[0] && x <= game->start_menu->button_screensize_2[2] &&
			y >= game->start_menu->button_screensize_2[1] && y <= game->start_menu->button_screensize_2[3])
		return (2);
	if (x >= game->start_menu->button_screensize_3[0] && x <= game->start_menu->button_screensize_3[2] &&
			y >= game->start_menu->button_screensize_3[1] && y <= game->start_menu->button_screensize_3[3])
		return (3);
	return (0);
}

int	check_button_credit_menu(int x, int y, t_game *game)
{
	if (x >= game->start_menu->credit_back[0] && x <= game->start_menu->credit_back[2] &&
			y >= game->start_menu->credit_back[1] && y <= game->start_menu->credit_back[3])
		return (1);
	else
	 	return (0);
}