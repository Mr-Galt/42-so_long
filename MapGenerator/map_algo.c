/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   map_algo.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mheinke <mheinke@student.42abudhabi.ae>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/07 12:55:44 by mheinke           #+#    #+#             */
/*   Updated: 2023/10/07 13:39:10 by mheinke          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./map_generator.h"

void	random_walker(t_map *map, int steps)
{
	int	x;
	int	y;
	int	i;
	int	direction;

	i = 0;
	srand((unsigned int)time(NULL));
	x = rand() % (map->width - 2) + 1;
	y = rand() % (map->height - 2) + 1;
	while (i < steps)
	{
		direction = rand() % 4;
		if (direction == 0 && y > 1)
			y--;
		else if (direction == 1 && x < map->width - 2)
			x++;
		else if (direction == 2 && y < map->height - 2)
			y++;
		else if (direction == 3 && x > 1)
			x--;
		map->data[y][x] = ' ';
		i++;
	}
}
