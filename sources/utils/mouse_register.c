/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   mouse_register.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mheinke <mheinke@student.42abudhabi.ae>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/02 14:33:15 by mheinke           #+#    #+#             */
/*   Updated: 2023/11/02 15:01:59 by mheinke          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/so_long.h"

int mouse_click(int button, int x, int y, t_game *game)
{

	if (button == 1 && x >= 246 && x <= 392 && y >= 174 && y <= 364)
		game->status->actual_status = GAME_RUN;
    return (0);
}

void	mouse_register(t_game *game)
{
	mlx_mouse_hook(game->win, mouse_click, game);
}