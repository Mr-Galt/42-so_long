/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   map_utils.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mheinke <mheinke@student.42abudhabi.ae>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/07 13:38:17 by mheinke           #+#    #+#             */
/*   Updated: 2023/10/07 13:51:05 by mheinke          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./map_generator.h"

void	initialize_map(t_map *map)
{
	int	x;
	int	y;

	y = 0;
	while (y < map->height)
	{
		x = 0;
		while (x < map->width)
		{
			map->data[y][x] = '1';
			x++;
		}
		y++;
	}
}

int	floor_coverage(t_map *map)
{
	int	x;
	int	y;
	int	floorcount;

	y = 0;
	floorcount = 0;
	while (y < map->height)
	{
		x = 0;
		while (x < map->width)
		{
			if (map->data[y][x] == ' ')
				floorcount++;
			x++;
		}
		y++;
	}
	return ((floorcount * 100) / (map->width * map->height));
}

void	cleanup_map(t_map *map)
{
	int	i;

	i = 0;
	while (i < map->height)
	{
		free(map->data[i]);
		i++;
	}
	free(map->data);
}

void	print_map(t_map *map)
{
	int	x;
	int	y;

	y = 0;
	while (y < map->height)
	{
		x = 0;
		while (x < map->width)
		{
			printf("%c", map->data[y][x]);
			x++;
		}
		printf("\n");
		y++;
	}
}
