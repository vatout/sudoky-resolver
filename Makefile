##
## Makefile for sudoki-bi in /home/rimbaud/rendu/sudoki-bi
## 
## Made by RIMBAUD
## Login   <rimbau_m@epitech.net>
## 
## Started on  Fri Feb 26 20:33:52 2016 RIMBAUD
## Last update Mon Feb 29 01:41:12 2016 Vatoutine
##

CC		= gcc

RM		= rm -f

NAME		= sudoki-bi

SRCS		= main.c \
		  tab/buffer.c \
		  aff/my_aff.c \
		  tab/my_print_tab.c \
		  tab/my_free.c \
		  error/error.c \
		  check/verif.c \
		  check/verif_1.c \
		  check/check.c \
		  initialization/init_struct.c \
		  initialization/init_tab.c \
		  get_next_line.c \
		  algo/algo.c

HEAD		= -Iinclude

CFLAGS		= $(HEAD) -W -Wall -Wextra -ansi -pedantic

OBJS		= $(SRCS:.c=.o)

$(NAME)		: $(OBJS)
		  $(CC) -o $(NAME) $(OBJS)

all		: $(NAME)

clean		:
		  $(RM) $(OBJS)

fclean		: clean
		  $(RM) $(NAME)

re		: fclean all

.PHONY		: all clean fclean re
