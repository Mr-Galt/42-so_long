/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mheinke <mheinke@student.42abudhabi.ae>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/06 13:07:00 by mheinke           #+#    #+#             */
/*   Updated: 2023/10/06 16:52:54 by mheinke          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./map_generator.h"
#include <stdlib.h>

typedef struct map
{
	int		width;
	int		height;
	char	**data;
}			t_map;

void	initializeMap(t_map *map)
{
	int x, y = 0;
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

void	randomWalker(t_map *map, int steps)
{
	int x, y, i = 0, direction;
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

int	floorCoverage(t_map *map)
{
	int x, y = 0, floorcount = 0;
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
	return (floorcount * 100) / (map->width * map->height);
}

void	printMap(t_map *map)
{
	int x, y = 0;
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

void	writeMapToFile(t_map *map, const char *filename)
{
	FILE	*file;

	int x, y = 0;
	file = fopen(filename, "w");
	if (file == NULL)
	{
		perror("Error opening file");
		exit(1);
	}
	while (y < map->height)
	{
		x = 0;
		while (x < map->width)
		{
			fprintf(file, "%c", map->data[y][x]);
			x++;
		}
		fprintf(file, "\n");
		y++;
	}
	fclose(file);
}

void	createAndGenerateMap(t_map *map, int width, int height, int steps,
		int min_floor_percent)
{
	int	i;

	i = 0;
	map->width = width;
	map->height = height;
	map->data = malloc(height * sizeof(char *));
	while (i < height)
	{
		map->data[i] = malloc(width * sizeof(char));
		i++;
	}
	initializeMap(map);
	randomWalker(map, steps);
	while (floorCoverage(map) < min_floor_percent)
	{
		initializeMap(map);
		randomWalker(map, steps);
	}
}

void	cleanupMap(t_map *map)
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

int	main(void)
{
	t_map	map;
	int		width = 20, height = 10, steps = width * height * 2,
				min_floor_percent;

	width = 20, height = 10, steps = width * height * 2, min_floor_percent = 37;
	createAndGenerateMap(&map, width, height, steps, min_floor_percent);
	writeMapToFile(&map, "../map.ber");
	cleanupMap(&map);
	return (0);
}
