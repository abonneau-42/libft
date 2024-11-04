/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abonneau <abonneau@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/04 13:41:58 by abonneau          #+#    #+#             */
/*   Updated: 2024/11/04 14:37:08 by abonneau         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int ft_isalpha(int character)
{
    if ((character >= 'a' && character <= 'z') || (character >= 'A' && character <= 'Z'))
        return (1);
    return (0);
}