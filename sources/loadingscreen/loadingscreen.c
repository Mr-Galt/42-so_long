/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   loadingscreen.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mheinke <mheinke@student.42abudhabi.ae>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/09 10:08:47 by mheinke           #+#    #+#             */
/*   Updated: 2023/11/09 10:55:12 by mheinke          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/so_long.h"

void	loadingscreen(t_game *game)
{
	render_img(0, 0, game->loadingscreen->quote[2], game);
	render_img(0, 0, game->loadingscreen->screen, game);
}