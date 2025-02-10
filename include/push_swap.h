/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: roversch <roversch@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/27 16:17:20 by roversch          #+#    #+#             */
/*   Updated: 2025/02/10 19:53:52 by roversch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H
# include <stdlib.h>
# include "../libft/libft.h"

typedef struct stack
{
	int	*array;
	int	size;
	int	index;
}	t_stack;

int		main(int argc, char **argv);
void	print_stack(t_stack *stack_a, t_stack *stack_b);
char	**ft_split(char const *s, char c);

int		initiate_stack(t_stack *stack, int size);
int		check_stack(t_stack *stack_a, char **argv, int size);
int		find_min_index(t_stack *stack_a);
void	normalize_stack(t_stack *stack_a, t_stack *stack_b, int size);
void	send_stack(t_stack *stack_a, t_stack *stack_b, int size);

void	solve2(t_stack *stack_a);
void	solve3(t_stack *stack_a);
void	solve4(t_stack *stack_a, t_stack *stack_b);
void	solve5(t_stack *stack_a, t_stack *stack_b);
void	radix_sort(t_stack *stack_a, t_stack *stack_b, int size);

void	swap(t_stack *stack, const char *ins);
void	sa(t_stack *stack_a);
void	sb(t_stack *stack_b);
void	ss(t_stack *stack_a, t_stack *stack_b);
void	push(t_stack *from_stack, t_stack *to_stack, const char *ins);
void	pa(t_stack *stack_a, t_stack *stack_b);
void	pb(t_stack *stack_a, t_stack *stack_b);
void	rotate(t_stack *stack, const char *instruct);
void	ra(t_stack *stack_a);
void	rb(t_stack *stack_b);
void	rr(t_stack *stack_a, t_stack *stack_b);
void	reverse_rotate(t_stack *stack, const char *instruct);
void	rra(t_stack *stack_a);
void	rrb(t_stack *stack_b);
void	rrr(t_stack *stack_a, t_stack *stack_b);
#endif
