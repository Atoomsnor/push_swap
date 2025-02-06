/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: roversch <roversch@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/20 16:45:57 by roversch          #+#    #+#             */
/*   Updated: 2025/02/06 18:17:37 by roversch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"
#include <stdio.h>
#include <limits.h>

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

int	main(int argc, char **argv)
{
	t_stack	stack_a;
	t_stack	stack_b;
	int		size;
	int		i;

	size = argc - 1;
	if (size < 2)
		return (-1);
	if (!initiate_stack(&stack_a, size)) //NOT SURE ABOUT ANY OF THIS
		return (-1);
	if (!initiate_stack(&stack_b, size))
	{
		free(stack_a.array);
		return (-1);
	}
	i = 0;
	while (i < size)
	{
		stack_a.array[i] = atoi(argv[i + 1]); //USE ATOL AND CHECK FOR INCORRECT INPUTS
		stack_a.index++; //MAYBE MOVE THIS ENTIRE THING
		i++;
	}
	print_stack(&stack_a, &stack_b);
	correct_stack(&stack_a, &stack_b, size);
	print_stack(&stack_a, &stack_b);
	send_stack(&stack_a, &stack_b, size);
	free(stack_a.array);
	free(stack_b.array);
	return (0);
}

// detect errors()