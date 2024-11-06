/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   strncmp.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abonneau <abonneau@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/06 13:24:59 by abonneau          #+#    #+#             */
/*   Updated: 2024/11/06 13:48:31 by abonneau         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	strncmp(const char *first, const char *second, size_t length)
{
	int	i;

	i = -1;
	while ((first[++i] || second[i]) && i < length)
		if (first[i] != second[i])
			return (first[i] - second[i]);
	return (0);
}
