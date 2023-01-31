# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: yahamdan <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/12/26 18:16:11 by yahamdan          #+#    #+#              #
#    Updated: 2023/01/30 16:01:51 by yahamdan         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = push_swap
NAME2 = checker 
CC = cc
CFLAGS = -Wall -Wextra -Werror
SRC = swap_ab.c rotate_ab.c push_swap.c ps_utils1.c ps_utils2.c ps_utils3.c ps_utils4.c rotsw.c strlendup.c sort_five.c ft_split.c checke_error.c
BSRC = checker.c checker_utils.c checker_utils1.c get_next_line.c get_next_line_utils.c ps_utils1.c  rotsw.c ft_split.c checke_error.c strlendup.c
OBJ = $(SRC:.c=.o)
BOBJ = $(BSRC:.c=.o)

all : $(NAME)

$(NAME) : $(OBJ)
	$(CC) $(CFLAGS) -o $(NAME) $(OBJ) 

bonus : $(NAME2) 

$(NAME2) : $(BOBJ)
	$(CC) $(CFLAGS) -o $(NAME2) $(BOBJ)

clean :
	rm -f $(OBJ) $(BOBJ)

fclean : clean
	rm -f $(NAME) $(NAME2)

re : fclean all