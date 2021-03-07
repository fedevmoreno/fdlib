#include "libfd.h"

int	fd_abs(int i)
{
	if (i < 0)
		i = i * -1;
	return (i);
}
