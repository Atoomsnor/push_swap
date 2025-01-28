/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: roversch <roversch@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/27 16:17:20 by roversch          #+#    #+#             */
/*   Updated: 2025/01/28 18:25:59 by roversch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H
# include <stdlib.h>

typedef struct stack
{
	int	*array;
	int	size;
	int	index;
}	t_stack;

int		main(int argc, char **argv);
void	pb(t_stack *stack_a, t_stack *stack_b);
void	pa(t_stack *stack_a, t_stack *stack_b);
#endif

// typedef struct node
// {
// 	int			nb;
// 	struct node	*next;
// 	struct node	*prev;
// }	t_node;

// typedef struct stack
// {
// 	int		size;
// 	t_node	*head;
// 	t_node	*tail;
// }	t_stack;