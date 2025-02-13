/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: roversch <roversch@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/20 16:45:57 by roversch          #+#    #+#             */
/*   Updated: 2025/02/13 13:11:15 by roversch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"
#include <unistd.h>

int	main(int argc, char **argv)
{
	t_stack	stack_a;
	t_stack	stack_b;
	int		size;

	size = argc - 1;
	if (size < 2)
		return (write(2, "Error\n", 6), -1);
	if (!initiate_stack(&stack_a, size))
		return (write(2, "Error\n", 6), -1);
	if (!initiate_stack(&stack_b, size))
	{
		free(stack_a.array);
		return (write(2, "Error\n", 6), -1);
	}
	if (!check_stack(&stack_a, argv, size))
	{
		free(stack_a.array);
		free(stack_b.array);
		return (write(2, "Error\n", 6), -1);
	}
	normalize_stack(&stack_a, &stack_b, size);
	send_stack(&stack_a, &stack_b, size);
	free(stack_a.array);
	free(stack_b.array);
	return (0);
}
