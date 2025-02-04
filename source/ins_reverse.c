/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ins_reverse.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: roversch <roversch@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/30 17:08:05 by roversch          #+#    #+#             */
/*   Updated: 2025/02/04 15:44:53 by roversch         ###   ########.fr       */
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
	tmp = stack->array[stack->index]; //tmp is end of array
	i = stack->index; //nr of i is set to amount of stuff stack
	while (i > 0)
	{
		stack->array[i] = stack->array[i - 1]; //coppies from back to front 
		i--; //[1] 2 becomes [1] 1
	}
	stack->array[0] = tmp; //put tmp at the begin
}

void	rra(t_stack *stack_a)
{
	if (stack_a->index < 1)
		return ;
	reverse_rotate(stack_a, "rra");
}

void	rrb(t_stack *stack_b)
{
	if (stack_b->index < 1)
		return ;
	reverse_rotate(stack_b, "rrb");
}

void	rrr(t_stack *stack_a, t_stack *stack_b)
{
	if (stack_a->index < 1 && stack_b->index < 1)
		return ;
	reverse_rotate(stack_a, "rrr");
	reverse_rotate(stack_b, "");
}
