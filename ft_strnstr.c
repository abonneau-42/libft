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

char	*strnstr(const char *big, const char *little, size_t len)
{
	int	i;
	int	j;

	i = 0;
	while (big[i])
	{
		j = 1;
		if (big[i] == little[i])
		{
			while (big[i + j] == little[i + j])
			{
				j++;
			}
			if (little[i + j - 1] == '\0')
			{
				return (() big);
			}
		}
	}
}
