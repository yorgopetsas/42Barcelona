/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yorgopetsas <yorgopetsas@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/27 10:14:58 by yzisis-p          #+#    #+#             */
/*   Updated: 2023/06/28 12:08:23 by yorgopetsas      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/fractol.h"

// Function to print the Background
void	yz_print_bckgrnd(int ww, int hh, t_data img)
{
	int	c;
	int	c2;

	c = 0;
	c2 = 0;
	while (c2 < hh)
	{
		while (c < ww)
		{
			my_mlx_pixel_put(&img, c, c2, 0x00ff0f00);
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
		printf("Please select a set.\n");
		return (0);
	}
	if (set[0] == 'j' || set[0] == 'm')
		return (1);
	else
		return (0);
}

int	yz_key_hook(int keycode, t_mlx *mx)
{
	printf("%d\n", keycode);
	if (keycode == 53)
	{
		printf("ESC pressed. Closing Window.\n");
		mlx_destroy_image(mx->mlx, mx->win);
		mlx_destroy_window(mx->mlx, mx->win);
		// exit (0);
	}
	return (0);
}

int	yz_mouse_hook(int keycode, t_mlx *mx)
{
	printf("%d\n", keycode);
	if (keycode == 53)
	{
		printf("ESC pressed. Closing Window.\n");
		mlx_destroy_image(mx->mlx, mx->win);
		mlx_destroy_window(mx->mlx, mx->win);
	}
	return (0);
}
int	main(int argc, char **argv)
{
	int		ww;
	int		hh;
	char	*mode;
	t_data	img;
	t_mlx	mx;

	ww = 580;
	hh = 390;
	mode = argv[1];

	printf("%d\n", argc);
	printf("%s\n", mode);
	yz_check_input(argc, mode);

	mx.mlx = mlx_init();
	mx.win = mlx_new_window(mx.mlx, ww, hh, "Fractol by Dubby");
	img.img = mlx_new_image(mx.mlx, ww, hh);
	img.addr = mlx_get_data_addr(img.img, &img.bits_per_pixel, &img.line_length,
								&img.endian);
	yz_print_bckgrnd(ww, hh, img);
	mlx_put_image_to_window(mx.mlx, mx.win, img.img, 0, 0);
	mlx_key_hook(mx.win, yz_key_hook, &mx);
	mlx_mouse_hook(mx.win, yz_mouse_hook, &mx);
	mlx_loop(mx.mlx);
}

// yz_draw_crl(50, img);
// yz_print_bckgrnd(ww, hh, img);
// mlx_hook(mx.win, 2, 1L << 0, closez, &mx);
