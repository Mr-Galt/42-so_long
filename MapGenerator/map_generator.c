/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   map_generator.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mheinke <mheinke@student.42abudhabi.ae>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/06 13:07:00 by mheinke           #+#    #+#             */
/*   Updated: 2023/10/07 13:46:51 by mheinke          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./map_generator.h"

void	create_and_generate_map(t_map *map)
{
	int	i;

	i = 0;
	map->data = malloc(map->height * sizeof(char *));
	while (i < map->height)
	{
		map->data[i] = malloc(map->width * sizeof(char));
		i++;
	}
	initialize_map(map);
	random_walker(map, map->steps);
	while (floor_coverage(map) < map->min_floor_percent)
	{
		initialize_map(map);
		random_walker(map, map->steps);
	}
}
