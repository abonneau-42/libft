/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abonneau <abonneau@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/04 15:20:14 by abonneau          #+#    #+#             */
/*   Updated: 2024/11/04 16:13:33 by abonneau         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void *memmove(void *dest, const void *src, size_t n)
{
    int n_saved = n;

    copy = (char *) malloc((n + 1)* sizeof(char));
    
    copy[n] = '\0';
    
    while (--n)
        copy[n] = src[n];
    n = n_saved;
    while (--n)
        dest[n] = copy[n];
    free(copy)
}