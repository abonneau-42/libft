CC = gcc
NAME = libft.a
CFLAGS = -Wall -Werror -Wextra
INC_DIR = ./
HEADER = $(INC_DIR)/libft.h
SRCS = ./ft_atoi.c \
		./ft_bzero.c \
		./ft_isalnum.c \
		./ft_isalpha.c \
		./ft_isascii.c \
		./ft_isdigit.c \
		./ft_isprint.c \
		./ft_memcpy.c \
		./ft_memmove.c \
		./ft_memset.c \
		./ft_memchr.c \
		./ft_split.c \
		./ft_strchr.c \
		./ft_strlcat.c \
		./ft_strlcpy.c \
		./ft_strlen.c \
		./ft_strncmp.c \
		./ft_tolower.c \
		./ft_toupper.c \
		./ft_strnstr.c \
		./ft_strrchr.c \
		./ft_memcmp.c \
		./ft_calloc.c \
		./ft_strdup.c \

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