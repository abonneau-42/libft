# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: abonneau <abonneau@student.42lyon.fr>      +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/11/15 13:06:53 by abonneau          #+#    #+#              #
#    Updated: 2024/11/18 15:35:57 by abonneau         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CC = cc
NAME = libft.a
CFLAGS = -Wall -Werror -Wextra -I .
DDIR = ./.build/
HEADER = libft.h
SRCS = 			ft_atoi.c \
				ft_bzero.c \
				ft_isalnum.c \
				ft_isalpha.c \
				ft_isascii.c \
				ft_isdigit.c \
				ft_isprint.c \
				ft_memcpy.c \
				ft_memmove.c \
				ft_memset.c \
				ft_memchr.c \
				ft_split.c \
				ft_strchr.c \
				ft_strlcat.c \
				ft_strlcpy.c \
				ft_strlen.c \
				ft_strncmp.c \
				ft_tolower.c \
				ft_toupper.c \
				ft_strnstr.c \
				ft_strrchr.c \
				ft_memcmp.c \
				ft_calloc.c \
				ft_strdup.c \
				ft_strjoin.c \
				ft_strtrim.c \
				ft_substr.c \
				ft_itoa.c \
				ft_strmapi.c \
				ft_striteri.c \
				ft_putchar_fd.c \
				ft_putstr_fd.c \
				ft_putendl_fd.c \
				ft_putnbr_fd.c \

SRCS_BONUS	=	ft_lstnew_bonus.c		\
				ft_lstsize_bonus.c		\
				ft_lstlast_bonus.c		\
				ft_lstadd_front_bonus.c	\
				ft_lstadd_back_bonus.c	\
				ft_lstdelone_bonus.c	\
				ft_lstclear_bonus.c		\
				ft_lstiter_bonus.c		\
				ft_lstmap_bonus.c		\

OBJS = $(addprefix $(DDIR),$(SRCS:.c=.o))
OBJS_BONUS = $(addprefix $(DDIR),$(SRCS_BONUS:.c=.o))

all: $(NAME)

$(NAME): $(OBJS)
	ar rcs $(NAME) $(OBJS)

$(DDIR)%.o: %.c $(HEADER) Makefile
	@mkdir -p $(@D)
	$(CC) $(CFLAGS) -c $< -o $@

bonus:
	$(MAKE) $(NAME) SRCS="$(SRCS) $(SRCS_BONUS)"

clean:
	rm -rf $(DDIR)

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re bonus
