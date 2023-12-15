/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   destroy_map.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mheinke <mheinke@student.42abudhabi.ae>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/15 06:13:58 by mheinke           #+#    #+#             */
/*   Updated: 2023/12/15 06:22:14 by mheinke          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/so_long.h"

void	free_map_array(t_game *game, int allocated_rows) 
{
	int i;
	
	i = 0;
	while (i < allocated_rows) {
		free(game->map->full[i]);
		i++;
	}
	free(game->map->full);
}
