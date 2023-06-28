/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   tools.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yorgopetsas <yorgopetsas@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/27 16:14:58 by yzisis-p          #+#    #+#             */
/*   Updated: 2023/06/28 12:07:28 by yorgopetsas      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/fractol.h"
#include <stdio.h>

// My Put Pixel Function
void	my_mlx_pixel_put(t_data *data, int x, int y, int color)
{
	char	*dst;

	dst = data->addr + (y * data->line_length + x * (data->bits_per_pixel / 8));
	*(unsigned int*)dst = color;
}

// Draw a Circle
void	yz_draw_crl(int radius, t_data img)
{
	int				x;
	int				y;
	int				decision;
	uint_fast32_t	l;

	decision = 3 - 2 * radius;
	x = 0;
	y = radius;
	l = 0x00ff09ff;
	while (x <= y)
	{
		my_mlx_pixel_put(&img, (x + 200), (y + 200), l);
		// my_mlx_pixel_put(&img, (y + 200), (x + 200), l);
		my_mlx_pixel_put(&img, (-y + 200), (x + 200), l);
		// my_mlx_pixel_put(&img, (-x + 200), (y + 200), l);
		my_mlx_pixel_put(&img, (-x + 200), (-y + 200), l);
		// my_mlx_pixel_put(&img, (-y + 200), (-x + 200), l);
		my_mlx_pixel_put(&img, (y + 200), (-x + 200), l);
		// my_mlx_pixel_put(&img, (x + 200), (-y + 200), l);
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

// Draw a Triangle
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

// Draw a Square
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

