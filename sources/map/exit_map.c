/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   exit_map.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mheinke <mheinke@student.42abudhabi.ae>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/18 20:19:16 by mheinke           #+#    #+#             */
/*   Updated: 2023/12/18 21:29:50 by mheinke          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/so_long.h"

void	exit_map_failure(t_game *game, char *message)
{
	ft_printf("%s\n", message);
	free_map_array(game, game->map->rows);
	free(game->map);
	exit (EXIT_FAILURE);
}
