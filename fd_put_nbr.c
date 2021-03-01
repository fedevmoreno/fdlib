#include "libfd.h"

void	fd_put_nbr(int nb)
{
	unsigned int n;

	if (nb < 0)
	{
		fd_put_char('-');
		n = nb * -1;
	}
	else
		n = nb;
	if (n >= 10)
	{
		fd_put_nbr(n / 10);
		fd_put_char(n % 10 + '0');
	}
	else
		fd_put_char(n + '0');
}
