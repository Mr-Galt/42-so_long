/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   clear_and_free.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mheinke <mheinke@student.42abudhabi.ae>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/04 14:15:28 by mheinke           #+#    #+#             */
/*   Updated: 2023/11/09 09:34:22 by mheinke          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/so_long.h"

void free_player(t_game *game)
{
	mlx_destroy_image(game->mlx, game->player->idle);
}

void free_structs(t_game *game)
{
	if (game->player)
		free(game->player);
	if (game->start_menu)
		free(game->start_menu);
}
