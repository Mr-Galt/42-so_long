# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: mheinke <mheinke@student.42abudhabi.ae>    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/10/14 13:29:51 by mheinke           #+#    #+#              #
#    Updated: 2023/11/09 10:12:14 by mheinke          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

# **************************************************************************** #
# DIRECTORIES   								                               #
# **************************************************************************** #

SRCS_DIR	= 	./sources

SRCS_FILES	=	main.c \
				\
				utils/delta_time.c \
				utils/statemachine.c \
				utils/render.c \
				utils/error_handling.c \
				utils/clear_and_free.c \
				\
				user_input/input_hooks.c \
				user_input/key_input.c \
				user_input/mouse_input.c \
				\
				init/init_game.c \
				init/init_player.c \
				init/init_startscreen.c \
				init/init_optionscreen.c \
				init/init_creditscreen.c \
				init/init_loadingscreen.c \
				\
				player/player_movement.c \
				\
				menu/menu_start_screen.c \
				menu/menu_buttons.c \
				menu/menu_mouse_hover.c \
				menu/menu_mouse_click.c \
				\
				loadingscreen/loadingscreen.c \

SRCS		= $(addprefix $(SRCS_DIR)/,$(SRCS_FILES))

OBJS		= $(SRCS:.c=.o)

HEAD		= ./includes

# **************************************************************************** #
# LIBRARIES   								                               	   #
# **************************************************************************** #

LIBFT_DIR	= ./libft
LIBFT_PATH	= $(LIBFT_DIR)/libft.a

MLX_FLAGS = -L$(MLX_DIR) -lmlx -framework Cocoa -framework OpenGL -framework AppKit
MLX_DIR = ./mlx-macos
MLX_PATH = $(MLX_DIR)/libmlx.a

# **************************************************************************** #
# VARIABLES                                									   #
# **************************************************************************** #

NAME		= so_long
RM			= rm -f
GCC			= gcc
CFLAGS 		= -Wall -Wextra -Werror 
CFLAGS		+= -fsanitize=address

HEADER_FILE	= $(HEAD)/so_long.h

RESET		= $'\x1b[0m
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

define HEADER
░██████╗░█████╗░░░░░░░░░██╗░░░░░░█████╗░███╗░░██╗░██████╗░
██╔════╝██╔══██╗░░░░░░░░██║░░░░░██╔══██╗████╗░██║██╔════╝░
╚█████╗░██║░░██║░░░░░░░░██║░░░░░██║░░██║██╔██╗██║██║░░██╗░
░╚═══██╗██║░░██║░░░░░░░░██║░░░░░██║░░██║██║╚████║██║░░╚██╗
██████╔╝╚█████╔╝███████╗███████╗╚█████╔╝██║░╚███║╚██████╔╝
╚═════╝░░╚════╝░╚══════╝╚══════╝░╚════╝░╚═╝░░╚══╝░╚═════╝░
endef
export HEADER

# **************************************************************************** #
# TARGETS                                  									   #
# **************************************************************************** #

all: libft_make mlx_make $(NAME)

$(OBJS): %.o: %.c
	@if ! $(GCC) $(CFLAGS) -c -I $(HEAD) $< -o $@ 2> error.txt; then \
		echo "$(RED)$(BOLD)MAKEFILE TERMINATED!$(RESET)"; \
		echo "$(YELLOW)Unable to create the object file for $<$(RESET)"; \
		echo "\n\n$(RED)$(BOLD)ERROR$(RESET)"; \
		sed '$$d' error.txt; \
		echo "\n\n$(YELLOW)EXITING$(RESET)"; \
		exit 1; \
	fi

$(NAME) : $(OBJS) $(LIBFT_PATH) $(MLX_PATH)
	@$(CC) $(CFLAGS) $(OBJS) $(LIBFT_PATH) $(MLX_PATH) $(MLX_FLAGS) -o $(NAME) 
	@echo ""
	@echo "${GREEN}$$HEADER"
	@echo "Created: $(words $(OBJS)) object file(s) for so_long"
	@echo "Created: $(NAME)$(RESET)"
#	@make loop_example

clean :
	@make fclean -C $(LIBFT_DIR)
	@make clean -C $(MLX_DIR)
	@$(RM) $(OBJS) error.txt
	@echo ""
	@echo "${YELLOW}$$HEADER"
	@echo "$Removed: $(words $(OBJS)) object file(s) from so_long"

fclean : clean
	@$(RM) $(NAME)
	@echo "${YELLOW}Removed: $(NAME)$(RESET)"

re : fclean all

libft_make :
	@make -C $(LIBFT_DIR)

mlx_make :
	@make -C $(MLX_DIR)

loop_example:
	@i=0 ; \
	while [ $$i -lt 10 ]; do \
		printf "\rIteration $$i" ; \
		sleep 1 ; \
		i=$$((i + 1)) ; \
	done
	@printf "\n"
