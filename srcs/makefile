SRCS = $(wildcard additional_functions/*.c) \
       $(wildcard bonus/*.c) \
       $(wildcard libC/*.c)

OBJS = $(addprefix obj/, $(notdir $(SRCS:.c=.o)))

NAME = libft.a
CC = gcc
FLAGS = -Wall -Werror -Wextra -pedantic -std=c11
RM = rm -f

all: obj $(NAME)

obj:
	mkdir -p obj

$(NAME): $(OBJS)
	ar rcs $(NAME) $(OBJS)

obj/%.o: additional_functions/%.c
	$(CC) $(FLAGS) -c $< -o $@

obj/%.o: bonus/%.c
	$(CC) $(FLAGS) -c $< -o $@

obj/%.o: libC/%.c
	$(CC) $(FLAGS) -c $< -o $@

clean:
	$(RM) -r obj

fclean: clean
	$(RM) $(NAME)

re: fclean all

.PHONY: all clean fclean re

