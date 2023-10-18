/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mheinke <mheinke@student.42abudhabi.ae>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/18 09:20:58 by mheinke           #+#    #+#             */
/*   Updated: 2023/10/18 16:37:57 by mheinke          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/so_long.h"

void	init_start_screen(t_game *game)
{
	game->mlx = mlx_init();
	game->status = 0;
	game->screen_width = 1792;
	game->screen_height = 1024;
	game->win = mlx_new_window(game->mlx, SCREEN_WIDTH, SCREEN_HEIGHT, "...");	
	game->background = mlx_xpm_file_to_image(game->mlx, START_SCREEN, &game->screen_width, &game->screen_height);
	mlx_put_image_to_window(game->mlx, game->win, game->background, 0, 0);
}

int	key_press(int keycode, t_game *game)
{
	if (keycode == 49 && game->status == 0)
	{
		mlx_clear_window(game->mlx, game->win);
		mlx_destroy_image(game->mlx, game->background);
		game->status = 1;
		return (1);
	}
	if (keycode == 53)
	{
		mlx_destroy_window(game->mlx, game->win);
    	free(game->mlx);
		exit (1);
	}
	return (0);
}

int	main(void)
{
	t_game	game;
	
	init_start_screen(&game);
	mlx_hook(game.win, 2, 1L << 0, key_press, &game);
	
	mlx_loop(game.mlx);
	return (0);
}
