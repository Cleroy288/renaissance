SRCS = $(wildcard additional_functions/*.c) \
       $(wildcard libC/*.c)

BONUS_SRCS = $(wildcard bonus/*.c)

OBJS = $(SRCS:.c=.o)
BONUS_OBJS = $(BONUS_SRCS:.c=.o)

NAME = libft.a
CC = gcc
FLAGS = -Wall -Werror -Wextra -pedantic -std=c11
RM = rm -f

all: $(NAME)

$(NAME): $(OBJS)
	ar rcs $(NAME) $(OBJS)

bonus: $(BONUS_OBJS) $(OBJS)
	ar rcs $(NAME) $(BONUS_OBJS) $(OBJS)

%.o: %.c
	$(CC) $(FLAGS) -c $< -o $@

clean:
	$(RM) $(OBJS) $(BONUS_OBJS)

fclean: clean
	$(RM) $(NAME)

re: fclean all

.PHONY: all clean fclean re bonus

