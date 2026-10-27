/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anrassou <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/26 19:24:25 by anrassou          #+#    #+#             */
/*   Updated: 2026/10/26 19:24:26 by anrassou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t	ft_count_start_cpy(char const *s1, char const *set)
{
	size_t	i;
	size_t	j;

	i = 0;
	j = 0;
	while ((set[j] != '\0') && (s1[i] != '\0'))
	{
		if (set[j] == s1[i])
		{
			i++;
			j = 0;
		}
		else
			j++;
	}
	return (i);
}

static size_t	ft_count_end_cpy(size_t i, char const *s1, char const *set)
{
	size_t	j;

	i = i - 1;
	j = 0;
	while (set[j] != '\0')
	{
		if (set[j] == s1[i])
		{
			i--;
			j = 0;
		}
		else
			j++;
	}
	return (i);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	size_t	i;
	size_t	j;
	size_t	start;
	char	*news;

	start = ft_count_start_cpy(s1, set);
	i = ft_strlen (s1);
	if (start == i)
	{
		news = ft_strdup("");
		return (news);
	}
	i = ft_count_end_cpy(i, s1, set);
	j = 0;
	news = malloc((i + 1 - start) * sizeof(char) + 1);
	if (news == NULL)
		return (NULL);
	while (start <= i)
	{
		news[j] = s1[start];
		start++;
		j++;
	}
	news[j] = '\0';
	return (news);
}
