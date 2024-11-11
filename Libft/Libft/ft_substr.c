/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gtretiak <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/04 19:03:05 by gtretiak          #+#    #+#             */
/*   Updated: 2024/11/11 17:26:48 by gtretiak         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*tmp;
	size_t	i;

	tmp = (char *)s;
	if (!s || start > ft_strlen(s))
		return (NULL);
	if (start + len > ft_strlen(s))
		len = ft_strlen(s + start);
	tmp = malloc(sizeof(char) * (len + 1));
	if (!tmp)
		return (NULL);
	i = 0;
	while (len > i)
		tmp[i++] = s[start++];
	tmp[i] = '\0';
	return (tmp);
}
