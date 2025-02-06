/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   radix.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: roversch <roversch@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/27 16:17:27 by roversch          #+#    #+#             */
/*   Updated: 2025/02/06 13:50:00 by roversch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"
#include <stdio.h>

void	radix_sort(t_stack *stack_a, t_stack *stack_b, int size)
{
	int max_bits;
	int i;
	int j;
	int num;
	int bit;
	
	max_bits = 0;
	while ((size - 1) >> max_bits)
		max_bits++;
	i = 0;
	while (i < max_bits)
	{
		j = 0;
		while (j < size)
		{
			num = stack_a->array[0];
			bit = (num >> i) & 1;
			if (bit == 0)
				pb(stack_a, stack_b);
			else
				ra(stack_a);
			j++;
		}
		while (stack_b->index != -1)
			pa(stack_b, stack_a);
		i++;
	}
}