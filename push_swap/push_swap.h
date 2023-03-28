/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yzisis-p <yzisis-p@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/07 15:36:39 by yorgopetsas       #+#    #+#             */
/*   Updated: 2023/03/28 15:22:24 by yzisis-p         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include <stdio.h>
// TMP
# include <unistd.h>
# include <stdlib.h>
# include <string.h>

typedef struct s_stack
{
	int	num;
	size_t			index;
	struct s_stack	*next;
}	t_stack;

// int	G;

ssize_t	startup(char **argv, int idx, int argc);

// STACK FUNCTIONS
size_t	add_at_end(t_stack **stack, t_stack *new_item);
size_t	fill_stack(t_stack **stack_a, int idx, char **input, int argc);
size_t	fill_stack_b(t_stack **stack_a, int idx, char **input, int argc);
t_stack	*stack_mem(t_stack *stack);
t_stack	*create_cont(int num);
void	put_index(t_stack **stack);

// CASE CONTROLER
void	case_controler(t_stack **stack_a, t_stack **stack_b, int argc);

// CASES
void	case_two(t_stack **stack, t_stack **stack_b);
void	case_three(t_stack **stack, t_stack **stack_b);
void	case_four(t_stack **stack_a, t_stack **stack_b);
void	case_five(t_stack **stack_a, t_stack **stack_b);
void	case_six(t_stack **stack_a, t_stack **stack_b);
void	case_sd(t_stack **stack_a, t_stack **stack_b);
void	case_hun(t_stack **stack_a, t_stack **stack_b);
void	case_fhun(t_stack **stack_a, t_stack **stack_b);

// CASE THREE SCENARIOS
int		scenario_1(t_stack **stack, t_stack **stack_b);
int		scenario_2(t_stack **stack, t_stack **stack_b);
int		scenario_3(t_stack **stack, t_stack **stack_b);
int		scenario_4(t_stack **stack, t_stack **stack_b);
int		scenario_5(t_stack **stack, t_stack **stack_b);

// OPERATIONS
void	ft_sw(t_stack **stack, t_stack **stack_b, int state);
void	ft_rrab(t_stack **stack, t_stack **stack_b, int state);
void	ft_rab(t_stack **stack, t_stack **stack_b, int state);
void	ft_pab(t_stack **stack_b, t_stack **stack_a, int state);

// ERROR HANDLING
size_t	ft_error(void);
size_t	ft_error_free(t_stack **stack_a, t_stack **stack_b);
int		check_input(int argc, char **argv);
void	ft_check_doubles(char **argv);
void	char_is_digit(char **input, int argc);

// ERROR HANDLING PAUSED
int		ft_check_digits(char **argv);

// LIBFT
int		ft_atoi(const char *nptr);
// ssize_t	ft_itoa(int n);

// HELPER FUNCTINOS
void	show_stack(t_stack **stack_a, t_stack **stack_b);
void	ft_free_stack(t_stack **stack);

// UTILS
int		ft_strlen(char *str);
int		ft_strncmp(char *s1, char *s2);
int		struct_lent(t_stack **stack);
int		is_ordered(t_stack **stack);
int		is_biggiest(t_stack **stack);

// UTILS2
void	yz_check_top(t_stack **stack_a, t_stack **stack_b);

#endif
