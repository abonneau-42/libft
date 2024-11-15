/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abonneau <abonneau@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/15 13:06:08 by abonneau          #+#    #+#             */
/*   Updated: 2024/11/15 14:05:40 by abonneau         ###   ########.fr       */
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
		return (NULL);
	i = 0;
	while (string[i])
	{
		newstr[i] = string[i];
		i++;
	}
	newstr[i] = '\0';
	return (newstr);
}
