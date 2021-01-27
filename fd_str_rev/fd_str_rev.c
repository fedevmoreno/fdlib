int	fd_str_len(char *str);

char	*fd_str_rev(char *str)
{
	char tmp;
	int len;
	int i;

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

int	fd_str_len(char *str)
{
	int len;

	len = 0;
	while (*str)
	{
		str++;
		len++;
	}
	return (len);
}
