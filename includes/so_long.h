/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   so_long.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mheinke <mheinke@student.42abudhabi.ae>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/18 09:23:19 by mheinke           #+#    #+#             */
/*   Updated: 2023/12/18 06:53:21 by mheinke          ###   ########.fr       */
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
# include <stdbool.h>

// #include <pthread.h>

/* ************************************************************************** */
/* INTERNAL HEADERS                                                           */
/* ************************************************************************** */

# include "sprites.h"
# include "music_and_sfx.h"
# include "keys_macos.h"

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
/* DEFINE MAP	                                                              */
/* ************************************************************************** */

# define WALL		'1'
# define SPAWN		'P'
# define COLLECT	'C'
# define EXIT		'E'
# define ENEMY		'X'
# define FLOOR		'0'

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
	int		position[2];
	int		last_position[2];
	int		jumping;
	int		is_on_ground;
	int		action_key[3];


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
	int		start_alloc_flag;	

	int		creditscreen_status;
	void	*creditscreen_s[2];
	void	*creditscreen_m[2];
	void	*creditscreen_l[2];
	int		credit_back[4];
	int		credit_alloc_flag;

	int		optionscreen_status;
	void	*optionscreen_s[2];
	void	*optionscreen_m[2];
	void	*optionscreen_l[2];
	void	*optionscreen_button[2];
	int		option_back[4];
	int		option_alloc_flag;

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
	int		loading_alloc_flag;
} t_loadingscreen;

typedef struct s_map
{
	char	*string;
	char	**full;
	int		rows;
	int		columns;
	int		collectibles;
	int		players;
	int		enemies;
	int		exits;
} t_map;

typedef struct s_game
{
	void			*mlx;
	void			*win;
	
	int				screen_width;
	int				screen_height;
	int				screen_size;

	int				map_fd;

	int				state;

	int				debug;
	
	long long		timestamp;
	long long		last_timestamp;
	int				delta_fps;

	t_map			*map;
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
int			render_img(int x, int y, void *sprite, t_game *game);
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

void 		init_game_menu(t_game*game, int size);
void 		init_startscreen(t_game *game, int size);
void 		init_creditscreen(t_game *game, int size);
void 		init_optionscreen(t_game *game, int size);
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
void		free_map_array(t_game *game, int allocated_rows);
void 		destroy_all_images(t_game *game);

void		destroy_startscreen(t_game *game);
void		destroy_optionscreen(t_game *game);
void		destroy_creditscreen(t_game *game);

void		destroy_loadingscreen(t_game *game);

void 		destroy_player(t_game *game);




/* ************************************************************************** */
/* MAP                                                                        */
/* ************************************************************************** */

void		check_terminal_arguments(int argc, char **argv);
void		read_map(t_game *game, char *argv);
void		map_calloc(t_game *game, int memory_step);
void		debug_map(t_game *game);
void		check_whole_map(t_game *game);

/* ************************************************************************** */
/* TESTS                                                                      */
/* ************************************************************************** */

int			put_a_string(t_game *game);
void 		do_it(t_game *game);
int 		play_music(char* sfx, t_game *game);
int    		stop_music(t_game *game);

#endif