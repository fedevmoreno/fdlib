#include "libfd.h"

void	fd_bubble_sort(int vector[], int len)
{
    int	i;
    int	j;

    i = 0;
    j = 1;
    while (i < len)
    {
        while (j <= len)
        {
            if (vector[i] > vector [j])
            {
                fd_swap(&vector[i], &vector[j]);
                i = 0;
                j = 1;
            }
            else
            {
                i++;
                j++;
            }
        }
    }
}
