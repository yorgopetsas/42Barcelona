/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   operations.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yorgopetsas <yorgopetsas@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/07 12:02:24 by yorgopetsas       #+#    #+#             */
/*   Updated: 2023/02/07 23:51:24 by yorgopetsas      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


// sa (swap a): Swap the first 2 elements at the top of stack a.
// Do nothing if there is only one or no elements.

// void	ft_sa(t_stack **stack)
// {
// 	t_stack *tmp;
// }


// sb (swap b): Swap the first 2 elements at the top of stack b.
// Do nothing if there is only one or no elements.

int	sb();

// ss : sa and sb at the same time.

int ss();

// pa (push a): Take the first element at the top of b and put it at the top of a.
// Do nothing if b is empty.

int	pa();


// pb (push b): Take the first element at the top of a and put it at the top of b.
// Do nothing if a is empty.

int	pb();


// ra (rotate a): Shift up all elements of stack a by 1.
// The first element becomes the last one.

int	ra();


// rb (rotate b): Shift up all elements of stack b by 1.
// The first element becomes the last one.

int	rb();

// rr : ra and rb at the same time.
int	rr();

// rra (reverse rotate a): Shift down all elements of stack a by 1.
// The last element becomes the first one.

int	rra();


// rrb (reverse rotate b): Shift down all elements of stack b by 1.
// The last element becomes the first one.

int	rrb();


// rrr : rra and rrb at the same time.

int	rrr();