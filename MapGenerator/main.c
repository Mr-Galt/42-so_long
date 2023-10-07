/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mheinke <mheinke@student.42abudhabi.ae>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/07 12:51:38 by mheinke           #+#    #+#             */
/*   Updated: 2023/10/07 13:49:36 by mheinke          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./map_generator.h"

int	main(void)
{
	t_map	map;

	map.width = 20;
	map.height = 10;
	map.steps = (map.width * map.height * 2);
	map.min_floor_percent = 37;
	create_and_generate_map(&map);
	write_map_to_file(&map, "../map.ber");
	cleanup_map(&map);
	return (0);
}
