/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ins_swap.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: roversch <roversch@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/30 17:11:58 by roversch          #+#    #+#             */
/*   Updated: 2025/02/04 15:47:03 by roversch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"
#include <stdio.h>

void	swap(t_stack *stack, const char *ins)
{
	int	tmp;

	if (ins[0] != '\0')
		printf("%s\n", ins);
	tmp = stack->array[0]; //tmp is start of array
	stack->array[0] = stack->array[1]; //position 0 becomes same as pos 1
	stack->array[1] = tmp; //pos 1 becomes same as tmp, (0) 
}

void	sa(t_stack *stack_a)
{
	if (stack_a->index < 1)
		return ;
	swap(stack_a, "sa");
}

void	sb(t_stack *stack_b)
{
	if (stack_b->index < 1)
		return ;
	swap(stack_b, "sb");
}

void	ss(t_stack *stack_a, t_stack *stack_b)
{
	if (stack_a->index < 1 && stack_b->index < 1)
		return ;
	swap(stack_a, "ss");
	swap(stack_b, "");
}
