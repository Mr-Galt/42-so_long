/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   render.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mheinke <mheinke@student.42abudhabi.ae>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/20 09:37:33 by mheinke           #+#    #+#             */
/*   Updated: 2023/11/02 09:37:52 by mheinke          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/so_long.h"

void	render_img(int x, int y, void *sprite, t_game *game)
{
	if (x > SCREEN_WIDTH || y > SCREEN_HEIGHT)
		return;
	mlx_put_image_to_window(game->mlx, game->win,
		sprite, x, y);
}
