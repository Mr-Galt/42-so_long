# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: mheinke <mheinke@student.42abudhabi.ae>    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/10/14 13:29:51 by mheinke           #+#    #+#              #
#    Updated: 2023/10/17 17:12:57 by mheinke          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

# **************************************************************************** #
# DIRECTORIES   								                               #
# **************************************************************************** #

SRCS_DIR	= ./

SRCS_FILES	= *.c

SRCS		= $(addprefix $(SRCS_DIR)/,$(SRCS_FILES))

OBJS		= $(SRCS:.c=.o)

HEAD		= ./includes

# **************************************************************************** #
# LIBRARIES   								                               	   #
# **************************************************************************** #

LIBFT_DIR	= ./libft
LIBFT_PATH	= $(LIBFT_DIR)/libft.a

MLX_FLAGS = -framework OpenGL -framework Appkit -l z
MLX_DIR = ./mlx-macos
MLX_PATH = $(MLX_DIR)/libmlx.a

# **************************************************************************** #
# VARIABLES                                									   #
# **************************************************************************** #

NAME		= so_long

GCC			= gcc
CFLAGS 		= -Wall -Wextra -Werror

HEADER_FILE	= $(HEAD)/so_long.h

MF			= Makefile

END			= $'\x1b[0m
BOLD		= $'\x1b[1m
UNDER		= $'\x1b[4m
REV			= $'\x1b[7m
GREY		= $'\x1b[30m
RED			= $'\x1b[31m
GREEN		= $'\x1b[32m
YELLOW		= $'\x1b[33m
BLUE		= $'\x1b[34m
PURPLE		= $'\x1b[35m
CYAN		= $'\x1b[36m
WHITE		= $'\x1b[37m

# **************************************************************************** #
# TARGETS                                  									   #
# **************************************************************************** #

all: libft_make mlx_make $(NAME)

$(NAME) : $(MF) $(OBJS) $(LIBFT_PATH) $(MLX_PATH)
	@$(CC) $(CFLAGS) $(OBJS) $(LIBFT_PATH) $(MLX_PATH) $(MLX_FLAGS) -o $(NAME) 
	@echo "\n${GREEN}> Compilation of so_long was a success 🎉${END}"

%.o : %.c $(HEADER_FILE) $(MF)
	@/bin/echo -n .
	@$(CC) $(CFLAGS) -c $< -o $@ -I $(HEAD)

clean :
	@make fclean -C ./libft
	@make clean -C $(MLX_DIR)
	@rm -f $(OBJS)
	@echo "${YELLOW}> All objects files of so_long have been deleted ❌${END}"

fclean : clean
	@rm -f $(NAME)
	@echo "${YELLOW}> Cleaning of so_long has been done ❌${END}"

re : fclean make

libft_make :
	@make -C $(LIBFT_DIR)

mlx_make :
	@make -C $(MLX_DIR)