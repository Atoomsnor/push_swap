/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ins_rotate.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: roversch <roversch@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/30 17:10:26 by roversch          #+#    #+#             */
/*   Updated: 2025/02/11 16:23:56 by roversch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"
#include <unistd.h>

void	rotate(t_stack *stack)
{
	int	tmp;
	int	i;

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
		return ;
	write(1, "ra\n", 3);
	rotate(stack_a);
}

void	rb(t_stack *stack_b)
{
	if (stack_b->index < 1)
		return ;
	write(1, "rb\n", 3);
	rotate(stack_b);
}

void	rr(t_stack *stack_a, t_stack *stack_b)
{
	if (stack_a->index < 1 && stack_b->index < 1)
		return ;
	write(1, "rr\n", 3);
	rotate(stack_a);
	rotate(stack_b);
}
