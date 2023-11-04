/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   so_long.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mheinke <mheinke@student.42abudhabi.ae>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/18 09:23:19 by mheinke           #+#    #+#             */
/*   Updated: 2023/11/04 14:17:54 by mheinke          ###   ########.fr       */
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
# include <stdio.h>

/* ************************************************************************** */
/* DEFINE SIZES                                                               */
/* ************************************************************************** */

# define SCREEN_WIDTH	640
# define SCREEN_HEIGHT	480
# define SCREEN_NAME	"Martin's Game"

# define CAMERA_WIDTH	320
# define CAMERA_HEIGHT	240

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

# define STARTSCREEN_MENU		"./assets/start_screen/startscreen_0.xpm"
# define STARTSCREEN_START		"./assets/start_screen/startscreen_1.xpm"
# define STARTSCREEN_OPTIONS	"./assets/start_screen/startscreen_2.xpm"
# define STARTSCREEN_CREDITS	"./assets/start_screen/startscreen_3.xpm"
# define STARTSCREEN_EXIT		"./assets/start_screen/startscreen_4.xpm"

# define PLAYER					"./assets/player/new.xpm"

/* ************************************************************************** */
/* DEFINE GAME STATUS                                                         */
/* ************************************************************************** */

typedef enum
{
    START_MENU,
	GAME_RUN,
    OPTION_MENU,
    CREDITS_MENU,
	GAME_QUIT,
	GAME_WIN,
	GAME_OVER,
}e_game_status;

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

typedef struct s_game_status
{
	int		actual_status;
	int		startscreen_status;
	void	*startscreen[5];
	int		start_button[4];
	int		start_options[4];
	int		start_credits[4];
	int		start_exit[4];	
} t_game_status;

typedef struct s_game
{
	void			*mlx;
	void			*win;
	int				screen_width;
	int				screen_height;
	int				debug;
	long long		timestamp;
	long long		last_timestamp;
	int				delta_fps;

	t_game_status	*status;
	t_player		*player;
	t_list			*monsters;
	t_list			*collectibles;
}	t_game;

/* ************************************************************************** */
/* FUNCTIONS - Tools & Debug                                                  */
/* ************************************************************************** */

long long	delta_time(void);
void		show_fps(t_game *game);
void		calculate_fps(t_game *game);
void		render_img(int x, int y, void *sprite, t_game *game);
void		error(char *str);

void 		startscreen(t_game *game);
void 		free_startscreen(t_game *game);

/* ************************************************************************** */
/* FUNCTIONS - KEY & MOUSE HOOKS                                              */
/* ************************************************************************** */

void		key_register(t_game *game);
int			kill(int keycode, t_game *game);
int			keydown(int keycode, t_game *game);
int 		keyup(int keycode, t_game *game);

void		mouse_register_startmenu(t_game *game);
int 		mouse_click(int button, int x, int y, t_game *game);

int 		player_move(int keycode, t_game *game);

/* ************************************************************************** */
/* FUNCTIONS - INITIALIZATION                                                 */
/* ************************************************************************** */

void		init_game(t_game *game);
void		init_player(t_game *game);
void 		init_startscreen(t_game *game);

/* ************************************************************************** */
/* FUNCTIONS - MENU BUTTONS                                                   */
/* ************************************************************************** */

void 		coordinates_start_button(t_game *game);
void 		coordinates_options_button(t_game *game);
void 		coordinates_credits_button(t_game *game);
void 		coordinates_exit_button(t_game *game);


#endif