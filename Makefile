# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: marirami <marirami@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/12/05 19:35:22 by marirami          #+#    #+#              #
#    Updated: 2023/01/13 11:30:54 by marirami         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRCS			=	ft_isalnum.c     ft_isprint.c     ft_strlcat.c \
					ft_isalpha.c     ft_strncmp.c     ft_atoi.c\
					ft_memcpy.c      ft_strlcpy.c     ft_calloc.c\
					ft_bzero.c       ft_isascii.c     ft_memcpy.c \
					ft_memmove.c     ft_strlen.c      *ft_strdup.c\
					ft_isdigit.c     ft_toupper.c     ft_tolower.c \
					ft_memset.c      ft_strchr.c      ft_strrchr.c\
					ft_memchr.c      ft_memcmp.c      ft_strnstr.c\
					ft_substr.c      ft_putchar_fd.c  ft_putstr_fd.c\
					ft_putendl_fd.c  ft_putnbr_fd.c   ft_striteri.c\
					ft_strjoin.c     ft_strtrim.c     ft_strmapi.c\
					ft_itoa.c        ft_split.c
   
				
OBJS			= $(SRCS:.c=.o)

CC				= gcc
RM				= rm -f
CFLAGS			= -Wall -Wextra -Werror

NAME			= libft.a

all:			$(NAME)

$(NAME):		$(OBJS)
				ar rcs $(NAME) $(OBJS)

clean:
				$(RM) $(OBJS)

fclean:			clean
				$(RM) $(NAME)

re:				fclean $(NAME)

.PHONY:			all clean fclean