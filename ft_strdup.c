/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anrassou <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/26 19:22:34 by anrassou          #+#    #+#             */
/*   Updated: 2026/10/26 19:22:36 by anrassou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s)
{
	char	*snew;
	size_t	i;

	i = 0;
	while (s[i] != '\0')
		i++;
	snew = malloc(i * sizeof(char) + 1);
	i = 0;
	if (snew == NULL)
		return (NULL);
	while (s[i] != '\0')
	{
		snew[i] = s[i];
		i++;
	}
	snew[i] = '\0';
	return (snew);
}
