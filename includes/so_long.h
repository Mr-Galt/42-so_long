/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   so_long.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mheinke <mheinke@student.42abudhabi.ae>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/18 09:23:19 by mheinke           #+#    #+#             */
/*   Updated: 2023/10/18 16:29:10 by mheinke          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SO_LONG_H
# define SO_LONG_H
# include "../libft/includes/libft.h"
# include "../mlx-macos/mlx.h"

/* ************************************************************************** */
/* DEFINE SIZES                                                               */
/* ************************************************************************** */

# define SCREEN_WIDTH	1792
# define SCREEN_HEIGHT	1024

/* ************************************************************************** */
/* DEFINE PICTURES                                                            */
/* ************************************************************************** */

# define START_SCREEN	"./assets/start_screen/start_screen.xpm"
# define BACKGROUND		"./assets/background/background.xpm"

/* ************************************************************************** */
/* DEFINE STRUCTS                                                             */
/* ************************************************************************** */

typedef struct s_game
{
	void	*mlx;
	void	*win;
	int		status;
	int		screen_width;
	int		screen_height;
	int		debug;
	void	*background;
	
}	t_game;

#endif