/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fractals.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yorgopetsas <yorgopetsas@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/27 10:18:58 by yzisis-p          #+#    #+#             */
/*   Updated: 2023/07/05 12:53:30 by yorgopetsas      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/fractol.h"
#include <stdio.h>

// Function to calculate the Mandelbrot fractal for a given pixel

void	yz_print_mandelbrat(t_data img)
{
	int			isinside;
	int			color;
	double		minre;
	double		maxre;
	double		minim;
	double		maxim;
	double		re_factor;
	double		im_factor;
	double		c_re;
	double 		c_im;
	double		Z_re;
	double 		Z_re2;
	double 		Z_im;
	double 		Z_im2;
	unsigned	maxiterations = 30;

	color = 256;
	minre = -0.5;
	maxre = 0.00000088;
	minim = -1.2;
	maxim = minim + (maxre - minre) * HH / WW;
	re_factor = (maxre - minre) / (WW - 1);
	im_factor = (maxim - minim) / (HH - 1);

	for (unsigned y = 0; y < HH; ++y)
	{
		c_im = maxim - y * im_factor;
		for (unsigned x = 0; x < WW; ++x)
		{
			c_re = minre + x * re_factor;
			Z_re = c_re, Z_im = c_im;
			isinside = 1;
			for (unsigned n = 0; n < maxiterations; ++n)
			{
				Z_re2 = Z_re * Z_re;
				Z_im2 = Z_im * Z_im;
				if (Z_re2 + Z_im2 > 4)
				{
					isinside = 0;
					break ;
				}
				Z_im = 2 * Z_re * Z_im + c_im;
				Z_re = Z_re2 - Z_im2 + c_re;
			}
			if (isinside)
				my_mlx_pixel_put(&img, x, y, 0x00000000);
			else
				my_mlx_pixel_put(&img, x, y, 0x000ff000);
		}
	}
}