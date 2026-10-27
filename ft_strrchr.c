/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anrassou <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/22 13:35:03 by anrassou          #+#    #+#             */
/*   Updated: 2026/10/22 13:44:05 by anrassou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>

char	*ft_strrchr(const char *s, int c)
{
	size_t	i;
	char	*str;

	c = (char)c;
	i = 0;
	str = (char *)s;
	if ((str[0] == '\0') && (c == '\0'))
		return (&str[0]);
	while (str[i] != '\0')
		i++;
	while (i + 1 > 0)
	{
		if (str[i] == c)
			return (&str[i]);
		i--;
	}
	return (NULL);
}
