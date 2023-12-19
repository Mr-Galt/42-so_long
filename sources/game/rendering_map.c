/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rendering_map.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mheinke <mheinke@student.42abudhabi.ae>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/19 07:00:57 by mheinke           #+#    #+#             */
/*   Updated: 2023/12/19 09:05:02 by mheinke          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/so_long.h"

void	draw_walls(t_game *game)
{
	int	i;
	int	j;

	i = 0;

	render_img(50, 50, game->player->block, game);
	

	while (i < (game->map->rows))
	{
		j = 0;
		while (j < (game->map->columns))
		{
			if (game->map->full[i][j] == '1')
			{
				render_img(j * SPRITE_SIZE, i * SPRITE_SIZE, game->player->block, game);
			}
			j++;
		}
		i++;
	}
}