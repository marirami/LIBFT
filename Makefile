# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: marirami <marirami@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/12/05 19:35:22 by marirami          #+#    #+#              #
#    Updated: 2022/12/13 15:38:17 by marirami         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRCS			=	ft_isalnum.c ft_isprint.c ft_strlcat.c \
					ft_isalpha.c \
					ft_memcpy.c   ft_strlcpy.c  \
					ft_bzero.c   ft_isascii.c ft_memcpy.c \
					ft_memmove.c ft_strlen.c   \
					ft_isdigit.c   ft_toupper.c ft_tolower.c \
					ft_memset.c   ft_strchr.c ft_strrchr.c\
   
				
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