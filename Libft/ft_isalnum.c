#include "libft.h"

int	ft_isalnum(char c)
{
	if ((c > 96 && c < 123) || (c > 64 && c < 91))
		return (c);
	else if (c > 47 && c < 58)
		return (c);
	else
		return (0);
}
