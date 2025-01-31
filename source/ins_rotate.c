/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ins_rotate.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: roversch <roversch@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/30 17:10:26 by roversch          #+#    #+#             */
/*   Updated: 2025/01/31 14:02:27 by roversch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"
#include <stdio.h>

void	rotate(t_stack *stack, const char *ins)
{
	int	tmp;
	int	i;

	if (ins[0] != '\0')
		printf("%s\n", ins);
	tmp = stack->array[0];
	i = 0;
	while (i < stack->index)
	{
		stack->array[i] = stack->array [i + 1];
		i++;
	}
	stack->array[stack->index] = tmp;
}
void	ra(t_stack *stack_a)
{
	if (stack_a->index < 1)
		return;
	rotate(stack_a, "ra");
}

void	rb(t_stack *stack_b)
{
	if (stack_b->index < 1)
		return;
	rotate(stack_b, "rb");
}

void	rr(t_stack *stack_a, t_stack *stack_b)
{
	if (stack_a->index < 1 && stack_b->index < 1)
		return;
	rotate(stack_a, "rr");
	rotate(stack_b, "");
}