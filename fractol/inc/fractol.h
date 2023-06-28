/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fractol.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yorgopetsas <yorgopetsas@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/27 10:24:58 by yzisis-p          #+#    #+#             */
/*   Updated: 2023/06/28 11:17:32 by yorgopetsas      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// LIBRARY FOR READ
#include <unistd.h>

// MATH LIBRARY
#include <math.h>

// MLX LIBRARY
#include "../inc/mlx/mlx.h"

// LIBRARY FOR MALLOC() AND ARGUMENTS PARSEMENT
#include <stdlib.h>

// LIBRARY FOR PRINTF()
#include <stdio.h>

// MLX LIBRARY 
#include <mlx/mlx.h>

// IMAGE STRUCT
typedef struct s_data {
	void	*img;
	char	*addr;
	int		bits_per_pixel;
	int		line_length;
	int		endian;
}				t_data;

typedef struct	s_mlx {
	void	*mlx;
	void	*win;
}				t_mlx;

// TOOLS
// int	yz_close_win(void	*mlx, void	*wdw);
void 	yz_draw_half_circle(int lines, t_data img);
void	yz_draw_crl(int radius, t_data img);
void	my_mlx_pixel_put(t_data *data, int x, int y, int color);
// TEMP
