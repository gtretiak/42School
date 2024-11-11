/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gtretiak <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/04 19:04:44 by gtretiak          #+#    #+#             */
/*   Updated: 2024/11/11 13:13:58 by gtretiak         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t	ft_check(const char *set, char c)
{
	size_t	i;

	i = 0;
	while (set[i])
	{
		if (set[i] == c)
			return (1);
		i++;
	}
	return (0);
}

static char	*ft_newstr(const char *s1, size_t start, size_t len)
{
	size_t	i;
	char	*res;

	i = 0;
	res = malloc(sizeof(char) * len + 1);
	if (!res)
		return (NULL);
	while (i < len)
	{
		res[i] = s1[start + i];
		i++;
	}
	return (res);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	size_t	i;
	size_t	l;

	if (!ft_strlen(s1))
		return (ft_strdup(""));
	i = 0;
	l = ft_strlen(s1) - 1;
	while (ft_check(set, s1[i]))
		i++;
	while (ft_check(set, s1[l]))
		l--;
	return (ft_newstr(s1, i, l - i + 1));
}
