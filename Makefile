# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: mheinke <mheinke@student.42abudhabi.ae>    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/10/07 14:06:14 by mheinke           #+#    #+#              #
#    Updated: 2023/10/07 14:41:39 by mheinke          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

# **************************************************************************** #
#                                DIRECTORIES                                   #
# **************************************************************************** #

PATH_MAP_GENERATOR	= ./MapGenerator/

FILES_MAP_GENERATOR	= map_algo.c \
						map_file_creator.c \
						map_generator.c \
						map_utils.c \
						map_main.c

SRC_MAP_GENERATOR	= $(addprefix $(PATH_MAP_GENERATOR),$(FILES_MAP_GENERATOR))

OBJS_MAP_GENERATOR	= $(SRC_MAP_GENERATOR:.c=.o)

HEAD				= ./MapGenerator/

# **************************************************************************** #
#                                  VARIABLES                                   #
# **************************************************************************** #

NAME		= map_generator.a
AR			= ar rcs
RM			= rm -f
LIB			= ranlib
GCC			= gcc
CFLAGS 		= -Wall -Wextra -Werror

RESET		= \033[0m
BOLD		= \033[1m
RED			= \033[31m
GREEN		= \033[32m
YELLOW		= \033[33m
BLUE		= \033[34m

# **************************************************************************** #
#                                   TARGETS                                    #
# **************************************************************************** #

all: $(NAME)

$(OBJS_MAP_GENERATOR): %.o: %.c
	@if ! $(GCC) $(CFLAGS) -c -I $(HEAD) $< -o $@ 2> error.txt; then \
		echo "$(RED)$(BOLD)MAKEFILE TERMINATED!$(RESET)"; \
		echo "$(YELLOW)Unable to create the object file for $<$(RESET)"; \
		echo "\n\n$(RED)$(BOLD)ERROR$(RESET)"; \
		sed '$$d' error.txt; \
		echo "\n\n$(YELLOW)EXITING$(RESET)"; \
		exit 1; \
	fi

$(NAME): $(OBJS_MAP_GENERATOR)
	@$(AR) $(NAME) $(OBJS_MAP_GENERATOR)
	@$(LIB) $(NAME)
	@echo "$(GREEN)$(BOLD)CREATED THE MAP GENERATOR$(RESET)"
	@echo "$(YELLOW)Created: $(words $(OBJS_MAP_GENERATOR)) object file(s)$(RESET)"
	@echo "$(YELLOW)Created: $(NAME)$(RESET)"

clean:
	@$(RM) $(OBJS_MAP_GENERATOR) error.txt
	@echo "$(GREEN)$(BOLD)REMOVED THE MAP GENERATOR$(RESET)"
	@echo "$(YELLOW)Removed: $(words $(OBJS_MAP_GENERATOR)) object file(s)$(RESET)"

fclean: clean
	@$(RM) $(NAME)
	@echo "$(YELLOW)Removed: $(NAME)$(RESET)"

re: fclean all

.PHONY: all clean fclean re