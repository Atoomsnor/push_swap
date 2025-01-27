/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   instructions.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: roversch <roversch@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/20 13:06:54 by roversch          #+#    #+#             */
/*   Updated: 2025/01/27 14:17:04 by roversch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

make a struct i think for the instructions

int	sa(swap a)	//swap the first 2 elements at the top of stack a. Do nothing if there is only one or no elements)


int	sb(swap b)	//swap the first 2 elements at the top of stack b. Do nothing if there is only one or no elements)


int	ss(swap a+b)	//sa and sb at the same time.


int	pa(push a)	//Takes the first element on top of b and puts it on a. Does nothing if b is empty.


int	pb(push b)	//Takes the first element on top of a and puts it on b. Does nothing if b is empty.


int	ra(rotate a)	//Shifts all the elements of the stack a up by one position. The first element becomes the last.


int	rb(rotate b)	//Shifts all the elements of the stack a up by one position. The first element becomes the last.


int	rr(rotate a+b)	//ra and rb at the same time.


int	rra(reverse rotate a)	//Shifts all elements of stack a down one position. The last element becomes the first.


int	rrb(reverse rotate b)	//Shifts all elements of stack b down one position. The last element becomes the first.


int	rrr(reverse rotate a+b)	//rra and rrb at the same time.