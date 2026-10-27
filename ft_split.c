/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anrassou <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/26 19:21:53 by anrassou          #+#    #+#             */
/*   Updated: 2026/10/26 19:21:55 by anrassou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t	ft_count_words(char const *s, char c)
{
	size_t	i;
	size_t	k;

	i = 0;
	k = 0;
	while (s[i] != '\0')
	{
		while ((s[i] == c) && (s[i] != '\0'))
			i++;
		if (s[i] != '\0')
			k++;
		while ((s[i] != c) && (s[i] != '\0'))
			i++;
	}
	return (k);
}

static size_t	ft_word_len(char const *s, char c)
{
	size_t	len;

	len = 0;
	while ((s[len] != c) && (s[len] != '\0'))
		len++;
	return (len);
}

static char	**ft_free_all(char **tab, size_t j)
{
	while (j > 0)
	{
		j--;
		free(tab[j]);
	}
	free(tab);
	return (NULL);
}

static char	**ft_fill(char **tab, char const *s, char c, size_t k)
{
	size_t	i;
	size_t	j;
	size_t	len;

	i = 0;
	j = 0;
	while (j < k)
	{
		while (s[i] == c)
			i++;
		len = ft_word_len(&s[i], c);
		tab[j] = ft_substr(s, i, len);
		if (tab[j] == NULL)
			return (ft_free_all(tab, j));
		i = i + len;
		j++;
	}
	tab[j] = NULL;
	return (tab);
}

char	**ft_split(char const *s, char c)
{
	char	**tab;
	size_t	k;

	if (s == NULL)
		return (NULL);
	k = ft_count_words(s, c);
	tab = malloc((k + 1) * sizeof(char *));
	if (tab == NULL)
		return (NULL);
	return (ft_fill(tab, s, c, k));
}
