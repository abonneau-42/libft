/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: azall <azall@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/06 11:49:14 by abonneau          #+#    #+#             */
/*   Updated: 2024/11/11 17:58:23 by azall            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strchr(const char *string, int searchedChar)
{
	int	i;

	i = 0;
	while (string[i])
	{
		if (string[i] == searchedChar)
			return ((char *)&string[i]);
		i++;
	}
	if (searchedChar == '\0')
		return ((char *)&string[i]);
	return (0);
}
