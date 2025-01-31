/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   1-5sort.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: roversch <roversch@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/27 14:49:58 by roversch          #+#    #+#             */
/*   Updated: 2025/01/31 13:55:04 by roversch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"
#include <stdio.h>

void	solve2(t_stack *stack_a)
{
	sa(stack_a);
}
void	solve3(t_stack *stack_a)
{
	int	first;
	int	second;
	int	third;

	first = stack_a->array[0];
	second = stack_a->array[1];
	third = stack_a->array[2];

	if (first < second && first < third) // 1,3,2
	{
		sa(stack_a);
		ra(stack_a);
	}
	else if (second > first && first > third) // 2,1,3
		sa(stack_a);
	else if (second > third && third > first) // 2,3,1
	{
		printf("ye2");
		sa(stack_a);
		ra(stack_a);
	}
	else if (first > third && third > second) // 3,1,2
		ra(stack_a);
	else if (first > second && second > third) // 3,2,1
	{
		sa(stack_a);
		rra(stack_a);
	}
}
