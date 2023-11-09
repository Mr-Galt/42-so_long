/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   input_hooks.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mheinke <mheinke@student.42abudhabi.ae>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/02 14:33:15 by mheinke           #+#    #+#             */
/*   Updated: 2023/11/08 14:25:42 by mheinke          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/so_long.h"

void	mouse_register_startmenu(t_game *game)
{
	mlx_hook(game->win, 6, 1L << 6, mouse_move, game);
	mlx_mouse_hook(game->win, mouse_click, game);
}

void	key_register_startmenu(t_game *game)
{
	mlx_hook(game->win, 2, 0, keydown, game);
	mlx_key_hook(game->win, keyup, game);	
}

void	input_hooks(t_game *game)
{
		mouse_register_startmenu(game);
		key_register_startmenu(game);
}