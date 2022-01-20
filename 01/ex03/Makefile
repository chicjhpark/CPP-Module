NAME			= Weapon

CC				= clang++
CFLAGS			= -Wall -Werror -Wextra -std=c++98

SRCS			= main.cpp \
					Weapon.cpp \
					HumanA.cpp \
					HumanB.cpp

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
