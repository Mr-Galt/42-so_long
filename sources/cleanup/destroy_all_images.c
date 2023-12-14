/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   destroy_all_images.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mheinke <mheinke@student.42abudhabi.ae>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/12 20:16:17 by mheinke           #+#    #+#             */
/*   Updated: 2023/12/14 16:41:17 by mheinke          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/so_long.h"

void	destroy_all_images(t_game *game)
{
	destroy_loadingscreen(game);
	destroy_optionscreen(game);
	destroy_startscreen(game);
	destroy_creditscreen(game);
}
