# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: rfautier <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2017/11/10 14:57:02 by rfautier          #+#    #+#              #
#    Updated: 2017/11/13 16:42:03 by rfautier         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a
OPTION = -c
SRC = ft_toupper.c\
	ft_isprint.c\
	ft_tolower.c\
	ft_isascii.c\
	ft_isalnum.c\
	ft_isdigit.c\
	ft_isalpha.c\
	ft_atoi.c\
	ft_strncmp.c\
	ft_strcmp.c\
	ft_strnstr.c\
	ft_strstr.c\
	ft_strrchr.c\
	ft_strchr.c\
	ft_strcpy.c\
	ft_strncpy.c\
	ft_strdup.c\
	ft_strlen.c\
	ft_memcmp.c\
	ft_memchr.c\
	ft_memmove.c\
	ft_bzero.c\
	ft_memset.c\
	ft_strclr.c\
	ft_strequ.c\
	ft_strnequ.c\
	ft_strsub.c\
	ft_strdup.c\
	ft_strjoin.c\
	ft_strtrim.c\
	ft_strsplit.c\
	ft_itoa.c\
	ft_putchar.c\
	ft_putstr.c\
	ft_putendl.c\
	ft_putnbr.c\
	ft_putchar_fd.c\
	ft_putstr_fd.c\
	ft_putendl_fd.c\
	ft_putchar_fd.c\
	ft_putnbr_fd.c\
	ft_memalloc.c\
	ft_memcpy.c\
	ft_strlcat.c\
	ft_strncat.c\
	ft_strcat.c\
	ft_memccpy.c\
	ft_striter.c\
	ft_striteri.c\
	ft_strmap.c\
	ft_strmapi.c\
	ft_memdel.c\
	ft_strnew.c\
	ft_strdel.c


OBJ = $(SRC:.c=.o)

FLAG = -Wall -Werror -Wextra 

all: $(NAME)

$(NAME):
		gcc $(FLAG) $(OPTION) $(SRC)
		ar rc $(NAME) $(OBJ)
		ranlib $(NAME)

clean:
		/bin/rm -f $(OBJ)

fclean: clean
		/bin/rm -f $(NAME)

re: fclean all

