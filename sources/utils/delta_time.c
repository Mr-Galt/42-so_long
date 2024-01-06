/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   delta_time.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mheinke <mheinke@student.42abudhabi.ae>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/19 10:48:49 by mheinke           #+#    #+#             */
/*   Updated: 2024/01/02 08:23:14 by mheinke          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/so_long.h"

long long delta(void) 
{
    static struct timeval last_time;  // Static variable to store the time of the last frame
    struct timeval current_time;
    long long delta;

    gettimeofday(&current_time, NULL);

    // Calculate the time difference in milliseconds
    delta = (current_time.tv_sec - last_time.tv_sec) * 1000LL + 
            (current_time.tv_usec - last_time.tv_usec) / 1000;

    // Update last_time to current_time for the next call
    last_time = current_time;

    return delta;
}

long long	delta_time(void)
{
	struct timeval	timeval;
	long long		delta;

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
