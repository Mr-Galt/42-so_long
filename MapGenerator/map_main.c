/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   map_main.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mheinke <mheinke@student.42abudhabi.ae>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/07 12:51:38 by mheinke           #+#    #+#             */
/*   Updated: 2023/10/07 14:37:59 by mheinke          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./map_generator.h"

int	map_main(int width, int height, int min_floor_percent)
{
	t_map	map;

	map.width = width;
	map.height = height;
	map.steps = (map.width * map.height * 2);
	map.min_floor_percent = min_floor_percent;
	create_and_generate_map(&map);
	write_map_to_file(&map, "./map.ber");
	cleanup_map(&map);
	return (0);
}
