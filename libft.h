/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: azall <azall@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/04 17:03:47 by abonneau          #+#    #+#             */
/*   Updated: 2024/11/11 17:41:00 by azall            ###   ########.fr       */
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

void	*ft_memset(void *ptr, int c, size_t n);

void	*ft_memchr(const void *memoryBlock, int searchedChar, size_t size);

char	**ft_split(char const *s, char c);

char	*ft_strchr(const char *string, int searchedChar);

char	*ft_strrchr(const char *string, int searchedChar);

size_t	ft_strlcat(char *dst, const char *src, size_t size);

size_t	ft_strlcpy(char *dst, const char *src, size_t size);

size_t	ft_strlen(const char *s);

int		ft_strncmp(const char *s1, const char *s2, size_t n);

int		ft_tolower(int character);

int		ft_toupper(int character);

int		ft_isalnum(int character);

void	ft_bzero(void *s, size_t n);

int		ft_atoi(const char *nptr);

char	*ft_strnstr(const char *str, const char *pattern, size_t len);

int		ft_memcmp(const void *pointer1, const void *pointer2, size_t size);

void	*ft_calloc(size_t elementCount, size_t elementSize);

char	*ft_strdup(const char *string);

char	*ft_substr(char const *s, unsigned int start, size_t len);

char	*ft_strjoin(char const *s1, char const *s2);

char	*ft_strtrim(char const *s1, char const *set);

char	*ft_itoa(int n);

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char));

void	ft_striteri(char *s, void (*f)(unsigned int, char*));

#endif