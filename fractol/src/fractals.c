/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fractals.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yorgopetsas <yorgopetsas@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/27 10:18:58 by yzisis-p          #+#    #+#             */
/*   Updated: 2023/07/05 18:14:41 by yorgopetsas      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/fractol.h"
#include <stdio.h>

// Function to calculate the Mandelbrot fractal for a given pixel

void	yz_init_mandelbrot_struct(t_fractol *fr_m)
{
	fr_m->maxiterations = 60;
	fr_m->color = 256;
	fr_m->minre = -1.5;
	fr_m->maxre = 1.5;
	fr_m->minim = -1.0;
	fr_m->maxim = 0;
	fr_m->maxim = fr_m->minim + (fr_m->maxre - fr_m->minre) * HH / WW;
	fr_m->re_factor = (fr_m->maxre - fr_m->minre) / (WW - 1);
	fr_m->im_factor = (fr_m->maxim - fr_m->minim) / (HH - 1);
	fr_m->isinside = 1;
	fr_m->c_re = 0.0;
	fr_m->c_im = 0.0;
	fr_m->Z_re = 0.0;
	fr_m->Z_re2 = 0.0;
	fr_m->Z_im = 0.0;
	fr_m->Z_im2 = 0.0;
}

void	yz_mandel_calc(t_fractol *fr_m, t_mlx *mx)
{
	for (unsigned y = 0; y < HH; ++y)
	{
		fr_m->c_im = fr_m->maxim - y * fr_m->im_factor;
		for (unsigned x = 0; x < WW; ++x)
		{
			fr_m->c_re = fr_m->minre + x * fr_m->re_factor;
			fr_m->Z_re = fr_m->c_re, fr_m->Z_im = fr_m->c_im;
			fr_m->isinside = 1;
			for (unsigned n = 0; n < fr_m->maxiterations; ++n)
			{
				fr_m->Z_re2 = fr_m->Z_re * fr_m->Z_re; fr_m->Z_im2 = fr_m->Z_im * fr_m->Z_im;
				if (fr_m->Z_re2 + fr_m->Z_im2 > 4)
				{
					fr_m->isinside = 0;
					break ;
				}
				fr_m->Z_im = 2 * fr_m->Z_re * fr_m->Z_im + fr_m->c_im;
				fr_m->Z_re = fr_m->Z_re2 - fr_m->Z_im2 + fr_m->c_re;
			}
			if (fr_m->isinside)
				my_mlx_pixel_put(mx, x, y, 0x00000000);
			else
				my_mlx_pixel_put(mx, x, y, 0x00547BE8);
		}
	}
}

void	yz_print_mandelbrat(t_mlx *mx)
{
	t_fractol	fr_m;

	yz_init_mandelbrot_struct(&fr_m);
	yz_mandel_calc(&fr_m, mx);
}
