#include "libfd.h"

int	fd_sqrt(int nb)
{
	int i;

	i = 1;
	if (nb == 1)
		return (1);
	while (i <= (nb / 2) && (i < 46341))
	{
		if (i * i == nb)
			return (i);
		i++;
	}
	return (0);
}
