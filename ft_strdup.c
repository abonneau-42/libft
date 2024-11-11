/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: azall <azall@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/10 17:43:02 by azall             #+#    #+#             */
/*   Updated: 2024/11/11 17:23:18 by azall            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *string)
{
	char	*newstr;
	size_t	i;

	i = ft_strlen(string);
	newstr = malloc(i + 1);
	if (!newstr)
		return (0);
	i = 0;
	while (string[i])
	{
		newstr[i] = string[i];
		i++;
	}
	newstr[i] = '\0';
	return (newstr);
}
