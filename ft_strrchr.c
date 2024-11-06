/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abonneau <abonneau@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/06 12:37:42 by abonneau          #+#    #+#             */
/*   Updated: 2024/11/06 13:23:13 by abonneau         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*strrchr(const char *string, int searchedChar)
{
	int i;
	char	*pos;

	i = 0;
	while (string[i])
	{
		if (string[i] == searchedChar)
			pos = &string[i];
		i++;
	}
	return (pos);
}
