/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abonneau <abonneau@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/04 17:03:47 by abonneau          #+#    #+#             */
/*   Updated: 2024/11/06 15:20:53 by abonneau         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H

# include <stdlib.h>

/* FUNCTIONS */

int		ft_isalpha(int character);

int		ft_isascii(int character);

int		ft_isdigit(int character);

int		ft_isprint(int character);

void	*ft_memcpy(void *dest, const void *src, size_t n);

void	*ft_memmove(void *dest, const void *src, size_t n);

void	*ft_memset(void *s, int c, size_t n);

char	**ft_split(char *str, char *charset);

char	*strchr(const char *string, int searchedChar);

size_t	ft_strlcat(char *dst, const char *src, size_t size);

size_t	strlcpy(char *dst, const char *src, size_t size);

int		ft_strlen(const char *s);

int		ft_strncmp(const char *first, const char *second, size_t length);

char	*strnstr(const char *big, const char *little, size_t len);

char	*strrchr(const char *string, int searchedChar);

int		ft_tolower(int character);

int		ft_toupper(int character);

int		ft_isalnum(int character);

void	ft_bzero(void *s, size_t n);

int		ft_atoi(const char *nptr);

#endif