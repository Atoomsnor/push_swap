/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   instructions.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: roversch <roversch@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/20 13:06:54 by roversch          #+#    #+#             */
/*   Updated: 2025/01/28 18:25:07 by roversch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"
#include <stdio.h>

// int	sa(swap a)	//swap the first 2 elements at the top of stack a. Do nothing if there is only one or no elements)

// int	sb(swap b)	//swap the first 2 elements at the top of stack b. Do nothing if there is only one or no elements)

// int	ss(swap a+b)	//sa and sb at the same time.

void	pb(t_stack *stack_a, t_stack *stack_b)
{
	printf("pb\n");
	stack_b->index++;
	stack_b->array[stack_b->index] = stack_a->array[stack_a->index];
	stack_a->index--;
}

void	pa(t_stack *stack_a, t_stack *stack_b)
{
	printf("pa\n");
	stack_a->index++;
	stack_a->array[stack_a->index] = stack_b->array[stack_b->index];
	stack_b->index--;
}

// int	ra(rotate a)	//Shifts all the elements of the stack a up by one position. The first element becomes the last.

// int	rb(rotate b)	//Shifts all the elements of the stack a up by one position. The first element becomes the last.

// int	rr(rotate a+b)	//ra and rb at the same time.

// int	rra(reverse rotate a)	//Shifts all elements of stack a down one position. The last element becomes the first.

// int	rrb(reverse rotate b)	//Shifts all elements of stack b down one position. The last element becomes the first.

// int	rrr(reverse rotate a+b)	//rra and rrb at the same time.