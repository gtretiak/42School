#include "libft.h"

int	ft_isdigit(char c)
{
	if (c > 47 && c < 58)
		return (c);
	else
		return (0);
}
