CC = gcc
NAME = libft.a
CFLAGS = -Wall -Werror -Wextra
INC_DIR = ./includes
HEADER = $(INC_DIR)/ft.h
SRCS = ./srcs/ft_putchar.c \
			./srcs/ft_swap.c \
			./srcs/ft_putstr.c \
			./srcs/ft_strlen.c \
			./srcs/ft_strcmp.c

OBJS = $(SRCS:.c=.o)

$(NAME): $(OBJS)
	ar -rcs $(NAME) $(OBJS)

all: $(NAME)

%.o: %.c $(HEADER)
	$(CC) $(CFLAGS) -c $< -o $@ -I $(INC_DIR)

clean:
	rm -f $(OBJS)

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re
