#include <stdio.h>

void	fd_print_array(int array[], int size)
{
	int i;

	i = 0;
	while (i < size)
	{
		printf("%d", array[i]);
		i++;
	}
	printf("\n");
}
