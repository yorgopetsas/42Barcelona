/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yorgopetsas <yorgopetsas@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/27 10:14:58 by yzisis-p          #+#    #+#             */
/*   Updated: 2023/07/05 12:53:32 by yorgopetsas      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/fractol.h"

// Function to print the Background
void	yz_print_bckgrnd(t_data img)
{
	int	c;
	int	c2;

	c = 0;
	c2 = 0;
	while (c2 < HH)
	{
		while (c < WW)
		{
			my_mlx_pixel_put(&img, c, c2, 0x00800020);
			c += 1;
		}
		c = 0;
		c2 += 1;
	}
}

int	yz_check_input(int argc, char *set)
{
	if (argc < 2)
	{
		printf("Please select a set. Availabel options: 'm' for Mandelbrot and 'j' for Julia.\n");
		return (0);
	}
	if (set[0] == 'j' || set[0] == 'm')
		return (1);
	else
		return (0);
}

int	main(int argc, char **argv)
{
	char	*mode;
	t_data	img;
	t_mlx	mx;

	mode = argv[1];

	printf("%d\n", argc);
	printf("%s\n", mode);
	yz_check_input(argc, mode);

	mx.mlx = mlx_init();
	mx.win = mlx_new_window(mx.mlx, WW, HH, "Fractol by Dubby");
	img.img = mlx_new_image(mx.mlx, WW, HH);
	img.addr = mlx_get_data_addr(img.img, &img.bits_per_pixel, &img.line_length,
								&img.endian);
	yz_print_bckgrnd(img);
	yz_print_mandelbrat(img);
	
	mlx_put_image_to_window(mx.mlx, mx.win, img.img, 0, 0);
	yz_print_menu(&mx);
	mlx_key_hook(mx.win, yz_key_hook, &mx);
	mlx_mouse_hook(mx.win, yz_mouse_hook, &mx);
	mlx_loop(mx.mlx);
}

// mlx_hook(mx.win, 2, 1L << 0, closez, &mx);
