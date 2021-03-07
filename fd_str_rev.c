#include "libfd.h"

char	*fd_str_rev(char *str)
{
	char	tmp;
	int		len;
	int		i;

	len = fd_str_len(str) - 1;
	i = 0;
	while (len > i)
	{
		tmp = str[i];
		str[i] = str[len];
		str[len] = tmp;
		i++;
		len--;
	}
	return (str);
}
