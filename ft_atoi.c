/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/04 16:30:57 by abonneau          #+#    #+#             */
/*   Updated: 2024/11/05 17:34:46 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_atoi(const char *nptr)
{
    int i;
    int sign;
    int result;

    i = 0;
    sign = 1;
    result = 0;
    while (nptr[i] == ' ' || nptr[i] == '\t' || nptr[i] == '\n' || nptr[i] == '\v' || nptr[i] == '\f' || nptr[i] == '\r')
        i++;
    if (nptr[i] == '-')
    {
        sign = -1;
        i++;
    }
    else if (nptr[i] == '+')
        i++;
    while (nptr[i] >= '0' && nptr[i] <= '9')
    {
        result = result * 10 + nptr[i] - '0';
        i++;
    }
    return (result * sign);
}
