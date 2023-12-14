/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   free_structs.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mheinke <mheinke@student.42abudhabi.ae>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/15 21:14:58 by mheinke           #+#    #+#             */
/*   Updated: 2023/12/14 16:40:26 by mheinke          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/so_long.h"

void	free_all_structs(t_game *game)
{
	free(game->mlx);
	free(game->map);
	free(game->start_menu);
	free(game->loadingscreen);
	free(game->player);
	free(game->music);
}
