#include "libft.h"

int	ft_toupper(unsigned char c)
{
	if (c >= 97 && c <= 122)
	{
		return c - 32;
	}
	return c;
}
