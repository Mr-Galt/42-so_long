/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   render.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mheinke <mheinke@student.42abudhabi.ae>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/20 09:37:33 by mheinke           #+#    #+#             */
/*   Updated: 2023/12/20 08:29:45 by mheinke          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/so_long.h"

int	render_img(int x, int y, void *sprite, t_game *game)
{
	// if (x < -SPRITE_SIZE || y < -SPRITE_SIZE || x > game->screen_width || y > game->screen_width)
	// 	return (1);
	mlx_put_image_to_window(game->mlx, game->win, sprite, x, y);
	return (0);
}
