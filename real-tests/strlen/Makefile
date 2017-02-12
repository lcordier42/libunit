# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: jchichep <jchichep@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2013/11/19 16:20:35 by jchichep          #+#    #+#              #
#    Updated: 2017/02/12 18:28:06 by mdescamp         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME		= libstrlen.a

SRC			= 00_launcher.c \
			  01_basic_test.c \
			  02_empty_test.c \
			  03_large_test.c \

SRCDIR		= .

HEADDIR1	= ../../source/libft/includes

HEADDIR2	+= ../../../framework/includes

HEADDIR3	+= ./includes

OBJ			= $(addprefix $(OBJDIR)/, $(addsuffix .o, $(NOM)))

NOM			= $(basename $(notdir $(SRC)))

OBJDIR		= ./obj

CC			= /usr/bin/gcc

CFLAGS		= -Wall -Wextra -Werror

RM			= rm -f

ECHO		= echo

all			: $(NAME)

$(NAME)		: $(OBJ)
	@$(ECHO) "\033[0;32m> Compiled\033[0m"
	@ar rc $(NAME) $(OBJ)
	@$(ECHO) "\033[0;31m> Libft Lib created\033[0m"
	@ranlib $(NAME)
	@$(ECHO) "\033[0;33m> Libft Lib index added\033[0m"

$(OBJDIR)/%.o		: $(SRCDIR)/%.c
	@test -d $(OBJDIR) || mkdir $(OBJDIR)
	@$(CC) $(CFLAGS) -I$(HEADDIR1) -I$(HEADDIR2) -I$(HEADDIR3) -c -o $@ $< \
	&& $(ECHO) "\033[1;30m[CC] : Compiled $(notdir $<) \
	[\033[0;32mOk\033[1;30m]\033[0m" \
	|| $(ECHO) "\033[1;30m[CC] : Compiled $(notdir $<) \
	[\033[0;7;31mError\033[0;1;30m]\033[0m"

clean		:
	@$(RM) $(OBJ)
	@$(RM) -r $(OBJDIR)
	@$(ECHO) "\033[0;34m> Lib Directory cleaned\033[0m"

fclean		: clean
	@$(RM) $(NAME)
	@$(ECHO) "\033[0;35m> Library removed\033[0m"

re		: fclean all

bin		: all clean

.PHONY : all clean fclean re bin
