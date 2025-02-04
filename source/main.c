/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: roversch <roversch@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/20 16:45:57 by roversch          #+#    #+#             */
/*   Updated: 2025/02/04 15:52:03 by roversch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"
#include <stdio.h>

void	initiate_stack(t_stack *stack, int size)
{
	stack->array = (int *)malloc(sizeof(int) * size); //make malloc check
	stack->size = size;
	stack->index = -1;
}

// void	correct_stack(t_stack stack_a)
// {
// 	make -4, -9, 1, 19. into 2 1 3 4
// 	maybe also check if already sorted
// }

void	print_stack(t_stack stack_a, t_stack stack_b)
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

void	send_stack(t_stack *stack_a, t_stack *stack_b, int size)
{
	print_stack(*stack_a, *stack_b);
	if (size == 2) //check if size < 2 somewhere in main
		solve2(stack_a);
	else if (size == 3)
		solve3(stack_a);
	else if (size == 4)
		solve4(stack_a, stack_b);
	else if (size == 5)
		solve5(stack_a, stack_b);
	// else if (size > 5)
		//radix
	print_stack(*stack_a, *stack_b);
}

int	main(int argc, char **argv)
{
	t_stack	stack_a;
	t_stack	stack_b;
	int		size;
	int		i;

	size = argc - 1;
	initiate_stack(&stack_a, size); //add malloc failchecks
	initiate_stack(&stack_b, size);
	i = 0;
	while (i < size)
	{
		stack_a.array[i] = atoi(argv[i + 1]);
		stack_a.index++;
		i++;
	}
	//correct_stack(&stack_a);
	send_stack(&stack_a, &stack_b, size);
	free(stack_a.array);
	free(stack_b.array);
	return (0);
}

// detect errors()

// make negative, positive and change values to valid()
// -1 4 6 2 becomes
//  0 2 3 1

// Check if a is sorted()
