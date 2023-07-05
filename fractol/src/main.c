/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yorgopetsas <yorgopetsas@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/27 10:14:58 by yzisis-p          #+#    #+#             */
/*   Updated: 2023/07/05 18:15:09 by yorgopetsas      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/fractol.h"

// Function to print the Background
void	yz_print_bckgrnd(t_mlx *mx)
{
	int	c;
	int	c2;

	c = 0;
	c2 = 0;
	while (c2 < HH)
	{
		while (c < WW)
		{
			my_mlx_pixel_put(mx, c, c2, 0x00800020);
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
		printf("Please select a set: 'm' for Mandelbrot and 'j' for Julia.\n");
		return (0);
	}
	if (set[0] == 'j' || set[0] == 'm')
		return (1);
	else
		return (0);
}

void	yz_mx_init(t_mlx *mx)
{
	mx->mlx = mlx_init();
	mx->win = mlx_new_window(mx->mlx, WW, HH, "Fractol by Dubby");
	mx->img = mlx_new_image(mx->mlx, WW, HH);
	mx->addr = mlx_get_data_addr(mx->img, &mx->bits_per_pixel, &mx->line_length,
								&mx->endian);
}




int	main(int argc, char **argv)
{
	char	*mode;
	t_mlx	mx;

	mode = argv[1];

	// TEMP
	// printf("%d\n", argc);
	// printf("%s\n", mode);

	yz_check_input(argc, mode);
	yz_mx_init(&mx);

	yz_print_bckgrnd(&mx);
	yz_print_mandelbrat(&mx);

	mlx_put_image_to_window(mx.mlx, mx.win, mx.img, 0, 0);

	mlx_key_hook(mx.win, yz_key_hook, &mx);
	mlx_mouse_hook(mx.win, yz_mouse_hook, &mx);

	yz_print_menu(&mx);

	mlx_loop(mx.mlx);
}
