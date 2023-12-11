/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_map.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mheinke <mheinke@student.42abudhabi.ae>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/16 18:13:42 by mheinke           #+#    #+#             */
/*   Updated: 2023/11/16 18:15:16 by mheinke          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/so_long.h"

// void	ft_check_map(t_game *game);
// void	ft_check_rows(t_game *game);
// void	ft_check_columns(t_game *game);
// void	ft_count_map_parameters(t_game *game);
// void	ft_verify_map_parameters(t_game *game);

// void	ft_check_map(t_game *game)
// {
// 	ft_check_rows(game);
// 	ft_check_columns(game);
// 	ft_count_map_parameters(game);
// 	ft_verify_map_parameters(game);
// }

// void	ft_check_rows(t_game *game)
// {
// 	int	i;

// 	i = 0;
// 	while (i < game->map.rows)
// 	{
// 		if (game->map.full[i][0] != WALL)
// 			ft_error_msg("Invalid Map. \
// There's a Wall missing from the first row.\n\
// The Map must be surrounded by walls!.", game);
// 		else if (game->map.full[i][game->map.columns - 1] != WALL)
// 			ft_error_msg("Invalid Map. \
// There's a Wall missing from the last row.\n\
// The Map must be surrounded by walls!.", game);
// 		i++;
// 	}
// }

// void	ft_check_columns(t_game *game)
// {
// 	int	i;

// 	i = 0;
// 	while (i < game->map.columns)
// 	{
// 		if (game->map.full[0][i] != WALL)
// 			ft_error_msg("Invalid Map. \
// There's a Wall missing from the first column.\n\
// The Map must be surrounded by walls!.", game);
// 		else if (game->map.full[game->map.rows - 1][i] != WALL)
// 			ft_error_msg("Invalid Map. \
// There's a Wall missing from the last column.\n\
// The Map must be surrounded by walls!.", game);
// 		i++;
// 	}
// }

// void	ft_count_map_parameters(t_game *game)
// {
// 	int	x;
// 	int	y;

// 	y = 0;
// 	while (y < game->map.rows)
// 	{
// 		x = 0;
// 		while (x < game->map.columns)
// 		{
// 			if (!ft_strchr("CEP01", game->map.full[y][x]))
// 				ft_error_msg("Invalid Map. Not expected map parameter.", game);
// 			else if (game->map.full[y][x] == PLAYER)
// 			{
// 				game->map.players++;
// 				game->map.player.x = x;
// 				game->map.player.y = y;
// 			}
// 			else if (game->map.full[y][x] == COINS)
// 				game->map.coins++;
// 			else if (game->map.full[y][x] == MAP_EXIT)
// 				game->map.exit++;
// 			x++;
// 		}
// 		y++;
// 	}
// }

// void	ft_verify_map_parameters(t_game *game)
// {
// 	if (game->map.coins == 0)
// 		ft_error_msg("Invalid Map. There are no Coins!", game);
// 	else if (game->map.exit == 0)
// 		ft_error_msg("Invalid Map. There is no Exit.", game);
// 	else if (game->map.players != 1)
// 		ft_error_msg("Invalid Map. Invalid Player quantity. \
// It's a single player game.", game);
// }