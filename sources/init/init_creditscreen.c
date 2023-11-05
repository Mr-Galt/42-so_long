/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   init_creditscreen.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mheinke <mheinke@student.42abudhabi.ae>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/05 20:54:52 by mheinke           #+#    #+#             */
/*   Updated: 2023/11/05 20:58:38 by mheinke          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/so_long.h"

void init_creditscreen(t_game *game)
{
	game->status->creditscreen = mlx_xpm_file_to_image(game->mlx, CREDITSCREEN, &game->screen_width, &game->screen_height);
}
