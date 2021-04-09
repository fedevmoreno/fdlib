#include "libfd.h"

int	fd_is_vowel(int c)
{
	if (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u' || c == 'A' || c == 'E' || c == 'I' || c == 'O' || c == 'U')
		return (1);
	else
		return(0);
}
