# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: haeris <marvin@42.fr>                      +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/08/13 13:56:17 by haeris            #+#    #+#              #
#    Updated: 2022/08/13 13:56:20 by haeris           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #


NAME					= libftprintf.a

CC                      = gcc

SRCS					= ft_printf.c ft_process.c

OBJS					= $(SRCS:.c=.o)

FLAGS					= -Wall -Wextra -Werror

all	:	$(NAME)

$(NAME):	$(OBJS)
				$(CC) $(FLAGS) -c $(SRCS) -I./
				ar rc $(NAME) $(OBJS)

clean:
		rm -f $(OBJS)

fclean:	clean
		rm -f $(NAME)

re:	fclean all

.PHONY:	all clean fclean re
