/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abonneau <abonneau@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/06 11:49:14 by abonneau          #+#    #+#             */
/*   Updated: 2024/11/06 14:04:41 by abonneau         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*strchr(const char *string, int searchedChar)
{
	while (*string)
	{
		if (*string == searchedChar)
			return ((char *) string);
		string++;
	}

	return (0);
}