NAME = libfd.a

CC = gcc

CFLAGS = -Wall -Wextra -Werror -I.

SRCS =	fd_bubble_sort.c \
		fd_int_len.c \
		fd_print_array.c \
		fd_str_len.c \
		fd_str_rev.c \
		fd_swap.c

OBJS = $(SRCS:.c=.o)

all: $(NAME)

$(NAME):
	$(CC) -c $(CFLAGS) $(SRCS)
	ar rc $(NAME) $(OBJS)
	ranlib $(NAME)

clean:
	rm -f $(OBJS)

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re
