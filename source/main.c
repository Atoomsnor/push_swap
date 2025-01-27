/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: roversch <roversch@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/20 16:45:57 by roversch          #+#    #+#             */
/*   Updated: 2025/01/27 20:21:22 by roversch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"
#include <stdio.h>

void	initiate_stack(t_stack *stack, int size)
{
	stack->array = (int *)malloc(sizeof(int) * size);
		// if (!stack->array)
		// 	return (NULL);
	stack->size = size;
	stack->index = -1;	//0 or -1?
}

int	main(int argc, char **argv)
{
	t_stack stack_a, stack_b;
	int	size;
	int	i;

	size = argc - 1;
	initiate_stack(&stack_a, size);	//stack_a has the same shit as t_stack, we fill it in
	initiate_stack(&stack_b, size);	//make sure to add malloc failchecks later
	
	i = 0;
	printf("A	B\n");
	while (i < size)
	{
		stack_a.array[++stack_a.index] = atoi(argv[i + 1]);
		printf("%d	%d\n", stack_a.array[i], stack_b.array[stack_b.index]);
		i++;
	}
	
	free(stack_a.array);
	free(stack_b.array);
	return (0);
}

// detect errors()


// make negative, positive and change values to valid()
// -1 4 6 2 becomes
//  0 2 3 1

// Check if a is sorted()


// check size()
// < 5 goes manual solving
// else go ridex
