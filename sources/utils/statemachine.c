/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   statemachine.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mheinke <mheinke@student.42abudhabi.ae>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/08 10:38:12 by mheinke           #+#    #+#             */
/*   Updated: 2023/12/19 06:44:39 by mheinke          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/so_long.h"

int	check_state(t_game *game)
{
	return (game->state);
}

void	change_state(t_game *game, e_state new_state)
{
	game->state = new_state;
}

int	check_screenstatus(t_game *game)
{
	return (game->start_menu->option_screensize_status);
}

void	going_to_game(t_game *game)
{
	if (game->state == STATE_GAME)
	{
		destroy_all_images(game);
	}
}