/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   so_long.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mheinke <mheinke@student.42abudhabi.ae>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/18 09:23:19 by mheinke           #+#    #+#             */
/*   Updated: 2023/10/20 14:13:41 by mheinke          ###   ########.fr       */
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

# define SCREEN_WIDTH	320
# define SCREEN_HEIGHT	160

/* ************************************************************************** */
/* DEFINE KEYS                                                                */
/* ************************************************************************** */

# define A      0
# define D     	2
# define W 		13
# define S		1
# define E		14
# define LEFT	123
# define RIGHT	124
# define UP		126
# define DOWN	125
# define SPACE	49
# define RETURN	36
# define ENTER	76
# define ESC	53

/* ************************************************************************** */
/* DEFINE PICTURES                                                            */
/* ************************************************************************** */

# define START_SCREEN	"./assets/start_screen/start_screen.xpm"

# define PLAYER			"./assets/player/player.xpm"

/* ************************************************************************** */
/* DEFINE STRUCTS                                                             */
/* ************************************************************************** */

typedef struct s_player
{
	int		life;
	int		score;
	int		img_width;
	int		img_height;
	int		player_pos_x;
	int		player_pos_y;
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
void		render_img(int x, int y, void *sprite, t_game *game);
void		error(char *str);

/* ************************************************************************** */
/* FUNCTIONS - KEY HOOKS                                                      */
/* ************************************************************************** */

void		key_register(t_game *game);
int			kill(int keycode, t_game *game);
int			keydown(int keycode, t_game *game);
int 		keyup(int keycode, t_game *game);

int 		player_move(int keycode, t_game *game);

/* ************************************************************************** */
/* FUNCTIONS - Initialization                                                 */
/* ************************************************************************** */

void		init_game(t_game *game);
void		init_player(t_game *game);

#endif