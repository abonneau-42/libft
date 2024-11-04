/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abonneau <abonneau@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/04 14:04:25 by abonneau          #+#    #+#             */
/*   Updated: 2024/11/04 14:37:00 by abonneau         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int ft_isalnum( int character )
{
    if ((character >= 'a' && character <= 'z') || (character >= 'A' && character <= 'Z') || (character >= '0' && character <= '9'))
        return (1);
    return (0);
}