/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: roversch <roversch@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/20 16:45:57 by roversch          #+#    #+#             */
/*   Updated: 2025/01/30 16:15:15 by roversch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"
#include <stdio.h>

void	initiate_stack_(t_stack *stack, int size)
{
	stack->array = (int *)malloc(sizeof(int) * size); //make malloc check
	stack->size = size;
	stack->index = -1;
}

void	print_stack_(t_stack stack_a, t_stack stack_b)
{
	int	i;

	i = 0;
	printf("A\tB\n");
	while (i < stack_a.size || i < stack_b.size)
	{
		if (i <= stack_a.index) //print elements of stack_a up to its index
			printf("%d\t", stack_a.array[stack_a.index - i]);
		else
			printf("\t"); //empty space for stack_a
		if (i <= stack_b.index) //print elements of stack_b up to its index
			printf("%d", stack_b.array[stack_b.index - i]);
		i++;
		printf("\n");
	}
	printf("\n");
}

int	main(int argc, char **argv)
{
	t_stack	stack_a;
	t_stack	stack_b;
	int		size;
	int		i;

	size = argc - 1;
	initiate_stack_(&stack_a, size); //add malloc failchecks
	initiate_stack_(&stack_b, size);
	i = 0;
	while (i < size)
	{
		stack_a.index++;
		stack_a.array[stack_a.index] = atoi(argv[size - i]);
		i++;
	}
	print_stack_(stack_a, stack_b);
	ra(&stack_a);
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
