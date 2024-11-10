/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isprint.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abonneau <abonneau@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/04 14:12:11 by abonneau          #+#    #+#             */
/*   Updated: 2024/11/04 17:48:18 by abonneau         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isprint( int character )
{
	return (character >= 32 && character <= 126);
}

// #include <string.h>
// #include <stdio.h>
// #include <ctype.h>

// int main()
// {
// 	char c = 126;

// 	// test between 0 qnd 128 ft_isprint vs isprint width for

// 	for (int i = 0; i < 128; i++)
// 	{
// 		printf("%i : %d | %d\n", i, ft_isprint(i), isprint(i));
// 	}
// 	return 0;
// }