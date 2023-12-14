/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   menu_start_screen.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mheinke <mheinke@student.42abudhabi.ae>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/07 13:12:51 by mheinke           #+#    #+#             */
/*   Updated: 2023/12/14 16:03:47 by mheinke          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/so_long.h"

void	init_game_menu(t_game*game, int size)
{
	init_startscreen(game, size);
	init_creditscreen(game, size);
	init_optionscreen(game, size);
	init_creditscreen(game, size);
}
