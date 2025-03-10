/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ins_push.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: roversch <roversch@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/30 17:16:31 by roversch          #+#    #+#             */
/*   Updated: 2025/02/11 16:25:48 by roversch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"
#include <unistd.h>

void	push(t_stack *from_stack, t_stack *to_stack)
{
	int	i;

	i = to_stack->index;
	while (i >= 0)
	{
		to_stack->array[i + 1] = to_stack->array[i];
		i--;
	}
	to_stack->array[0] = from_stack->array[0];
	to_stack->index++;
	i = 0;
	while (i < from_stack->index)
	{
		from_stack->array[i] = from_stack->array[i + 1];
		i++;
	}
	from_stack->index--;
}

void	pa(t_stack *stack_b, t_stack *stack_a)
{
	if (stack_b->index < 0)
		return ;
	write(1, "pa\n", 3);
	push(stack_b, stack_a);
}

void	pb(t_stack *stack_a, t_stack *stack_b)
{
	if (stack_a->index < 0)
		return ;
	write(1, "pb\n", 3);
	push(stack_a, stack_b);
}
