/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: roversch <roversch@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/20 16:45:57 by roversch          #+#    #+#             */
/*   Updated: 2025/02/05 18:36:09 by roversch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"
#include <stdio.h>
#include <limits.h>

int	initiate_stack(t_stack *stack, int size)
{
	stack->array = (int *)malloc(sizeof(int) * size); //make malloc check
	if (!stack->array)
		return (-1);
	stack->size = size;
	stack->index = -1;
	// if (stack_a) //maybe atoi/atol in here?
	// i = 0;
	// while (i < size)
	// {
	// 	stack_a.array[i] = atoi(argv[i + 1]); //send error if input isnt a number
	// 	stack_a.index++;
	// 	i++;
	// }
	return (1);
}

void	correct_stack(t_stack *stack_a, t_stack *stack_b, int size)
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

int	is_solved(t_stack *stack_a, t_stack *stack_b, int size)
{
	int	i;

	i = 0;
	while (i < size - 1)
	{
		if (stack_a->array[i] > stack_a->array[i + 1])
			return (0);
		i++;
	}
	printf("is solved already\n");
	return (1);
}

void	print_stack(t_stack *stack_a, t_stack *stack_b)
{
	int	i;

	i = 0;
	printf("A\tB\n");
	while (i < stack_a->size || i < stack_b->size)
	{
		if (i <= stack_a->index) //print elements of stack_a up to its index
			printf("%d\t", stack_a->array[i]);
		else
			printf("\t"); //empty space for stack_a
		if (i <= stack_b->index) //print elements of stack_b up to its index
			printf("%d", stack_b->array[i]);
		i++;
		printf("\n");
	}
	printf("\n");
}

void	send_stack(t_stack *stack_a, t_stack *stack_b, int size)
{
	print_stack(stack_a, stack_b);
	if (size == 2)
		solve2(stack_a);
	else if (size == 3)
		solve3(stack_a);
	else if (size == 4)
		solve4(stack_a, stack_b);
	else if (size == 5)
		solve5(stack_a, stack_b);
	// else if (size > 5)
		//radix
	print_stack(stack_a, stack_b);
}

int	main(int argc, char **argv)
{
	t_stack	stack_a;
	t_stack	stack_b;
	int		size;
	int		i;

	size = argc - 1; //make check if agrc is lower then 2
	if (size < 2)
		return (-1);
	if (!initiate_stack(&stack_a, size)) //not sure about this part
		return (-1);
	if (!initiate_stack(&stack_b, size))
	{
		free(stack_a.array);
		return (-1);
	}
	i = 0;
	while (i < size)
	{
		stack_a.array[i] = atoi(argv[i + 1]); //send error if input isnt a number, mayb atol.
		stack_a.index++;
		i++;
	}
	correct_stack(&stack_a, &stack_b, size); //can combine is_solved/send_stack
	if (!is_solved(&stack_a, &stack_b, size))
		send_stack(&stack_a, &stack_b, size);
	free(stack_a.array);
	free(stack_b.array);
	return (0);
}

// detect errors()