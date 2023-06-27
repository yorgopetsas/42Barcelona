/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yorgopetsas <yorgopetsas@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/27 10:14:58 by yzisis-p          #+#    #+#             */
/*   Updated: 2023/06/27 21:56:27 by yorgopetsas      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/fractol.h"

void	my_mlx_pixel_put(t_data *data, int x, int y, int color)
{
	char	*dst;

	dst = data->addr + (y * data->line_length + x * (data->bits_per_pixel / 8));
	*(unsigned int*)dst = color;
}

void	yz_print_bckgrnd(int ww, int hh, t_data img)
{
	int	c;
	int	c2;

	c = 0;
	c2 = 0;
	while (ww > 0)
	{
		while (hh > 0)
		{
			my_mlx_pixel_put(&img, ww, hh, 0x00ff0000);
			hh -= 1;
		}
		ww -= 1;
	}
}

int	main()
{
	void	*mlx;
	void	*mlx_win;
	int		ww;
	int		hh;
	t_data	img;

	ww = 580;
	hh = 390;
	mlx = mlx_init();
	mlx_win = mlx_new_window(mlx, ww, hh, "Fractol by Dubby");
	img.img = mlx_new_image(mlx, ww, hh);
	img.addr = mlx_get_data_addr(img.img, &img.bits_per_pixel, &img.line_length,
								&img.endian);
	mlx_put_image_to_window(mlx, mlx_win, img.img, 0, 0);
	mlx_loop(mlx);
}
