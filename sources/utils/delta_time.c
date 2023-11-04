/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   delta_time.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mheinke <mheinke@student.42abudhabi.ae>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/19 10:48:49 by mheinke           #+#    #+#             */
/*   Updated: 2023/11/04 14:54:47 by mheinke          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/so_long.h"

long long	delta_time(void)
{
	struct timeval	timeval;
	long long delta;
	
	gettimeofday(&timeval, NULL);
	delta = timeval.tv_sec * 1000LL + timeval.tv_usec / 1000;
	return (delta);
}

void	show_fps(t_game *game)
{
	char	*fps_msg;
	char	*fps;

	fps = ft_itoa(game->delta_fps);
	fps_msg = ft_strjoin("FPS: ", fps);
	mlx_string_put(game->mlx, game->win, 20, 30, 11010100, fps_msg);
	free(fps);
	free(fps_msg);
}

void	calculate_fps(t_game *game)
{
	long long	now;

	now = delta_time();
	if (now > game->last_timestamp)
	{
		game->delta_fps = 960 / (now - game->last_timestamp);
		game->last_timestamp = now;
	}
}