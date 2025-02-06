/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ins_rotate.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: roversch <roversch@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/30 17:10:26 by roversch          #+#    #+#             */
/*   Updated: 2025/02/06 18:14:05 by roversch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"
#include <stdio.h>

void	rotate(t_stack *stack, const char *ins)
{
	int	tmp;
	int	i;

	if (ins[0] != '\0') // ins[0] == *(ins + sizeof(T) * 0)
		printf("%s\n", ins);
	tmp = stack->array[0]; //tmp is start of array
	i = 0;
	while (i < stack->index) //while i is smaller then the max index
	{
		stack->array[i] = stack->array [i + 1]; //i becomes whatever is in the position after
		i++; //[1] 2 becomes [1] 3
	}
	stack->array[stack->index] = tmp; //last and 2nd last are same, so we put tmp at end
}

void	ra(t_stack *stack_a)
{
	if (stack_a->index < 1)
		return ;
	rotate(stack_a, "ra");
}

void	rb(t_stack *stack_b)
{
	if (stack_b->index < 1)
		return ;
	rotate(stack_b, "rb");
}

void	rr(t_stack *stack_a, t_stack *stack_b)
{
	if (stack_a->index < 1 && stack_b->index < 1)
		return ;
	rotate(stack_a, "rr");
	rotate(stack_b, "");
}
