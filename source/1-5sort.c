/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   1-5sort.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: roversch <roversch@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/27 14:49:58 by roversch          #+#    #+#             */
/*   Updated: 2025/02/06 13:49:55 by roversch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"
#include <stdio.h>

int	find_min_index(t_stack *stack_a)
{
	int	min_index;
	int	i;

	min_index = 0;
	i = 0;
	while (i < stack_a->size) //going trough entire array
	{
		if (stack_a->array[i] < stack_a->array[min_index]) //compares smallest element so far-
			min_index = i; //with the current element, "i" will mark its location.
		i++;
	}
	return (min_index);
}

void	solve2(t_stack *stack_a)
{
	sa(stack_a);
}

void	solve3(t_stack *stack_a)
{
	int	first;
	int	second;
	int	third;

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
	int	min_index;

	min_index = find_min_index(stack_a); //look where the 1 is
	if (min_index == 1) //if the 1 is in [1]
		ra(stack_a);
	else if (min_index == 2) //if the 1 is in [2]
	{
		ra(stack_a);
		ra(stack_a);
	}
	else if (min_index == 3) //if the 1 is in [3]
		rra(stack_a);
	pb(stack_a, stack_b);
	solve3(stack_a);
	pa(stack_b, stack_a);
}

void	solve5(t_stack *stack_a, t_stack *stack_b)
{
	int	min_index;

	min_index = find_min_index(stack_a); //look where the 1 is
	while (min_index != 0) //while the 1 is not on top
	{
		if (min_index < 3) //if the 1 is on the top half
			ra(stack_a);
		else //if the i is on the bottom half
			rra(stack_a);
		min_index = find_min_index(stack_a); //look again after rotating as it changes
	}
	pb(stack_a, stack_b);
	solve4(stack_a, stack_b);
	pa(stack_b, stack_a);
}
