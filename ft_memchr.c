/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abonneau <abonneau@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/06 14:53:55 by abonneau          #+#    #+#             */
/*   Updated: 2024/11/06 14:54:00 by abonneau         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr( const void *memoryBlock, int searchedChar, size_t size )
{
	unsigned char	*str;
	size_t			i;

	str = (unsigned char *)memoryBlock;
	i = 0;
	while (i < size)
	{
		if (str[i] == (unsigned char)searchedChar)
			return ((void *)&str[i]);
		i++;
	}
	return (0);
}
