/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abonneau <abonneau@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/04 15:20:14 by abonneau          #+#    #+#             */
/*   Updated: 2024/11/04 17:51:24 by abonneau         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	int n_saved;
	char *copy;

	copy = (char *)malloc((n + 1) * sizeof(char));

	copy[n] = '\0';

	ft_memcpy(copy, src, n);
	ft_memcpy(dest, copy, n);
	free(copy);
}