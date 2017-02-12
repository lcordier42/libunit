#******************************************************************************#
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: lcordier <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2017/02/11 19:30:47 by lcordier          #+#    #+#              #
#    Updated: 2017/02/11 19:30:48 by lcordier         ###   ########.fr        #
#                                                                              #
#******************************************************************************#

NAME		=	libunit
INC_LIB		=	./framework/libunit.a
SRC			=	./tests/main.c
OBJ			=	$(SRC:.c=.o)
CFLAGS		=	-Wall -Wextra -Werror
CC			=	gcc
RM			=	/bin/rm -f
ECHO		=	printf


$(NAME)	:		$(OBJ)
				@make -C framework
				@$(CC) $(CFLAGS) -o $(NAME) $(INC_LIB) $(OBJ)
				@$(ECHO) "\033[32m[Compiled]\033[0m\n"

clean	:
				@$(RM) $(OBJ)
				@make clean -C framework
				@$(ECHO) "\033[32m[Deleting objects]\033[0m\n"

all		:		$(NAME)

fclean	:		clean
				@make fclean -C framework
				@$(RM) $(NAME)
				@$(ECHO) "\033[32m[Remove executable]\033[0m\n"

re		:		fclean all
