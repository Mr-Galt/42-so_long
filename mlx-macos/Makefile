#
#

RESET		= \033[0m
GREEN		= \033[32m
YELLOW		= \033[33m

NOM=libmlx.a
SRC= mlx_shaders.c mlx_new_window.m mlx_init_loop.m mlx_new_image.m mlx_xpm.c mlx_int_str_to_wordtab.c
SRC+= mlx_png.c mlx_mouse.m
OBJ1=$(SRC:.c=.o)
OBJ=$(OBJ1:.m=.o)
CFLAGS+=-O2

# add to match string put with X11 in size and position
CFLAGS+= -DSTRINGPUTX11

%.o: %.c
	@cc -c -w $(CFLAGS) $?
%.o: %.m
	@cc -c -w $(CFLAGS) $?
all: $(NOM)

$(NOM):	$(OBJ)
	@ar -r -c $(NOM) $(OBJ)
	@ranlib $(NOM)
	@echo ""
	@echo "$(GREEN)███╗░░░███╗██╗░░░░░██╗░░██╗"
	@echo "████╗░████║██║░░░░░╚██╗██╔╝"
	@echo "██╔████╔██║██║░░░░░░╚███╔╝░"
	@echo "██║╚██╔╝██║██║░░░░░░██╔██╗░"
	@echo "██║░╚═╝░██║███████╗██╔╝╚██╗"
	@echo "╚═╝░░░░░╚═╝╚══════╝╚═╝░░╚═╝"
	@echo "Created: $(words $(OBJ)) object file(s) for MLX"
	@echo "Created: $(NOM)$(RESET)"

clean:
	@rm -f $(NOM) $(OBJ) *~
	@rm -f mlx_app
	@echo ""
	@echo "$(YELLOW)███╗░░░███╗██╗░░░░░██╗░░██╗"
	@echo "████╗░████║██║░░░░░╚██╗██╔╝"
	@echo "██╔████╔██║██║░░░░░░╚███╔╝░"
	@echo "██║╚██╔╝██║██║░░░░░░██╔██╗░"
	@echo "██║░╚═╝░██║███████╗██╔╝╚██╗"
	@echo "╚═╝░░░░░╚═╝╚══════╝╚═╝░░╚═╝"
	@echo "Removed: $(words $(OBJ)) object file(s) from MLX"
	@echo "Removed: $(NOM)$(RESET)"

re: clean all
