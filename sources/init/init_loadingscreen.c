/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   init_loadingscreen.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mheinke <mheinke@student.42abudhabi.ae>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/09 09:31:11 by mheinke           #+#    #+#             */
/*   Updated: 2023/11/09 10:54:55 by mheinke          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/so_long.h"

void init_loadingscreen(t_game *game)
{	
	game->loadingscreen->screen = mlx_xpm_file_to_image(game->mlx, LOADINGSCREEN, &game->screen_width, &game->screen_height);
	game->loadingscreen->quote[0] = mlx_xpm_file_to_image(game->mlx, QUOTE_1, &game->screen_width, &game->screen_height);
	game->loadingscreen->quote[1] = mlx_xpm_file_to_image(game->mlx, QUOTE_2, &game->screen_width, &game->screen_height);
	game->loadingscreen->quote[2] = mlx_xpm_file_to_image(game->mlx, QUOTE_3, &game->screen_width, &game->screen_height);
	game->loadingscreen->quote[3] = mlx_xpm_file_to_image(game->mlx, QUOTE_4, &game->screen_width, &game->screen_height);
	game->loadingscreen->quote[4] = mlx_xpm_file_to_image(game->mlx, QUOTE_5, &game->screen_width, &game->screen_height);
}
