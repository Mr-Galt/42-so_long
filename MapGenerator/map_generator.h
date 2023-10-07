/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   map_generator.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mheinke <mheinke@student.42abudhabi.ae>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/06 13:18:33 by mheinke           #+#    #+#             */
/*   Updated: 2023/10/07 13:58:22 by mheinke          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MAP_GENERATOR_H
# define MAP_GENERATOR_H
# include <fcntl.h>
# include <stdio.h>
# include <stdlib.h>
# include <time.h>
# include <unistd.h>

/* **************************************************************** */
/* Map Struct														*/
/* **************************************************************** */

typedef struct map
{
	int		width;
	int		height;
	int		steps;
	int		min_floor_percent;
	char	**data;
}			t_map;

/* **************************************************************** */
/* Map Generator Functions											*/
/* **************************************************************** */

void		random_walker(t_map *map, int steps);
void		initialize_map(t_map *map);
int			floor_coverage(t_map *map);
void		print_map(t_map *map);
void		create_and_generate_map(t_map *map);
void		cleanup_map(t_map *map);
int			write_line_to_file(int fd, char *line, int length);
void		write_map_to_file(t_map *map, const char *filename);

#endif