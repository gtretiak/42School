/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gtretiak <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/04 18:55:06 by gtretiak          #+#    #+#             */
/*   Updated: 2024/11/07 12:58:50 by gtretiak         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	unsigned char	*ptrsrc;
	unsigned char	*ptrdest;

	ptrsrc = (unsigned char *)src;
	ptrdest = (unsigned char *)dest;
	while (n--)
		*ptrdest++ = *ptrsrc++;
	return (dest);
}
