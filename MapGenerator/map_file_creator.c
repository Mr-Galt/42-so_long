/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   map_file_creator.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mheinke <mheinke@student.42abudhabi.ae>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/07 12:52:49 by mheinke           #+#    #+#             */
/*   Updated: 2023/10/07 13:57:59 by mheinke          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./map_generator.h"

int	write_line_to_file(int fd, char *line, int length)
{
	char	newline;

	newline = '\n';
	if (write(fd, line, length) == -1)
	{
		return (-1);
	}
	if (write(fd, &newline, 1) == -1)
	{
		return (-1);
	}
	return (0);
}

void	write_map_to_file(t_map *map, const char *filename)
{
	int	fd;
	int	y;

	fd = open(filename, O_WRONLY | O_CREAT | O_TRUNC, 0644);
	if (fd == -1)
	{
		perror("Error opening file");
		exit(1);
	}
	y = 0;
	while (y < map->height)
	{
		if (write_line_to_file(fd, map->data[y], map->width) == -1)
		{
			perror("Error writing to file");
			close(fd);
			exit(1);
		}
		y++;
	}
	close(fd);
}
