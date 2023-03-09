/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   case-controler.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yorgopetsas <yorgopetsas@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/16 22:59:44 by yorgopetsas       #+#    #+#             */
/*   Updated: 2023/03/09 19:03:39 by yorgopetsas      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "push_swap.h"

void	case_controler(t_stack **stack_a, t_stack **stack_b, int argc)
{
	if (argc == 3)
		case_two(stack_a, stack_b);
	else if (argc == 4)
		case_three(stack_a, stack_b);
	else if (argc == 5)
		case_four(stack_a, stack_b);
	else if (argc == 6)
		case_five(stack_a, stack_b);
	else if (argc > 6 && argc <= 11)
		case_sd(stack_a, stack_b);
	else if (argc > 11 && argc <= 50)
		case_six(stack_a, stack_b);
	else if (argc > 50 && argc <= 101)
		case_hun(stack_a, stack_b);
	else if (argc >= 102 && argc <= 501)
		case_fhun(stack_a, stack_b);
	else
		write(2, "Error\n", 6);
}
