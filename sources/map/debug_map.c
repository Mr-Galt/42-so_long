/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   debug_map.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mheinke <mheinke@student.42abudhabi.ae>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/15 05:36:18 by mheinke           #+#    #+#             */
/*   Updated: 2023/12/20 09:14:36 by mheinke          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/so_long.h"

void	debug_map(t_game *game)
{
	ft_printf("\n");
	ft_printf("Map:\n");
	ft_printf("%s", game->map->string);
	ft_printf("\n");
	ft_printf("Rows: %d\tColums: %d", game->map->rows, game->map->columns);
	ft_printf("\n");
	ft_printf("Map px Height: %d\tMap px Width: %d", game->map_px_height, game->map_px_width);
	ft_printf("Player: %d\tExit: %d\tCollectibles: %d", game->map->players, game->map->exits, game->map->collectibles);
	ft_printf("\n");
}