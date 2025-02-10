/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   handling_stack.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: roversch <roversch@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/06 17:12:17 by roversch          #+#    #+#             */
/*   Updated: 2025/02/10 20:29:02 by roversch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"
#include <stdio.h>
#include <limits.h>

int	initiate_stack(t_stack *stack, int size)
{
	stack->array = (int *)malloc(sizeof(int) * size);
	if (!stack->array)
		return (0);
	stack->size = size;
	stack->index = -1;
	return (1);
}

int	check_stack(t_stack *stack_a, char **argv, int size)
{
	int		i;
	int		j;
	long	temp;

	i = 0;
	while (i < size)
	{
		temp = ft_atol(argv[i + 1]);
		if (!temp)
			return (0);
		if (temp < INT_MIN || temp > INT_MAX)
			return (0);
		j = 0;
		while (j < i)
		{
			if (stack_a->array[j] == temp)
				return (0);
			j++;
		}
		stack_a->array[i] = (int)temp;
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
	while (i < stack_a->size)
	{
		if (stack_a->array[i] < stack_a->array[min_index])
			min_index = i;
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
		place_of_min_index = find_min_index(stack_b);
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
			break ;
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
