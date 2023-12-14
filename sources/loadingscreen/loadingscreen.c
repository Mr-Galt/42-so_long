/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   loadingscreen.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mheinke <mheinke@student.42abudhabi.ae>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/09 10:08:47 by mheinke           #+#    #+#             */
/*   Updated: 2023/12/14 16:29:18 by mheinke          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/so_long.h"

void	loadingscreen_s(t_game *game, int i)
{
	render_img(0, 0, game->loadingscreen->screen_s[i], game);
}

void	loadingscreen_m(t_game *game, int i)
{
	render_img(0, 0, game->loadingscreen->screen_m[i], game);
}

void	loadingscreen_l(t_game *game, int i)
{
	render_img(0, 0, game->loadingscreen->screen_l[i], game);
}

void	loadingscreen(t_game *game)
{
	if (game->screen_size == OFFSET_S)
		loadingscreen_s(game, game->loadingscreen->random_screen);
	else if (game->screen_size == OFFSET_M)
		loadingscreen_m(game, game->loadingscreen->random_screen);
	else if (game->screen_size == OFFSET_L)
		loadingscreen_l(game, game->loadingscreen->random_screen);
}
