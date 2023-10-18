# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: mheinke <mheinke@student.42abudhabi.ae>    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/10/17 15:11:52 by mheinke           #+#    #+#              #
#    Updated: 2023/10/18 09:34:24 by mheinke          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

# **************************************************************************** #
# DIRECTORIES                                   							   #
# **************************************************************************** #

SRCS_PATH 		= ./srcs
CHECK_PATH 		= $(SRCS_PATH)/check/
LIST_PATH 		= $(SRCS_PATH)/list/
MEMORY_PATH 	= $(SRCS_PATH)/memory/

SRCS_CHECK		= ft_isalnum.c \
					ft_isalpha.c \
					ft_isascii.c \
					ft_isdigit.c \
					ft_isprint.c \
					ft_isspace.c
					
SRCS_LIST		= ft_lstadd_back.c \
					ft_lstadd_front.c \
					ft_lstclear.c \
					ft_lstdelone.c \
					ft_lstiter.c \
					ft_lstlast.c \
					ft_lstmap.c \
					ft_lstnew.c \
					ft_lstsize.c
					
SRCS_MEMORY		= ft_bzero.c \
					ft_calloc.c \
					ft_memchr.c \
					ft_memcmp.c \
					ft_memcpy.c \
					ft_memmove.c \
					ft_memset.c

SRC_CHECK		= $(addprefix $(CHECK_PATH),$(SRCS_CHECK))
SRC_LIST		= $(addprefix $(LIST_PATH),$(SRCS_LIST))
SRC_MEMORY		= $(addprefix $(MEMORY_PATH),$(SRCS_MEMORY))

OBJS_CHECK		= $(SRC_CHECK:.c=.o)
OBJS_LIST		= $(SRC_LIST:.c=.o)
OBJS_MEMORY		= $(SRC_MEMORY:.c=.o)

HEAD			= ./includes/

# **************************************************************************** #
# VARIABLES                                   							   	   #
# **************************************************************************** #

NAME		= libft.a
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
# TARGETS                                   							   	   #
# **************************************************************************** #

all: $(NAME)

$(OBJS_CHECK): %.o: %.c
	@if ! $(GCC) $(CFLAGS) -c -I $(HEAD) $< -o $@ 2> error.txt; then \
		echo "$(RED)$(BOLD)MAKEFILE TERMINATED!$(RESET)"; \
		echo "$(YELLOW)Unable to create the object file for $<$(RESET)"; \
		echo "\n\n$(RED)$(BOLD)ERROR$(RESET)"; \
		sed '$$d' error.txt; \
		echo "\n\n$(YELLOW)EXITING$(RESET)"; \
		exit 1; \
	fi

$(OBJS_LIST): %.o: %.c
	@if ! $(GCC) $(CFLAGS) -c -I $(HEAD) $< -o $@ 2> error.txt; then \
		echo "$(RED)$(BOLD)MAKEFILE TERMINATED!$(RESET)"; \
		echo "$(YELLOW)Unable to create the object file for $<$(RESET)"; \
		echo "\n\n$(RED)$(BOLD)ERROR$(RESET)"; \
		sed '$$d' error.txt; \
		echo "\n\n$(YELLOW)EXITING$(RESET)"; \
		exit 1; \
	fi

$(OBJS_MEMORY): %.o: %.c
	@if ! $(GCC) $(CFLAGS) -c -I $(HEAD) $< -o $@ 2> error.txt; then \
		echo "$(RED)$(BOLD)MAKEFILE TERMINATED!$(RESET)"; \
		echo "$(YELLOW)Unable to create the object file for $<$(RESET)"; \
		echo "\n\n$(RED)$(BOLD)ERROR$(RESET)"; \
		sed '$$d' error.txt; \
		echo "\n\n$(YELLOW)EXITING$(RESET)"; \
		exit 1; \
	fi

$(NAME): $(OBJS_CHECK) $(OBJS_LIST) $(OBJS_MEMORY)
	@$(AR) $(NAME) $(OBJS_CHECK) $(OBJS_LIST) $(OBJS_MEMORY)
	@$(LIB) $(NAME)
	@echo ""
	@echo "$(GREEN)██╗░░░░░██╗██████╗░███████╗████████╗"
	@echo "██║░░░░░██║██╔══██╗██╔════╝╚══██╔══╝"
	@echo "██║░░░░░██║██████╦╝█████╗░░░░░██║░░░"
	@echo "██║░░░░░██║██╔══██╗██╔══╝░░░░░██║░░░"
	@echo "███████╗██║██████╦╝██║░░░░░░░░██║░░░"
	@echo "╚══════╝╚═╝╚═════╝░╚═╝░░░░░░░░╚═╝░░░"
	@echo "Created: $(words $(OBJS_CHECK) $(OBJS_LIST) $(OBJS_MEMORY)) object file(s) for Libft"
	@echo "Created: $(NAME)$(RESET)"

clean:
	@$(RM) $(OBJS_CHECK) $(OBJS_LIST) $(OBJS_MEMORY) $(OBJS_PRINT) $(OBJS_STRING) error.txt
	@$(RM) $(NAME)
	@echo ""
	@echo "$(YELLOW)██╗░░░░░██╗██████╗░███████╗████████╗"
	@echo "██║░░░░░██║██╔══██╗██╔════╝╚══██╔══╝"
	@echo "██║░░░░░██║██████╦╝█████╗░░░░░██║░░░"
	@echo "██║░░░░░██║██╔══██╗██╔══╝░░░░░██║░░░"
	@echo "███████╗██║██████╦╝██║░░░░░░░░██║░░░"
	@echo "╚══════╝╚═╝╚═════╝░╚═╝░░░░░░░░╚═╝░░░"
	@echo "Removed: $(words $(OBJS_CHECK) $(OBJS_LIST) $(OBJS_MEMORY)) object file(s) from Libft"
	@echo "Removed: $(NAME)$(RESET)"

fclean: clean

re: fclean all

.PHONY: all clean fclean re