#ifndef LIBFD_H

# define LIBFD_H
# include <unistd.h>
# include <stdlib.h>
# include <stdio.h>

size_t	ft_str_len(const char *s);
int		ft_ilen(int num);
void	fd_swap(int *n1, int *n2);
char	*fd_str_rev(char *str);
void	fd_print_array(int array[], int size);
void	fd_booble_sort(int vector[], int len);

#endif
