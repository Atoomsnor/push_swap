/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   instructions.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: roversch <roversch@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/20 13:06:54 by roversch          #+#    #+#             */
/*   Updated: 2025/01/28 19:54:13 by roversch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"
#include <stdio.h>

void	sa(t_stack *stack_a)
{
	int	tmp;

	printf("sa\n");
	tmp = stack_a->array[stack_a->index];
	stack_a->array[stack_a->index] = stack_a->array[stack_a->index - 1];
	stack_a->array[stack_a->index - 1] = tmp;
}

void	sb(t_stack *stack_b)
{
	int	tmp;

	printf("sb\n");
	tmp = stack_b->array[stack_b->index];
	stack_b->array[stack_b->index] = stack_b->array[stack_b->index - 1];
	stack_b->array[stack_b->index - 1] = tmp;
}

void	ss(t_stack *stack_a, t_stack *stack_b)
{
	int	tmp_a;
	int	tmp_b;

	printf("ss\n");
	tmp_a = stack_a->array[stack_a->index];
	stack_a->array[stack_a->index] = stack_a->array[stack_a->index - 1];
	stack_a->array[stack_a->index - 1] = tmp_a;
	tmp_b = stack_b->array[stack_b->index];
	stack_b->array[stack_b->index] = stack_b->array[stack_b->index - 1];
	stack_b->array[stack_b->index - 1] = tmp_b;
}

void	pa(t_stack *stack_a, t_stack *stack_b)
{
	printf("pa\n");
	stack_a->index++;
	stack_a->array[stack_a->index] = stack_b->array[stack_b->index];
	stack_b->index--;
}

void	pb(t_stack *stack_a, t_stack *stack_b)
{
	printf("pb\n");
	stack_b->index++;
	stack_b->array[stack_b->index] = stack_a->array[stack_a->index];
	stack_a->index--;
}

// int	ra(rotate a)	//Shifts all the elements of the stack a up by one position. The first element becomes the last.

// int	rb(rotate b)	//Shifts all the elements of the stack a up by one position. The first element becomes the last.

// int	rr(rotate a+b)	//ra and rb at the same time.

// int	rra(reverse rotate a)	//Shifts all elements of stack a down one position. The last element becomes the first.

// int	rrb(reverse rotate b)	//Shifts all elements of stack b down one position. The last element becomes the first.

// int	rrr(reverse rotate a+b)	//rra and rrb at the same time.