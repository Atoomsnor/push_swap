/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ins_reverse.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: roversch <roversch@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/30 17:08:05 by roversch          #+#    #+#             */
/*   Updated: 2025/01/31 14:41:24 by roversch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"
#include <stdio.h>

void	reverse_rotate(t_stack *stack, const char *ins)
{
	int	tmp;
	int	i;

	if (ins[0] != '\0')
		printf("%s\n", ins);
	tmp = stack->array[stack->index];
	i = stack->index;
	while (i > 0)
	{
		stack->array[i] = stack->array[i - 1];
		i--;
	}
	stack->array[0] = tmp;
}

void	rra(t_stack *stack_a)
{
	if (stack_a->index < 1)
		return;
	reverse_rotate(stack_a, "rra");
}

void	rrb(t_stack *stack_b)
{
	if (stack_b->index < 1)
		return;
	reverse_rotate(stack_b, "rrb");
}

void	rrr(t_stack *stack_a, t_stack *stack_b)
{
	if (stack_a->index < 1 && stack_b->index < 1)
		return;
	reverse_rotate(stack_a, "rrr");
	reverse_rotate(stack_b, "");
}