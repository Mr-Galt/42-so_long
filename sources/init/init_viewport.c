/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   init_viewport.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mheinke <mheinke@student.42abudhabi.ae>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/31 09:52:50 by mheinke           #+#    #+#             */
/*   Updated: 2023/11/01 12:55:25 by mheinke          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/so_long.h"

void	init_viewport(t_game *game)
{
	t_camera camera = {0, 0, 320, 240};
	void* camera_buffer;
	int camera_bpp; // bits-per-pixel for the camera buffer
	int camera_size_line; // size_line for the camera buffer
	int camera_endian; // endian for the camera buffer

	camera_buffer = mlx_new_image(mlx_ptr, camera.width, camera.height);
	char* camera_buffer_addr = mlx_get_data_addr(camera_buffer, &camera_bpp, &camera_size_line, &camera_endian);
}
