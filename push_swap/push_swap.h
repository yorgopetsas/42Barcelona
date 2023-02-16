/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yorgopetsas <yorgopetsas@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/07 15:36:39 by yorgopetsas       #+#    #+#             */
/*   Updated: 2023/02/16 22:42:56 by yorgopetsas      ###   ########.fr       */
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
	//int	size; 
}	t_stack;

#endif

ssize_t	startup(char **argv, int idx, int argc);

size_t  fill_stack(t_stack **stack_a, int idx, char **input, int argc);
size_t  fill_stack_b(t_stack **stack_a, int idx, char **input, int argc);
// t_stack	fill_stack(t_stack *stack_a, int idx, char **argv);
t_stack *stack_mem(t_stack *stack);

// Stack Functions
size_t	add_at_end(t_stack **stack, t_stack *new_item);
t_stack	*create_cont(int num);
void	put_index(t_stack **stack);

// OPERATIONS
void	ft_sw(t_stack **stack);
// void	ft_rrab(t_stack **stack);
void	ft_rrab(t_stack **stack, t_stack **stack_b);
void	ft_rab(t_stack **stack);

void	ft_pab(t_stack **stack_b, t_stack **stack_a);

//
size_t	ft_error_free(t_stack **stack_a, t_stack **stack_b);
size_t	ft_error(void);
//
int	ft_atoi(const char *nptr);
// ssize_t	ft_itoa(int n);
//
void	show_stack(t_stack **stack_a, t_stack **stack_b);