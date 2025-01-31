/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ins_push.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: roversch <roversch@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/30 17:16:31 by roversch          #+#    #+#             */
/*   Updated: 2025/01/31 15:43:15 by roversch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"
#include <stdio.h>

void	push(t_stack *from_stack, t_stack *to_stack, const char *ins)
{
	int	i;

	printf("%s\n", ins);
	i = to_stack->index;
	while (i >= 0) //shift entire destination up to make room
	{
		to_stack->array[i + 1] = to_stack->array[i];
		i--;
	}
	to_stack->array[0] = from_stack->array[0]; //copy top to top
	to_stack->index++; //say we have 1 more now
	i = 0;
	while (i < from_stack->index) //move entire from down to fill up hole
	{
		from_stack->array[i] = from_stack->array[i + 1];
		i++;
	}
	from_stack->index--; //say we have 1 less now
}

void	pa(t_stack *stack_b, t_stack *stack_a)
{
	if (stack_b->index < 0)
		return ;
	push(stack_b, stack_a, "pa");
}

void	pb(t_stack *stack_a, t_stack *stack_b)
{
	if (stack_a->index < 0)
		return ;
	push(stack_a, stack_b, "pb");
}
