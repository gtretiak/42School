/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gtretiak <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/04 18:59:55 by gtretiak          #+#    #+#             */
/*   Updated: 2024/11/08 14:45:23 by gtretiak         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t	i;
	size_t	j;
	char	*hay;
	char	*nee;

	hay = (char *)haystack;
	nee = (char *)needle;
	i = 0;
	j = 0;
	if (!needle[0])
		return ((char *)haystack);
	while (hay[i] && len > 0)
	{
		if (hay[i] == nee[j])
		{
			while (nee[j] && hay[i + j] == nee[j] && len > (i + j))
				j++;
			if (!nee[j])
				return ((char *)&hay[i]);
			j = 0;
		}
		i++;
	}
	return (NULL);
}
