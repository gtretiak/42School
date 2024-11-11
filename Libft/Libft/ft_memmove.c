/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gtretiak <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/04 18:55:59 by gtretiak          #+#    #+#             */
/*   Updated: 2024/11/08 14:42:34 by gtretiak         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	unsigned char	*ptrdest;
	unsigned char	*ptrsrc;

	ptrdest = (unsigned char *)dest;
	ptrsrc = (unsigned char *)src;
	if (ptrsrc < ptrdest)
	{
		ptrdest += n;
		ptrsrc += n;
		while (n--)
			*(--ptrdest) = *(--ptrsrc);
	}
	else
	{
		while (n--)
			*ptrdest++ = *ptrsrc++;
	}
	return (dest);
}
