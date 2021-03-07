#include "libfd.h"

int	fd_recursive_power(int nb, int power)
{
	int	result;

	result = nb;
	if (power < 0)
		return (0);
	if (power == 0)
		return (1);
	else if (power > 1)
		return (result * fd_recursive_power(result, --power));
	return (result);
}
