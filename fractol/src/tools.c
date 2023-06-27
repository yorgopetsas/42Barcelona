/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   tools.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yorgopetsas <yorgopetsas@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/27 16:14:58 by yzisis-p          #+#    #+#             */
/*   Updated: 2023/06/27 21:09:35 by yorgopetsas      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/fractol.h"
#include <stdio.h>

// int	yz_close_win()
// {
// 	printf("d\n");

// 	// mlx_destroy_image(mlx, mlx.img);
// 	// mlx_destroy_window(mlx, wdw);
// 	// exit(0);
// 	return(1);
// }

void	yz_draw_crl(int radius, t_data img)
{
	int x = 0;
	int y = radius;
	int decision = 3 - 2 * radius;
	uint_fast32_t l;

	l = 0x00ff01ff;
	while (x <= y)
	{
		my_mlx_pixel_put(&img, (x + 200), (y + 200), l);
		my_mlx_pixel_put(&img, (y + 200), (x + 200), l);
		my_mlx_pixel_put(&img, (-y + 200), (x + 200), l);
		my_mlx_pixel_put(&img, (-x + 200), (y + 200), l);
		my_mlx_pixel_put(&img, (-x + 200), (-y + 200), l);
		my_mlx_pixel_put(&img, (-y + 200), (-x + 200), l);
		my_mlx_pixel_put(&img, (y + 200), (-x + 200), l);
		my_mlx_pixel_put(&img, (x + 200), (-y + 200), l);
		if (decision <= 0)
            decision += (4 * x) + 6;
		else
		{
			decision += (4 * (x - y)) + 10;
            y--;
		}
		x++;
	}
}

void	yz_draw_trg(int lines, t_data img)
{
	int				width;
	int				c;
	int				c_tmp;
	int				base;
	uint_fast32_t	l;

	l = 0x00ff01ff;
	base = 220;
	c = 0;
	width = 0;

	while (c < lines)
	{
		c_tmp = c;
		while (width > 0)
		{
			my_mlx_pixel_put(&img, ((base - (c / 2)) + width), (9 + c_tmp), l);
			width -= 1;
		}
		width = c_tmp;
		c += 1;
	}
}

void	yz_draw_sqr(int ll, t_data img)
{
	int		hh;
	int		tmp;

	tmp = ll;
	hh = tmp;
	while (ll > 0)
	{
		while (hh > 0)
		{
			my_mlx_pixel_put(&img, (540 + hh), (390 + ll), 0x00ff01ff);
			hh -= 1;
		}
		hh = tmp;
		ll -= 1;
	}
}