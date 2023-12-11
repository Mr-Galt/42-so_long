# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: mheinke <mheinke@student.42abudhabi.ae>    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/10/17 15:11:52 by mheinke           #+#    #+#              #
#    Updated: 2023/12/11 08:52:56 by mheinke          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

# **************************************************************************** #
# DIRECTORIES                                   							   #
# **************************************************************************** #

SRCS_PATH 		= ./srcs
CHECK_PATH 		= $(SRCS_PATH)/check/
GNL_PATH		= $(SRCS_PATH)/gnl/
LIST_PATH 		= $(SRCS_PATH)/list/
MEMORY_PATH 	= $(SRCS_PATH)/memory/
PRINTF_PATH		= $(SRCS_PATH)/printf/
STRING_PATH		= $(SRCS_PATH)/string/

# **************************************************************************** #
# C FILES                                                                      #
# **************************************************************************** #

SRCS_CHECK		= ft_isalnum.c \
					ft_isalpha.c \
					ft_isascii.c \
					ft_isdigit.c \
					ft_isprint.c \
					ft_isspace.c
SRCS_GNL		= get_next_line.c \
					get_next_line_utils.c
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
SRCS_PRINTF		= ft_printf.c \
					printf_char.c \
					printf_hex.c \
					printf_nbr.c \
					printf_ptr.c \
					printf_string.c \
					printf_uint.c
SRCS_STRING		= ft_atoi.c \
					ft_itoa.c \
					ft_split.c \
					ft_strchr.c \
					ft_strdup.c \
					ft_strjoin.c \
					ft_strlen.c \
					ft_strncmp.c \
					ft_substr.c \
					ft_strrchr.c \
					ft_strnstr.c \
					ft_strlcpy.c \
					ft_strlcat.c \
					ft_strtrim.c \
					ft_strmapi.c \
					ft_striteri.c \
					ft_toupper.c \
					ft_tolower.c \
					ft_putchar_fd.c \
					ft_putstr_fd.c \
					ft_putendl_fd.c \
					ft_putnbr_fd.c \

# **************************************************************************** #
# SOURCES                                                                      #
# **************************************************************************** #

SRC_CHECK		= $(addprefix $(CHECK_PATH),$(SRCS_CHECK))
SRC_GNL			= $(addprefix $(GNL_PATH),$(SRCS_GNL))
SRC_LIST		= $(addprefix $(LIST_PATH),$(SRCS_LIST))
SRC_MEMORY		= $(addprefix $(MEMORY_PATH),$(SRCS_MEMORY))
SRC_PRINTF		= $(addprefix $(PRINTF_PATH),$(SRCS_PRINTF))
SRC_STRING		= $(addprefix $(STRING_PATH),$(SRCS_STRING))

# **************************************************************************** #
# OBJECTS                                                                      #
# **************************************************************************** #

OBJS_CHECK		= $(SRC_CHECK:.c=.o)
OBJS_GNL		= $(SRC_GNL:.c=.o)
OBJS_LIST		= $(SRC_LIST:.c=.o)
OBJS_MEMORY		= $(SRC_MEMORY:.c=.o)
OBJS_PRINTF		= $(SRC_PRINTF:.c=.o)
OBJS_STRING		= $(SRC_STRING:.c=.o)

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

define HEADER
██╗░░░░░██╗██████╗░███████╗████████╗
██║░░░░░██║██╔══██╗██╔════╝╚══██╔══╝
██║░░░░░██║██████╦╝█████╗░░░░░██║░░░
██║░░░░░██║██╔══██╗██╔══╝░░░░░██║░░░
███████╗██║██████╦╝██║░░░░░░░░██║░░░
╚══════╝╚═╝╚═════╝░╚═╝░░░░░░░░╚═╝░░░
endef
export HEADER

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

$(OBJS_GNL): %.o: %.c
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

$(OBJS_PRINTF): %.o: %.c
	@if ! $(GCC) $(CFLAGS) -c -I $(HEAD) $< -o $@ 2> error.txt; then \
		echo "$(RED)$(BOLD)MAKEFILE TERMINATED!$(RESET)"; \
		echo "$(YELLOW)Unable to create the object file for $<$(RESET)"; \
		echo "\n\n$(RED)$(BOLD)ERROR$(RESET)"; \
		sed '$$d' error.txt; \
		echo "\n\n$(YELLOW)EXITING$(RESET)"; \
		exit 1; \
	fi

$(OBJS_STRING): %.o: %.c
	@if ! $(GCC) $(CFLAGS) -c -I $(HEAD) $< -o $@ 2> error.txt; then \
		echo "$(RED)$(BOLD)MAKEFILE TERMINATED!$(RESET)"; \
		echo "$(YELLOW)Unable to create the object file for $<$(RESET)"; \
		echo "\n\n$(RED)$(BOLD)ERROR$(RESET)"; \
		sed '$$d' error.txt; \
		echo "\n\n$(YELLOW)EXITING$(RESET)"; \
		exit 1; \
	fi
	
$(NAME): $(OBJS_CHECK) $(OBJS_GNL) $(OBJS_LIST) $(OBJS_MEMORY) $(OBJS_PRINTF) $(OBJS_STRING)
	@$(AR) $(NAME) $(OBJS_CHECK) $(OBJS_GNL) $(OBJS_LIST) $(OBJS_MEMORY) $(OBJS_PRINTF) $(OBJS_STRING)
	@$(LIB) $(NAME)
	@echo ""
	@echo "${GREEN}$$HEADER"
	@echo "Created: $(words $(OBJS_CHECK) $(OBJS_GNL) $(OBJS_LIST) $(OBJS_MEMORY) $(OBJS_PRINTF) $(OBJS_STRING)) object file(s) for Libft"
	@echo "Created: $(NAME)$(RESET)"

clean:
	@$(RM) $(OBJS_CHECK) $(OBJS_GNL) $(OBJS_LIST) $(OBJS_MEMORY) $(OBJS_PRINTF) $(OBJS_STRING) error.txt
	@$(RM) $(NAME)
	@echo ""
	@echo "$(YELLOW)$$HEADER"
	@echo "Removed: $(words $(OBJS_CHECK) $(OBJS_GNL) $(OBJS_LIST) $(OBJS_MEMORY) $(OBJS_PRINTF) $(OBJS_STRING)) object file(s) from Libft"
	@echo "Removed: $(NAME)$(RESET)"

fclean: clean

re: fclean all

.PHONY: all clean fclean re