/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anrassou <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/26 19:24:34 by anrassou          #+#    #+#             */
/*   Updated: 2026/10/26 19:24:36 by anrassou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	size_t	i;
	size_t	j;
	char	*news;

	j = 0;
	i = ft_strlen(s);
	if (start > i)
		return (news = ft_strdup(""));
	i = (size_t)start;
	while ((s[i] != '\0') && (i - start < len))
		i++;
	news = malloc((i - start) * sizeof(char) + 1);
	if (news == NULL)
		return (NULL);
	i = (size_t)start;
	while ((s[i] != '\0') && (i - start < len))
	{
		news[j] = s[i];
		i++;
		j++;
	}
	news[j] = '\0';
	return (news);
}
