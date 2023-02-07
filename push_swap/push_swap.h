/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yorgopetsas <yorgopetsas@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/07 15:36:39 by yorgopetsas       #+#    #+#             */
/*   Updated: 2023/02/07 23:36:55 by yorgopetsas      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include <stdio.h>
// TMP
#include <unistd.h>
#include <stdlib.h>

typedef struct s_stack
{
	int	num;
	size_t	index;
	struct s_stack	*next;
}	t_stack;

#endif

ssize_t	startup(char **argv, int idx);

t_stack	fill_stack(t_stack *stack_a, int idx, char **argv);
t_stack *stack_mem(t_stack *stack);

//
size_t	ft_error_free(t_stack **stack_a, t_stack **stack_b);
size_t	ft_error(void);
