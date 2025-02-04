/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   1-5sort.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: roversch <roversch@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/27 14:49:58 by roversch          #+#    #+#             */
/*   Updated: 2025/02/04 15:39:56 by roversch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"
#include <stdio.h>

void	find_min_index(t_stack *stack)
{
	//do stuff to find the smallest nr of stack a
}

void	solve2(t_stack *stack_a)
{
	printf("solve2\n");
	sa(stack_a);
}

void	solve3(t_stack *stack_a)
{
	int	first;
	int	second;
	int	third;

	printf("solve3\n");
	first = stack_a->array[0];
	second = stack_a->array[1];
	third = stack_a->array[2];
	if (first < second && first < third) // 1,3,2
	{
		sa(stack_a);
		ra(stack_a);
	}
	else if (first > second && first < third) // 2,1,3
		sa(stack_a);
	else if (first < second && first > third) // 2,3,1
		rra(stack_a);
	else if (first > second && first > third && second < third) // 3,1,2
		ra(stack_a);
	else if (first > second && first > third && second > third) // 3,2,1
	{
		sa(stack_a);
		rra(stack_a);
	}
}

void	solve4(t_stack *stack_a, t_stack *stack_b)
{
	printf("solve4\n");
	find_min_index(stack_a);
	pb(stack_a, stack_b);
	solve3(stack_a);
	pa(stack_b, stack_a);
}

void	solve5(t_stack *stack_a, t_stack *stack_b)
{
	printf("solve5\n");
	find_min_index(stack_a);
	pb(stack_a, stack_b);
	find_min_index(stack_a);
	pb(stack_a, stack_b);
	solve3(stack_a);
	pa(stack_b, stack_a);
	pa(stack_b, stack_a);
}
