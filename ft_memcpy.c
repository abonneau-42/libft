/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abonneau <abonneau@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/04 14:55:10 by abonneau          #+#    #+#             */
/*   Updated: 2024/11/06 12:32:41 by abonneau         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	unsigned char	*str;
	unsigned char	*str2;

	if (!dest && !src)
		return (0);
	str = (unsigned char *)dest;
	str2 = (unsigned char *)src;
	while (n--)
		*str++ = *str2++;
	return (dest);
}
