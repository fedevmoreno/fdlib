#ifndef LIBFD_H

# define LIBFD_H
# include <unistd.h>
# include <stdlib.h>
# include <stdio.h>

size_t	fd_str_len(const char *s);
int		fd_ilen(int num);
int		fd_int_max(int a, int b);
char	*fd_str_rev(char *str);
void	fd_swap(int *n1, int *n2);
void	fd_print_array(int array[], int size);
void	fd_booble_sort(int vector[], int len);

#endif
