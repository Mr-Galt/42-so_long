/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   input_hooks.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mheinke <mheinke@student.42abudhabi.ae>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/02 14:33:15 by mheinke           #+#    #+#             */
/*   Updated: 2023/12/24 07:01:42 by mheinke          ###   ########.fr       */
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
	mlx_hook(game->win, 2, 0, keydown_start, game);
	mlx_hook(game->win, 3, 0, keyup_start, game);
}

void	key_register_game(t_game *game)
{
	mlx_hook(game->win, 2, 0, keydown_game, game);
	mlx_key_hook(game->win, keyup_game, game);
}

void	input_hooks(t_game *game)
{
	if (check_state(game) == STATE_START_MENU || check_state(game) == STATE_OPTIONS
		|| check_state(game) == STATE_CREDITS)
	{
		mouse_register_startmenu(game);
		key_register_startmenu(game);
	}
	else if (check_state(game) == STATE_GAME)
		key_register_game(game);
}
