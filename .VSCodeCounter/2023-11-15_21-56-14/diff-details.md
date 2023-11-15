# Diff Details

Date : 2023-11-15 21:56:14

Directory /Users/mheinke/Desktop/so_long/mlx-macos

Total : 49 files,  5301 codes, -135 comments, 284 blanks, all 5450 lines

[Summary](results.md) / [Details](details.md) / [Diff Summary](diff.md) / Diff Details

## Files
| filename | language | code | comment | blank | total |
| :--- | :--- | ---: | ---: | ---: | ---: |
| [mlx-macos/Makefile](/mlx-macos/Makefile) | Makefile | 40 | 3 | 8 | 51 |
| [mlx-macos/font.c](/mlx-macos/font.c) | C | 3,522 | 1 | 3 | 3,526 |
| [mlx-macos/mlx.h](/mlx-macos/mlx.h) | C++ | 36 | 83 | 31 | 150 |
| [mlx-macos/mlx_init_loop.m](/mlx-macos/mlx_init_loop.m) | Objective-C | 148 | 5 | 40 | 193 |
| [mlx-macos/mlx_int.h](/mlx-macos/mlx_int.h) | C++ | 75 | 9 | 19 | 103 |
| [mlx-macos/mlx_int_str_to_wordtab.c](/mlx-macos/mlx_int_str_to_wordtab.c) | C | 93 | 3 | 12 | 108 |
| [mlx-macos/mlx_mouse.m](/mlx-macos/mlx_mouse.m) | Objective-C | 40 | 3 | 10 | 53 |
| [mlx-macos/mlx_new_image.m](/mlx-macos/mlx_new_image.m) | Objective-C | 149 | 10 | 40 | 199 |
| [mlx-macos/mlx_new_window.h](/mlx-macos/mlx_new_window.h) | C++ | 43 | 7 | 8 | 58 |
| [mlx-macos/mlx_new_window.m](/mlx-macos/mlx_new_window.m) | Objective-C | 539 | 78 | 150 | 767 |
| [mlx-macos/mlx_opengl.h](/mlx-macos/mlx_opengl.h) | C++ | 3 | 12 | 7 | 22 |
| [mlx-macos/mlx_opengl.m](/mlx-macos/mlx_opengl.m) | Objective-C | 39 | 1 | 18 | 58 |
| [mlx-macos/mlx_png.c](/mlx-macos/mlx_png.c) | C | 363 | 8 | 48 | 419 |
| [mlx-macos/mlx_png.h](/mlx-macos/mlx_png.h) | C++ | 1 | 0 | 4 | 5 |
| [mlx-macos/mlx_rgb.c](/mlx-macos/mlx_rgb.c) | C | 757 | 4 | 3 | 764 |
| [mlx-macos/mlx_shaders.c](/mlx-macos/mlx_shaders.c) | C | 200 | 1 | 40 | 241 |
| [mlx-macos/mlx_xpm.c](/mlx-macos/mlx_xpm.c) | C | 241 | 55 | 43 | 339 |
| [sources/cleanup/destroy_creditscreen.c](/sources/cleanup/destroy_creditscreen.c) | C | -10 | -11 | -5 | -26 |
| [sources/cleanup/destroy_loadingscreen.c](/sources/cleanup/destroy_loadingscreen.c) | C | -31 | -11 | -5 | -47 |
| [sources/cleanup/destroy_optionscreen.c](/sources/cleanup/destroy_optionscreen.c) | C | -31 | -11 | -6 | -48 |
| [sources/cleanup/destroy_player.c](/sources/cleanup/destroy_player.c) | C | -5 | -11 | -3 | -19 |
| [sources/cleanup/destroy_startscreen.c](/sources/cleanup/destroy_startscreen.c) | C | -31 | -11 | -5 | -47 |
| [sources/cleanup/free_structs.c](/sources/cleanup/free_structs.c) | C | -8 | -11 | -3 | -22 |
| [sources/init/init_creditscreen.c](/sources/init/init_creditscreen.c) | C | -43 | -11 | -10 | -64 |
| [sources/init/init_game.c](/sources/init/init_game.c) | C | -26 | -11 | -5 | -42 |
| [sources/init/init_loadingscreen.c](/sources/init/init_loadingscreen.c) | C | -43 | -11 | -9 | -63 |
| [sources/init/init_optionscreen.c](/sources/init/init_optionscreen.c) | C | -60 | -11 | -11 | -82 |
| [sources/init/init_optionscreen_buttons.c](/sources/init/init_optionscreen_buttons.c) | C | -36 | -11 | -7 | -54 |
| [sources/init/init_player.c](/sources/init/init_player.c) | C | -14 | -11 | -3 | -28 |
| [sources/init/init_startscreen.c](/sources/init/init_startscreen.c) | C | -44 | -11 | -10 | -65 |
| [sources/init/init_startscreen_buttons.c](/sources/init/init_startscreen_buttons.c) | C | -36 | -11 | -5 | -52 |
| [sources/init/init_viewport.c](/sources/init/init_viewport.c) | C | -5 | -11 | -3 | -19 |
| [sources/loadingscreen/loadingscreen.c](/sources/loadingscreen/loadingscreen.c) | C | -22 | -11 | -6 | -39 |
| [sources/main.c](/sources/main.c) | C | -62 | -18 | -8 | -88 |
| [sources/menu/menu_buttons.c](/sources/menu/menu_buttons.c) | C | -47 | -11 | -5 | -63 |
| [sources/menu/menu_mouse_click.c](/sources/menu/menu_mouse_click.c) | C | -47 | -11 | -5 | -63 |
| [sources/menu/menu_mouse_hover.c](/sources/menu/menu_mouse_hover.c) | C | -44 | -11 | -6 | -61 |
| [sources/menu/menu_start_screen.c](/sources/menu/menu_start_screen.c) | C | -88 | -11 | -15 | -114 |
| [sources/menu/startscreen.c](/sources/menu/startscreen.c) | C | -50 | -11 | -5 | -66 |
| [sources/player/player_movement.c](/sources/player/player_movement.c) | C | -13 | -11 | -3 | -27 |
| [sources/user_input/input_hooks.c](/sources/user_input/input_hooks.c) | C | -16 | -11 | -4 | -31 |
| [sources/user_input/key_input.c](/sources/user_input/key_input.c) | C | -26 | -11 | -4 | -41 |
| [sources/user_input/mouse_input.c](/sources/user_input/mouse_input.c) | C | -13 | -11 | -3 | -27 |
| [sources/utils/delta_time.c](/sources/utils/delta_time.c) | C | -29 | -11 | -7 | -47 |
| [sources/utils/error_handling.c](/sources/utils/error_handling.c) | C | -6 | -11 | -4 | -21 |
| [sources/utils/musicplayer.c](/sources/utils/musicplayer.c) | C | -41 | -11 | -10 | -62 |
| [sources/utils/render.c](/sources/utils/render.c) | C | -8 | -70 | -16 | -94 |
| [sources/utils/statemachine.c](/sources/utils/statemachine.c) | C | -13 | -11 | -4 | -28 |
| [sources/utils/window_changer.c](/sources/utils/window_changer.c) | C | -40 | -11 | -5 | -56 |

[Summary](results.md) / [Details](details.md) / [Diff Summary](diff.md) / Diff Details