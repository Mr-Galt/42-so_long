/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   calloc_map.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mheinke <mheinke@student.42abudhabi.ae>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/15 05:57:31 by mheinke           #+#    #+#             */
/*   Updated: 2023/12/15 07:46:02 by mheinke          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/so_long.h"

void	map_struct_calloc(t_game *game)
{
	game->map = ft_calloc(1, sizeof(t_map));
	if (game->map == NULL)
		error("Couldn't allocate memory for the map.\n");
}

void	map_array_calloc(t_game *game)
{
	int	i;

	i = 0;
	game->map->full = ft_calloc(game->map->rows, sizeof(char *));
	if (game->map->full == NULL)
	{
		free(game->map);
		error("Error\nMemory allocation for rows failed.");
	}
	while (i < game->map->rows)
	{
		game->map->full[i] = ft_calloc(game->map->columns, sizeof(char));
		if (game->map->full[i] == NULL)
		{
			free_map_array(game, i); 
			free(game->map);
			error("Error\nMemory allocation for columns failed.");
		}
		i++;
	}
}

void	map_calloc(t_game *game, int memory_step)
{
	if (memory_step == 1)
		map_struct_calloc(game);
	else if (memory_step == 2)
		map_array_calloc(game);
}
