/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   case-controler.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yorgopetsas <yorgopetsas@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/16 22:59:44 by yorgopetsas       #+#    #+#             */
/*   Updated: 2023/02/19 17:17:23 by yorgopetsas      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "push_swap.h"

void	case_controler(t_stack **stack, int argc)
{
	if (argc <= 4)
		 case_two(stack);
	else if (argc <= 5)
		 case_three(stack);
	else if (argc <= 7)
		 case_five(stack);
	else if (argc <= 102)
		 case_hun(stack);
	else if (argc <= 502)
		 case_fhun(stack);
}