/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/04 15:20:14 by abonneau          #+#    #+#             */
/*   Updated: 2024/11/06 09:50:08 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
	int n_saved;
	char *copy;

	copy = (char *)malloc((n + 1) * sizeof(char));

	copy[n] = '\0';

	ft_memcpy(copy, src, n);
	ft_memcpy(dest, copy, n);
	free(copy);
*/
void	*ft_memmove(void *dest, const void *src, size_t n)
{
	unsigned char	*str;
	unsigned char	*str2;

	str = (unsigned char *)dest;
	str2 = (unsigned char *)src;
	if (str2 < str)
	{
		while (n--)
			str[n] = str2[n];
	}
	else
		ft_memcpy(dest, src, n);
	return (dest);
}