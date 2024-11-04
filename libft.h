/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abonneau <abonneau@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/04 17:03:47 by abonneau          #+#    #+#             */
/*   Updated: 2024/11/04 17:04:27 by abonneau         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H

# include <stdlib.h>

int		ft_isalpha(int character);
int		ft_isdigit(int character);
int		ft_strlen(const char *s);
void	*memcpy(void *dest, const void *src, size_t n);
void	*ft_memset(void *s, int c, size_t n);

#endif