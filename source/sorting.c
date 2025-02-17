/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sorting.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: roversch <roversch@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/27 14:49:58 by roversch          #+#    #+#             */
/*   Updated: 2025/02/17 14:18:22 by roversch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

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
	if (first < second && first < third && second > third)
	{
		sa(stack_a);
		ra(stack_a);
	}
	else if (first > second && first < third)
		sa(stack_a);
	else if (first < second && first > third)
		rra(stack_a);
	else if (first > second && first > third && second < third)
		ra(stack_a);
	else if (first > second && first > third && second > third)
	{
		sa(stack_a);
		rra(stack_a);
	}
}

void	solve4(t_stack *stack_a, t_stack *stack_b)
{
	int	min_index;

	min_index = find_min_index(stack_a);
	if (min_index == 1)
		ra(stack_a);
	else if (min_index == 2)
	{
		ra(stack_a);
		ra(stack_a);
	}
	else if (min_index == 3)
		rra(stack_a);
	pb(stack_a, stack_b);
	solve3(stack_a);
	pa(stack_b, stack_a);
}

void	solve5(t_stack *stack_a, t_stack *stack_b)
{
	int	min_index;

	min_index = find_min_index(stack_a);
	while (min_index != 0)
	{
		if (min_index < 3)
			ra(stack_a);
		else
			rra(stack_a);
		min_index = find_min_index(stack_a);
	}
	pb(stack_a, stack_b);
	solve4(stack_a, stack_b);
	pa(stack_b, stack_a);
}

void	radix_sort(t_stack *stack_a, t_stack *stack_b, int size)
{
	int	max_bits;
	int	i;
	int	j;
	int	num;
	int	bit;

	max_bits = 0;
	while ((size - 1) >> max_bits)
		max_bits++;
	i = -1;
	while (++i < max_bits)
	{
		j = -1;
		while (++j < size)
		{
			num = stack_a->array[0];
			bit = (num >> i) & 1;
			if (bit == 0)
				pb(stack_a, stack_b);
			else
				ra(stack_a);
		}
		while (stack_b->index != -1)
			pa(stack_b, stack_a);
	}
}
