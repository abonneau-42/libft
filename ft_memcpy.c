/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/04 14:55:10 by abonneau          #+#    #+#             */
/*   Updated: 2024/11/06 09:50:22 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

	// while (--n)
	// 	dest[n] = src[n];

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	unsigned char	*str;
	unsigned char	*str2;

	str = (unsigned char *)dest;
	str2 = (unsigned char *)src;
	while (n--)
		*str++ = *str2++;
	return (dest);
}
