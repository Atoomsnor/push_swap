/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   handling_stack.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: roversch <roversch@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/06 17:12:17 by roversch          #+#    #+#             */
/*   Updated: 2025/02/10 16:24:46 by roversch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"
#include <stdio.h>
#include <limits.h>

int	initiate_stack(t_stack *stack, int size)
{
	stack->array = (int *)malloc(sizeof(int) * size);
	if (!stack->array)
		return (-1);
	stack->size = size;
	stack->index = -1;
	return (1);
}

int	check_stack(t_stack *stack_a, char **argv, int size)
{
	int		i;

	i = 0;
	while (i < size)
	{
		stack_a->array[i] = atol(argv[i + 1]); // Corrected index
		i++;
	}
	stack_a->size = size;
	stack_a->index = stack_a->size - 1;
	return (1);
}

int	find_min_index(t_stack *stack_a)
{
	int	min_index;
	int	i;

	min_index = 0;
	i = 0;
	while (i < stack_a->size) //going trough entire array
	{
		if (stack_a->array[i] < stack_a->array[min_index])
			min_index = i; //with the current element, "i" will mark its location.
		i++;
	}
	return (min_index);
}

void	normalize_stack(t_stack *stack_a, t_stack *stack_b, int size)
{
	int	place_of_min_index;
	int	i;
	int	j;

	i = 0;
	while (i < size)
	{
		stack_b->array[i] = stack_a->array[i];
		i++;
	}
	i = 0;
	j = 1;
	while (i < size)
	{
		place_of_min_index = find_min_index(stack_b); //if its 2 1 3 this will return [1]
		stack_a->array[place_of_min_index] = j;
		stack_b->array[place_of_min_index] = INT_MAX;
		j++;
		i++;
	}
}

void	send_stack(t_stack *stack_a, t_stack *stack_b, int size)
{
	int	i;

	i = 0;
	while (i < size - 1)
	{
		if (stack_a->array[i] > stack_a->array[i + 1])
				break;
		i++;
	}
	if (i < size - 1)
	{
		if (size == 2)
			solve2(stack_a);
		else if (size == 3)
			solve3(stack_a);
		else if (size == 4)
			solve4(stack_a, stack_b);
		else if (size == 5)
			solve5(stack_a, stack_b);
		else if (size > 5)
			radix_sort(stack_a, stack_b, size);
	}
}
