/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   tolower.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abonneau <abonneau@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/04 16:11:38 by abonneau          #+#    #+#             */
/*   Updated: 2024/11/04 16:13:03 by abonneau         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int tolower(int character)
{
    if (character >= 'a' && character <= 'z')
        return (character + 32)
    return (character)
}