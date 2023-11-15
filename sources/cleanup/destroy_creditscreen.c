/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   destroy_credit.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mheinke <mheinke@student.42abudhabi.ae>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/15 20:51:18 by mheinke           #+#    #+#             */
/*   Updated: 2023/11/15 21:02:04 by mheinke          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/so_long.h"

void	destroy_creditscreen(t_game *game)
{
	mlx_destroy_image(game->mlx, game->start_menu->creditscreen_s[0]);
	mlx_destroy_image(game->mlx, game->start_menu->creditscreen_s[1]);

	mlx_destroy_image(game->mlx, game->start_menu->creditscreen_m[0]);
	mlx_destroy_image(game->mlx, game->start_menu->creditscreen_m[1]);

	mlx_destroy_image(game->mlx, game->start_menu->creditscreen_l[0]);
	mlx_destroy_image(game->mlx, game->start_menu->creditscreen_l[1]);
}
