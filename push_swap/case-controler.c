/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   case-controler.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yorgopetsas <yorgopetsas@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/16 22:59:44 by yorgopetsas       #+#    #+#             */
/*   Updated: 2023/02/19 14:27:03 by yorgopetsas      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "push_swap.h"

void	ft_controler(t_stack **stack, int argc)
{
	if (argc <= 4)
		 case_two(stack);
	if (argc <= 5)
		 case_three(stack);
	if (argc <= 7)
		 case_five(stack);
	if (argc <= 102)
		 case_hun(stack);
	if (argc <= 502)
		 case_fhun(stack);
}