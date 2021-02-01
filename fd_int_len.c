#include "libfd.h"

int			ft_ilen(int num)
	{
		int	len;

		len = 0;
		if (num < 0)
			len++;
		while (num != 0)
		{
			num /= 10;
			len++;
		}
		return (len);
	}