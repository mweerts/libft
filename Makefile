# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: mweerts <marvin@42.fr>                     +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2019/10/07 20:17:58 by mweerts           #+#    #+#              #
#    Updated: 2019/10/07 23:58:31 by mweerts          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a
SRCS =	ft_memset.c\
		ft_bzero.c\
		ft_strlen.c\
		ft_isalpha.c\
		ft_isdigit.c\
		ft_isalnum.c\
		ft_isascii.c\
		ft_isprint.c\
		ft_toupper.c\
		ft_tolower.c\
		ft_strchr.c\
		ft_strrchr.c\
		ft_strncmp.c\
		ft_strlcpy.c\
		ft_strlcat.c\
		ft_atoi.c\
		ft_strdup.c

HEADERS = libft.h
OBJS= $(SRCS:.c=.o) 
FLAGS = -Wall -Wextra -Werror

$(NAME):
		gcc $(FLAGS) -c $(SRCS)
		ar rc $(NAME) $(OBJS)
		ranlib $(NAME)

all: $(NAME)

clean:
		rm -rf $(OBJS) 

fclean: clean
		rm -rf $(NAME)

re: fclean all
