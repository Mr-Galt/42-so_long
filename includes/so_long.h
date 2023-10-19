/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   so_long.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mheinke <mheinke@student.42abudhabi.ae>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/18 09:23:19 by mheinke           #+#    #+#             */
/*   Updated: 2023/10/19 16:37:46 by mheinke          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SO_LONG_H
# define SO_LONG_H

/* ************************************************************************** */
/* Libraries                                                                  */
/* ************************************************************************** */

# include "../libft/includes/libft.h"
# include "../mlx-macos/mlx.h"

# include <sys/time.h>
# include <fcntl.h>
# include <stdlib.h> 

/* ************************************************************************** */
/* DEFINE SIZES                                                               */
/* ************************************************************************** */

# define SCREEN_WIDTH	1792
# define SCREEN_HEIGHT	1024

/* ************************************************************************** */
/* DEFINE PICTURES                                                            */
/* ************************************************************************** */

# define START_SCREEN	"./assets/start_screen/start_screen.xpm"

/* ************************************************************************** */
/* DEFINE STRUCTS                                                             */
/* ************************************************************************** */

typedef struct s_player
{
	int		life;
	int		score;
	int		img_width;
	int		img_height;
	void	*idle;
	void	*shoots[3];
	void	*walk[4];
	void	*attack[8];
	void	*damage[4];
	void	*die[17];
	int		current_collect;
	int		max_collect;
}	t_player;

typedef struct s_enemy
{
	int		life;
	int		score_value;
	int		img_width;
	int		img_height;
	void	*idle[20];
	void	*walk[4];
	void	*attack[6];
	void	*die[15];
}	t_enemy;

typedef struct s_collectibles
{
	void	*animation;
	int		score_value;
	int		current_amount;
	int		max_amount;
} t_collectibles;

typedef struct s_game
{
	void		*mlx;
	void		*win;
	int			status;
	int			screen_width;
	int			screen_height;
	int			debug;
	long long	timestamp;
	long long	last_timestamp;
	int			delta_fps;
	void		*startscreen;

	t_player	*player;
	t_list		*monsters;
	t_list		*collectibles;
}	t_game;

/* ************************************************************************** */
/* FUNCTIONS - Tools & Debug                                                  */
/* ************************************************************************** */

long long	delta_time(void);
void		show_fps(t_game *game);
void		calculate_fps(t_game *game);

/* ************************************************************************** */
/* FUNCTIONS - Initialization                                                 */
/* ************************************************************************** */

void		init_game(t_game *game);
void		init_player(t_game *game);

#endif