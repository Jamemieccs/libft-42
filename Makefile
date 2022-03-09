# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: kkhongka <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/03/09 20:02:47 by kkhongka          #+#    #+#              #
#    Updated: 2022/03/10 05:01:04 by kkhongka         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CC = gcc
CFLAG = -Wall -Wextra -Werror
RM = rm -f
SRCS1 = ft_strdup.c ft_calloc.c ft_atoi.c ft_strnstr.c ft_memcmp.c ft_memchr.c ft_strncmp.c ft_strrchr.c ft_strchr.c ft_tolower.c ft_toupper.c ft_strlcat.c ft_strlcpy.c ft_memmove.c ft_bzero.c ft_isalnum.c ft_isalpha.c ft_isascii.c ft_isdigit.c ft_isprint.c ft_memcpy.c ft_memset.c ft_strlen.c
SRCS2 = ft_putnbr_fd.c ft_putendl_fd.c ft_putstr_fd.c ft_putchar_fd.c ft_striteri.c ft_itoa.c ft_strmapi.c ft_split.c ft_strtrim.c ft_strjoin.c ft_substr.c
BONUS = ft_lstmap.c ft_lstiter.c ft_lstclear.c ft_lstdelone.c ft_lstadd_back.c ft_lstlast.c ft_lstsize.c ft_lstnew.c ft_lstadd_front.c
SRCS = $(SRCS1) $(SRCS2)
BONUS_OBJS = $(BONUS:.c=.o)
OBJS = $(SRCS:.c=.o)
NAME = libft.a

all: $(NAME)

.c.o:
	@$(CC) $(CFLAG) -c $< -o $(<:.c=.o)

$(NAME): $(OBJS)
	@ar rcs $(NAME) $(OBJS)
clean:
	@$(RM) $(OBJS) $(BONUS_OBJS)

fclean: clean
	@$(RM) $(NAME)

re: fclean all

bonus: $(OBJS) $(BONUS_OBJS)
	@ar rcs $(NAME) $(OBJS) $(BONUS_OBJS)