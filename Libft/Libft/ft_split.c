/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gtretiak <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/04 19:05:30 by gtretiak          #+#    #+#             */
/*   Updated: 2024/11/11 17:32:34 by gtretiak         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_countwords(const char *s, char c)
{
	size_t	i;
	size_t	count;

	i = 0;
	count = 0;
	while (s[i])
	{
		while (s[i] == c)
			i++;
		if (s[i - 1] == c || !(s[i - 1]))
			count++;
		while (s[i] && s[i] != c)
			i++;
	}
	return (count);
}

static int	ft_malloc_free(char **arr, size_t j, size_t l)
{
	size_t	i;

	i = 0;
	arr[j] = malloc(sizeof(char) * l);
	if (!arr[j])
	{
		while (i < j)
		{
			free(arr[i]);
			i++;
		}
		free(arr);
		return (1);
	}
	return (0);
}

static int	ft_filler(char **arr, char const *s, char c, size_t num)
{
	size_t	i;
	size_t	j;
	size_t	l;

	i = 0;
	j = 0;
	while (s[i] && j < num)
	{
		l = 0;
		while (s[i] == c && s[i])
			i++;
		while (s[i] != c && s[i])
		{
			l++;
			i++;
		}
		if (ft_malloc_free(arr, j, l + 1))
			return (1);
		arr[j] = ft_substr(s, i - l, l);
		j++;
	}
	return (0);
}

char	**ft_split(char const *s, char c)
{
	char	**arr;
	size_t	num;

	if (!s)
		return (NULL);
	num = ft_countwords(s, c);
	arr = malloc(sizeof(char *) * (num + 1));
	if (!arr)
		return (NULL);
	arr[num] = NULL;
	if (ft_filler(arr, s, c, num))
		return (NULL);
	return (arr);
}
