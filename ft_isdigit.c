/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isdigit.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abonneau <abonneau@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/04 14:02:38 by abonneau          #+#    #+#             */
/*   Updated: 2024/11/04 14:37:35 by abonneau         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int ft_isdigit( int character )
{
    if (character >= '0' && character <= '9')
        return (1);
    return (0);
}