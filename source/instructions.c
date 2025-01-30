/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   instructions.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: roversch <roversch@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/20 13:06:54 by roversch          #+#    #+#             */
/*   Updated: 2025/01/30 15:35:54 by roversch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"
#include <stdio.h>

void	sa(t_stack *stack_a)
{
	int	tmp_a;

	if (stack_a->index < 1)
		return;
	printf("sa\n");
	tmp_a = stack_a->array[stack_a->index];
	stack_a->array[stack_a->index] = stack_a->array[stack_a->index - 1];
	stack_a->array[stack_a->index - 1] = tmp_a;
}

void	sb(t_stack *stack_b)
{
	int	tmp_b;

	if (stack_b->index < 1)
		return;
	printf("sb\n");
	tmp_b = stack_b->array[stack_b->index];
	stack_b->array[stack_b->index] = stack_b->array[stack_b->index - 1];
	stack_b->array[stack_b->index - 1] = tmp_b;
}

void	ss(t_stack *stack_a, t_stack *stack_b)
{
	int	tmp_a;
	int	tmp_b;

	if (stack_a->index < 1 && stack_b->index < 1)
		return;
	printf("ss\n");
	tmp_a = stack_a->array[stack_a->index];
	stack_a->array[stack_a->index] = stack_a->array[stack_a->index - 1];
	stack_a->array[stack_a->index - 1] = tmp_a;
	tmp_b = stack_b->array[stack_b->index];
	stack_b->array[stack_b->index] = stack_b->array[stack_b->index - 1];
	stack_b->array[stack_b->index - 1] = tmp_b;
}

void	pa(t_stack *stack_a, t_stack *stack_b)
{
	if (stack_b->index < 0)
		return;
	printf("pa\n");
	stack_a->index++;
	stack_a->array[stack_a->index] = stack_b->array[stack_b->index];
	stack_b->index--;
}

void	pb(t_stack *stack_a, t_stack *stack_b)
{
	if (stack_a->index < 0)
		return;
	printf("pb\n");
	stack_b->index++;
	stack_b->array[stack_b->index] = stack_a->array[stack_a->index];
	stack_a->index--;
}

void	ra(t_stack *stack_a)
{
	int	tmp_a;
	int	i;

	if (stack_a->index < 1)
		return;
	printf("ra\n");
	tmp_a = stack_a->array[stack_a->index];
	i = stack_a->index;
	while (i > 0)
	{
		stack_a->array[i] = stack_a->array[i - 1];
		i--;
	}
	stack_a->array[0] = tmp_a;
}

void	rb(t_stack *stack_b)
{
	int	tmp_b;
	int	i;

	if (stack_b->index < 1)
		return;
	printf("rb\n");
	tmp_b = stack_b->array[stack_b->index];
	i = stack_b->index;
	while (i > 0)
	{
		stack_b->array[i] = stack_b->array[i - 1];
		i--;
	}
	stack_b->array[0] = tmp_b;
}

void	rr(t_stack *stack_a, t_stack *stack_b)
{
	int	tmp_a;
	int	tmp_b;
	int	i;

	if (stack_a->index < 1 && stack_b->index < 1)
		return;
	printf("rr\n");
	tmp_a = stack_a->array[stack_a->index];
	tmp_b = stack_b->array[stack_b->index];
	i = stack_a->index;	//maybe need to change this if stack_a is empty or smth

	while (i > 0)
	{
		stack_a->array[i] = stack_a->array[i - 1];
		stack_b->array[i] = stack_b->array[i - 1];
		i--;
	}
	stack_a->array[0] = tmp_a;
	stack_b->array[0] = tmp_b;
}

void	rra(t_stack *stack_a)
{
	int	tmp_a;
	int	i;

	if (stack_a->index < 1)
		return;
	printf("rra\n");
	tmp_a = stack_a->array[0];
	i = 0;
	while (i < stack_a->index)
	{
		stack_a->array[i] = stack_a->array[i + 1];
		i++;
	}
	stack_a->array[stack_a->index] = tmp_a;
}

void	rrb(t_stack *stack_b)
{
	int	tmp_b;
	int	i;

	if (stack_b->index < 1)
		return;
	printf("rrb\n");
	tmp_b = stack_b->array[0];
	i = 0;
	while (i < stack_b->index)
	{
		stack_b->array[i] = stack_b->array[i + 1];
		i++;
	}
	stack_b->array[stack_b->index] = tmp_b;
}

void	rrr(t_stack *stack_a, t_stack *stack_b)
{
	int	tmp_a;
	int	tmp_b;
	int	i;

	if (stack_a->index < 1 && stack_b->index < 1)
		return;
	printf("rrr\n");
	tmp_a = stack_a->array[0];
	tmp_b = stack_b->array[0];
	i = 0;

	while (i < stack_a->index)
	{
		stack_a->array[i] = stack_a->array[i + 1];
		stack_b->array[i] = stack_b->array[i + 1];
		i++;
	}
	stack_a->array[stack_a->index] = tmp_a;
	stack_b->array[stack_b->index] = tmp_b;
}
