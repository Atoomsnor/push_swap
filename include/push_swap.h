/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: roversch <roversch@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/27 16:17:20 by roversch          #+#    #+#             */
/*   Updated: 2025/02/06 11:53:39 by roversch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H
# include <stdlib.h>

typedef struct stack
{
	int	*array;
	int	size;
	int	index;
}	t_stack;

// maybe make enum for (i < stack_a->index) when its in a a/b func

int		main(int argc, char **argv);
void	print_stack(t_stack *stack_a, t_stack *stack_b);

int		find_min_index(t_stack *stack_a);
void	solve2(t_stack *stack_a);
void	solve3(t_stack *stack_a);
void	solve4(t_stack *stack_a, t_stack *stack_b);
void	solve5(t_stack *stack_a, t_stack *stack_b);

void	radix_sort(t_stack *stack_a, t_stack *stack_b, int size);

void	swap(t_stack *stack, const char *ins);
void	sa(t_stack *stack_a);
void	sb(t_stack *stack_b);
void	ss(t_stack *stack_a, t_stack *stack_b);
void	push(t_stack *from_stack, t_stack *to_stack, const char *ins);
void	pa(t_stack *stack_a, t_stack *stack_b);
void	pb(t_stack *stack_a, t_stack *stack_b);
void	rotate(t_stack *stack, const char *instruct);
void	ra(t_stack *stack_a);
void	rb(t_stack *stack_b);
void	rr(t_stack *stack_a, t_stack *stack_b);
void	reverse_rotate(t_stack *stack, const char *instruct);
void	rra(t_stack *stack_a);
void	rrb(t_stack *stack_b);
void	rrr(t_stack *stack_a, t_stack *stack_b);
#endif
