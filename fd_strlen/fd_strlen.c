int	fd_strlen(char *str)
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
