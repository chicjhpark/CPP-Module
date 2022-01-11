# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: jaehpark <jaehpark@student.42seoul.kr>     +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/01/11 10:24:39 by jaehpark          #+#    #+#              #
#    Updated: 2022/01/11 11:34:19 by jaehpark         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME			= megaphone

CC				= clang++
CFLAGS			= -Wall -Werror -Wextra -std=c++98

SRCS			= megaphone.cpp

OBJS			= $(SRCS:.cpp=.o)

$(NAME)			: $(OBJS)
					$(CC) $(CFLAGS) $(OBJS) -o $@

%.o				: %.c
					$(CC) $(CFLAGS) -c $< -o $@

all				: $(NAME)

clean			:
					rm -rf $(OBJS)

fclean			:
					rm -rf $(NAME) $(OBJS)

re				: fclean all

.PHONY			: all clean fclean re bonus
