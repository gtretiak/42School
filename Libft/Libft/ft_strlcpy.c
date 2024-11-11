/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gtretiak <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/04 18:56:44 by gtretiak          #+#    #+#             */
/*   Updated: 2024/11/08 14:41:09 by gtretiak         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *dest, const char *src, size_t size)
{
	size_t	len;

	len = 0;
	while (size > 1 && *src)
	{
		*dest++ = *src++;
		len++;
		size--;
	}
	if (size > 0)
		*dest = '\0';
	while (*src++)
		len++;
	return (len);
}
