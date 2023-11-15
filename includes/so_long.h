/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   so_long.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mheinke <mheinke@student.42abudhabi.ae>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/18 09:23:19 by mheinke           #+#    #+#             */
/*   Updated: 2023/11/15 21:35:04 by mheinke          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SO_LONG_H
# define SO_LONG_H

/* ************************************************************************** */
/* EXTERNAL LIBRARIES                                                         */
/* ************************************************************************** */

# include "../libft/includes/libft.h"
# include "../mlx-macos/mlx.h"

# include <sys/time.h>
# include <fcntl.h>
# include <stdlib.h> 
# include <stdio.h>
# include <string.h>

/* ************************************************************************** */
/* INTERNAL HEADERS                                                           */
/* ************************************************************************** */

# include "sprites.h"
# include "music_and_sfx.h"

/* ************************************************************************** */
/* DEFINE SIZES                                                               */
/* ************************************************************************** */

# define SCREEN_WIDTH	640
# define SCREEN_HEIGHT	480

# define SCREEN_NAME	"Martin's Game"

# define OFFSET_S		1
# define OFFSET_M		2
# define OFFSET_L		3

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
/* DEFINE GAME STATUS                                                         */
/* ************************************************************************** */

typedef enum
{
	STATE_START_MENU,
    STATE_OPTIONS,
    STATE_CREDITS,
    STATE_EXIT,
    STATE_LOADING,
    STATE_GAME,
    STATE_WIN,
    STATE_LOSE
}e_state;

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
	int		current_collect;
	int		max_collect;
}	t_player;

typedef struct s_music
{
	char	background;
	int		background_pid;
} t_music;

typedef struct s_start_menu
{	
	int		startscreen_status;
	void	*startscreen_s[5];
	void	*startscreen_m[5];
	void	*startscreen_l[5];
	int		start_button[4];
	int		start_options[4];
	int		start_credits[4];
	int		start_exit[4];	

	int		creditscreen_status;
	void	*creditscreen_s[2];
	void	*creditscreen_m[2];
	void	*creditscreen_l[2];
	int		credit_back[4];

	int		optionscreen_status;
	void	*optionscreen_s[2];
	void	*optionscreen_m[2];
	void	*optionscreen_l[2];
	void	*optionscreen_button[2];
	int		option_back[4];

	int		option_screensize_status;
	void	*option_screensize_s[3];
	void	*option_screensize_m[3];
	void	*option_screensize_l[3];
	int		button_screensize_1[4];
	int		button_screensize_2[4];
	int		button_screensize_3[4];
} t_start_menu;

typedef struct s_loadingscreen
{	
	int		random_screen;
	void	*screen_s[5];
	void	*screen_m[5];
	void	*screen_l[5];
} t_loadingscreen;

typedef struct s_game
{
	void			*mlx;
	void			*win;
	
	int				screen_width;
	int				screen_height;
	int				screen_size;

	int				state;

	int				debug;
	
	long long		timestamp;
	long long		last_timestamp;
	int				delta_fps;

	t_start_menu	*start_menu;
	t_loadingscreen	*loadingscreen;
	t_player		*player;
	t_music			*music;
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
void 		optionscreen(t_game *game);
void 		free_optionscreen(t_game *game);
void 		creditscreen(t_game *game);
void 		free_creditscreen(t_game *game);
void		loadingscreen(t_game *game);
void		window_changer(t_game *game);

/* ************************************************************************** */
/* FUNCTIONS - KEY & MOUSE HOOKS                                              */
/* ************************************************************************** */

void		input_hooks(t_game *game);
int 		mouse_click(int button, int x, int y, t_game *game);
int 		mouse_move(int x, int y, t_game *game);

void		key_register_startmenu(t_game *game);
int			kill(t_game *game);
int			keydown(int keycode, t_game *game);
int 		keyup(int keycode, t_game *game);

void		mouse_register_startmenu(t_game *game);
int 		mouse_click_start_menu(int button, int x, int y, t_game *game);
int 		mouse_move_start_menu(int x, int y, t_game *game) ;

void		mouse_hover_start_menu(int x, int y, t_game *game);
void		mouse_hover_option_menu(int x, int y, t_game *game);
void		mouse_hover_credit_menu(int x, int y, t_game *game);

int 		player_move(int keycode, t_game *game);

/* ************************************************************************** */
/* FUNCTIONS - INITIALIZATION                                                 */
/* ************************************************************************** */

void		init_game(t_game *game);

void 		init_game_menu(t_game*game);
void 		init_startscreen(t_game *game);
void 		init_creditscreen(t_game *game);
void 		init_optionscreen(t_game *game);
void		init_loadingscreen(t_game *game);

void		init_player(t_game *game);

void 		init_buttons_optionscreen(t_game *game);

/* ************************************************************************** */
/* FUNCTIONS - MENU BUTTONS                                                   */
/* ************************************************************************** */

void 		coordinates_start_button(t_game *game);
void 		coordinates_options_button(t_game *game);
void 		coordinates_credits_button(t_game *game);
void 		coordinates_exit_button(t_game *game);
void 		init_startmenu_buttons(t_game *game);
void 		init_buttons_optionscreen(t_game *game);
void 		coordinates_credit_back(t_game *game);

/* ************************************************************************** */
/* FUNCTIONS - STATE MACHINE                                                  */
/* ************************************************************************** */

int			check_state(t_game *game);
void 		change_state(t_game *game, e_state new_state);
int 		check_screenstatus(t_game *game);
void		kill_menu(t_game *game);

int			check_button_start_menu(int x, int y, t_game *game);
int			check_button_option_menu(int x, int y, t_game *game);
int			check_button_screensize(int x, int y, t_game *game);
int			check_button_credit_menu(int x, int y, t_game *game);

/* ************************************************************************** */
/* CLEANUP                                                                    */
/* ************************************************************************** */

void 		free_all_structs(t_game *game);

void		destroy_startscreen(t_game *game);
void		destroy_optionscreen(t_game *game);
void		destroy_creditscreen(t_game *game);

void		destroy_loadingscreen(t_game *game);

void 		destroy_player(t_game *game);

/* ************************************************************************** */
/* TESTS                                                                      */
/* ************************************************************************** */

int			put_a_string(t_game *game);
void 		do_it(t_game *game);
int 		play_music(char* sfx, t_game *game);
int    		stop_music(t_game *game);

#endif