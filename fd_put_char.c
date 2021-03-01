#include "libfd.h"

void	fd_put_char(char c)
{
	write(1, &c, 1);
}
