/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   render.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mheinke <mheinke@student.42abudhabi.ae>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/20 09:37:33 by mheinke           #+#    #+#             */
/*   Updated: 2023/11/10 15:00:24 by mheinke          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/so_long.h"

void	render_img(int x, int y, void *sprite, t_game *game)
{
	if (x > SCREEN_WIDTH || y > SCREEN_HEIGHT)
		return;
	mlx_put_image_to_window(game->mlx, game->win,
		sprite, x, y);
}

// typedef uint32_t Pixel;

// typedef struct {
//     uint32_t width, height;
//     Pixel **pixels;
// } Image;


// void makeBigger(Image *img, int scale)
// {
//     uint32_t i = 0, j = 0;
//     Image *tmp = (Image*)malloc(sizeof(Image));
//     tmp->height = img->height * scale;
//     tmp->width = img->width * scale;

//     tmp->pixels = (Pixel**)malloc(sizeof(Pixel*) * tmp->height);
//     for (i = 0; i < tmp->height; i++) {
//         tmp->pixels[i] = (Pixel*)malloc(sizeof(Pixel) * tmp->width);
//         for (j = 0; j < tmp->width; j++) {
//             tmp->pixels[i][j] = img->pixels[i / scale][j / scale];
//         }
//     }

//     for (i = 0; i < img->height; i++)
//         free(img->pixels[i]);
//     free(img->pixels);

//     img->width = tmp->width;
//     img->height = tmp->height;
//     img->pixels = tmp->pixels;
//     free(tmp);
// }


// void printImage(Image *img)
// {
//     printf("Width: %d, Height: %d\n", img->width, img->height);
//     for (uint32_t i = 0; i < img->height; i++) {
//         for (uint32_t j = 0; j < img->width; j++)
//             printf("%3d", img->pixels[i][j]);
//         printf("\n");
//     }
//     printf("\n");
// }


// int usage()
// {
//     uint32_t i = 0, j = 0, k = 1;
//     Image img;
//     // Initialize the image
//     img.height = 2;
//     img.width = 3;
//     img.pixels = (Pixel**)malloc(sizeof(Pixel*) * img.height);
//     for (i = 0; i < img.height; i++) {
//         img.pixels[i] = (Pixel*)malloc(sizeof(Pixel) * img.width);
//         for (j = 0; j < img.width; j++)
//             img.pixels[i][j] = k++;
//     }

//     printImage(&img);
//     makeBigger(&img, 2);
//     printImage(&img);

//     // Destroy the image
//     for (i = 0; i < img.height; i++)
//         free(img.pixels[i]);
//     free(img.pixels);

//     printf("\nDone.\n");
//     return 0;
// }