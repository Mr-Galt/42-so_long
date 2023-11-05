/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   clear_and_free.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mheinke <mheinke@student.42abudhabi.ae>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/04 14:15:28 by mheinke           #+#    #+#             */
/*   Updated: 2023/11/05 21:12:54 by mheinke          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/so_long.h"

void free_startscreen(t_game *game)
{
	mlx_destroy_image(game->mlx, game->status->startscreen[0]);
	mlx_destroy_image(game->mlx, game->status->startscreen[1]);
	mlx_destroy_image(game->mlx, game->status->startscreen[2]);
	mlx_destroy_image(game->mlx, game->status->startscreen[3]);
	mlx_destroy_image(game->mlx, game->status->startscreen[4]);
}

void free_optionscreen(t_game *game)
{
	mlx_destroy_image(game->mlx, game->status->optionscreen[0]);
	mlx_destroy_image(game->mlx, game->status->optionscreen[1]);	
}

void free_creditscreen(t_game *game)
{
	mlx_destroy_image(game->mlx, game->status->creditscreen);
}
