/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: roversch <roversch@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/20 16:45:57 by roversch          #+#    #+#             */
/*   Updated: 2025/02/10 17:04:35 by roversch         ###   ########.fr       */
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

	size = argc - 1;
	if (size < 2)
		return ((ft_printf("Error\n"), -1));
	if (!initiate_stack(&stack_a, size))
		return ((ft_printf("Error\n"), -1));
	if (!initiate_stack(&stack_b, size))
	{
		free(stack_a.array);
		return ((ft_printf("Error\n"), -1)); //can combine this in 1line
	}
	if (!check_stack(&stack_a, argv, size))
		return ((ft_printf("Error\n"), -1));
	normalize_stack(&stack_a, &stack_b, size);
	// print_stack(&stack_a, &stack_b);
	send_stack(&stack_a, &stack_b, size);
	// print_stack(&stack_a, &stack_b);
	free(stack_a.array);
	free(stack_b.array);
	return (0);
}

// detect errors()