# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: roversch <roversch@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/11/07 15:21:20 by roversch          #+#    #+#              #
#    Updated: 2025/02/10 16:59:10 by roversch         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = push_swap
LIBFT = libft/libft.a
PRINTF = libft/printf/printf.a
SRCDIR = source
SRCLIT = main.c handling_stack.c sorting.c ins_swap.c ins_rotate.c ins_reverse.c ins_push.c
SRCS	= $(addprefix $(SRCDIR)/,$(SRCLIT))
OBJ		= $(SRCS:.c=.o)
CC = cc
INCLUDE = -I ./include
CFLAGS = -Wall -Wextra -Werror

all: $(NAME)

$(NAME): $(LIBFT) $(OBJ)
	$(CC) $(CFLAGS) $(OBJ) $(LIBFT) $(PRINTF) -o $(NAME)

$(LIBFT): 
	$(MAKE) -C libft

%.o: %.c
	@$(CC) $(CFLAGS) $(INCLUDE) -c $< -o $@

clean:
	@rm -f $(OBJ)
	$(MAKE) -C libft clean

fclean: clean
	@rm -f $(NAME)
	$(MAKE) -C libft fclean

re: fclean all

.PHONY: all clean fclean re