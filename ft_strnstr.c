/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abonneau <abonneau@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/06 13:49:18 by abonneau          #+#    #+#             */
/*   Updated: 2024/11/06 15:25:23 by abonneau         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *str, const char *pattern, size_t len)
{
	size_t	i;
	size_t	j;

	i = 0;
	if (!pattern[0])
		return ((char *)str);
	while (str[i] && i < len)
	{
		j = 0;
		while (str[i + j] == pattern[j] && pattern[j] && i + j < len)
			j++;
		if (!pattern[j])
			return ((char *)&str[i]);
		i++;
	}
	return (0);
}
