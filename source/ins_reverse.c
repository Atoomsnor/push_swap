/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ins_reverse.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: roversch <roversch@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/30 17:08:05 by roversch          #+#    #+#             */
/*   Updated: 2025/02/11 16:22:52 by roversch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"
#include <unistd.h>

void	reverse_rotate(t_stack *stack)
{
	int	tmp;
	int	i;

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
		return ;
	write(1, "rra\n", 4);
	reverse_rotate(stack_a);
}

void	rrb(t_stack *stack_b)
{
	if (stack_b->index < 1)
		return ;
	write(1, "rrb\n", 4);
	reverse_rotate(stack_b);
}

void	rrr(t_stack *stack_a, t_stack *stack_b)
{
	if (stack_a->index < 1 && stack_b->index < 1)
		return ;
	write(1, "rrr\n", 4);
	reverse_rotate(stack_a);
	reverse_rotate(stack_b);
}
