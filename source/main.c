/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: roversch <roversch@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/20 16:45:57 by roversch          #+#    #+#             */
/*   Updated: 2025/01/31 15:44:18 by roversch         ###   ########.fr       */
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
			printf("%d\t", stack_a.array[i]);
		else
			printf("\t"); //empty space for stack_a
		if (i <= stack_b.index) //print elements of stack_b up to its index
			printf("%d", stack_b.array[i]);
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
		stack_a.array[i] = atoi(argv[i + 1]);
		stack_a.index++;
		i++;
	}
	print_stack_(stack_a, stack_b);
	// pb(&stack_a, &stack_b);
	// print_stack_(stack_a, stack_b);
	// pb(&stack_a, &stack_b);
	// print_stack_(stack_a, stack_b);
	// pb(&stack_a, &stack_b);
	// print_stack_(stack_a, stack_b);
	// ra(&stack_a);
	// print_stack_(stack_a, stack_b);
	// rb(&stack_b);
	// print_stack_(stack_a, stack_b);
	// rr(&stack_a, &stack_b);
	// print_stack_(stack_a, stack_b);
	// sa(&stack_a);
	// print_stack_(stack_a, stack_b);
	// sb(&stack_b);
	// print_stack_(stack_a, stack_b);
	// ss(&stack_a, &stack_b);
	// print_stack_(stack_a, stack_b);
	// rra(&stack_a);
	// print_stack_(stack_a, stack_b);
	// rrb(&stack_b);
	// print_stack_(stack_a, stack_b);
	// rrr(&stack_a, &stack_b);
	// print_stack_(stack_a, stack_b);
	// pa(&stack_b, &stack_a);
	// print_stack_(stack_a, stack_b);
	// pa(&stack_b, &stack_a);
	// print_stack_(stack_a, stack_b);
	// pa(&stack_b, &stack_a);
	// print_stack_(stack_a, stack_b);
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
