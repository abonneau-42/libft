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

#include <stdlib.h>

int	ft_include(char str, char *chars)
{
	int	i;

	i = -1;
	while (chars[++i])
		if (str == chars[i])
			return (1);
	return (0);
}

int	ft_countword(char *str, char *chars)
{
	int	count_word;

	count_word = 0;
	while (*str)
	{
		if (!ft_include(*str, chars))
		{
			while (*str && !ft_include(*str, chars))
				str++;
			count_word++;
		}
		str++;
	}
	return (count_word);
}

int	len_to_delimiter(char *str, char *chars)
{
	int	len;

	len = -1;
	while (str[++len])
		if (ft_include(str[len], chars))
			return (len);
	return (len);
}

char	**ft_split(char *str, char *charset)
{
	char	**tab;
	int		j;
	int		k;

	j = 0;
	tab = malloc((ft_countword(str, charset) + 1) * sizeof(char *));
	if (!tab)
		return (NULL);
	str--;
	while (*(++str))
	{
		if (!ft_include(*str, charset))
		{
			tab[j] = malloc((len_to_delimiter(str, charset) + 1)
					* sizeof(char));
			if (!tab[j])
				return (NULL);
			k = 0;
			while (*str && !ft_include(*str, charset))
				tab[j][k++] = *(str++);
			tab[j++][k] = '\0';
		}
	}
	tab[j] = NULL;
	return (tab);
}

/*
#include <stdio.h>

int	main(int argc, char **argv)
{
	char	**tab;
	(void)argc;

	tab = ft_split(argv[1], argv[2]);
	while (*tab)
	{
		printf("%s\n", *tab);
		free(*tab);
		tab++;
	}
}
*/
