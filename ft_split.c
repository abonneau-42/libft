/* ************************************************************************** */
/*									      */
/*							  :::	   ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*						      +:+ +:+	      +:+     */
/*   By: abonneau <marvin@42.fr>		    +#+  +:+	   +#+	      */
/*						  +#+#+#+#+#+	+#+	      */
/*   Created: 2024/07/18 23:50:10 by abonneau	       #+#    #+#	      */
/*   Updated: 2024/07/24 00:30:40 by abonneau         ###   ########.fr       */
/*									      */
/* ************************************************************************** */

#include "libft.h"

static void	*free_tab(char **tab, int j)
{
	while (j >= 0)
		free(tab[j--]);
	free(tab);
	return (NULL);
}

static int	ft_count_words(const char *s, char c)
{
	int	count;

	count = 0;
	while (*s)
	{
		if (*s != c)
		{
			count++;
			while (*s && *s != c)
				s++;
		}
		else
			s++;
	}
	return (count);
}

static char	*ft_strndup(const char *s, size_t n)
{
	char	*str;

	str = (char *)malloc(n + 1);
	if (!str)
		return (NULL);
	str[n] = '\0';
	while (n--)
		str[n] = s[n];
	return (str);
}

static char	*get_word(const char *s, char c, size_t *k)
{
	*k = 0;
	while (s[*k] && s[*k] != c)
		(*k)++;
	return (ft_strndup(s, *k));
}

char	**ft_split(const char *s, char c)
{
	char	**tab;
	int		i;
	size_t	j;

	i = 0;
	if (!s)
		return (NULL);
	tab = (char **)malloc(sizeof(char *) * (ft_count_words(s, c) + 1));
	if (!tab)
		return (NULL);
	while (*s)
	{
		if (*s != c)
		{
			tab[i] = get_word(s, c, &j);
			if (!tab[i])
				return (free_tab(tab, i));
			i++;
			s += j;
		}
		else
			s++;
	}
	tab[i] = NULL;
	return (tab);
}
/*
#include <stdio.h>
int	main(void)
{
	char	**tab;
	int		i;

	tab = ft_split("Hello World", ' ');
	i = 0;
	while (tab[i])
	{
		// printf("%s\n", tab[i]);
		i++;
	}
	return (0);
}*/