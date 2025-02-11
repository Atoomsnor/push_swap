/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ins_swap.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: roversch <roversch@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/30 17:11:58 by roversch          #+#    #+#             */
/*   Updated: 2025/02/11 16:24:53 by roversch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"
#include <unistd.h>

void	swap(t_stack *stack)
{
	int	tmp;

	tmp = stack->array[0];
	stack->array[0] = stack->array[1];
	stack->array[1] = tmp;
}

void	sa(t_stack *stack_a)
{
	if (stack_a->index < 1)
		return ;
	write(1, "sa\n", 3);
	swap(stack_a);
}

void	sb(t_stack *stack_b)
{
	if (stack_b->index < 1)
		return ;
	write(1, "sb\n", 3);
	swap(stack_b);
}

void	ss(t_stack *stack_a, t_stack *stack_b)
{
	if (stack_a->index < 1 && stack_b->index < 1)
		return ;
	write(1, "ss\n", 3);
	swap(stack_a);
	swap(stack_b);
}
