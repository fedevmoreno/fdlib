NAME	=	libfd.a

CC	=	gcc

CFLAGS	=	-Wall -Wextra -Werror

SRCS	=	fd_bubble_sort.c \
		fd_int_len.c \
		fd_int_max.c \
		fd_print_array.c \
		fd_str_len.c \
		fd_str_rev.c \
		fd_swap.c \
		fd_recursive_power.c \
		fd_sqrt.c \
		fd_put_nbr.c \
		fd_put_char.c \
		fd_abs.c \
		fd_is_vowel.c

OBJS	=	$(SRCS:.c=.o)

all:		$(NAME)

$(NAME):
		$(CC) -c $(CFLAGS) $(SRCS)
		ar rc $(NAME) $(OBJS)
		ranlib $(NAME)

clean:
		rm -f $(OBJS)

fclean:		clean
		rm -f $(NAME)

re:		fclean all

.PHONY:		all clean fclean re
