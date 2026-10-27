/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anrassou <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/26 19:23:59 by anrassou          #+#    #+#             */
/*   Updated: 2026/10/26 19:24:00 by anrassou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	size_t	i;
	size_t	j;
	char	*nbig;
	char	*nlittle;

	i = 0;
	j = 0;
	nbig = (char *)big;
	nlittle = (char *)little;
	if (nlittle[j] == '\0')
		return (&nbig[i]);
	while ((i < len) && (nbig[i] != '\0'))
	{
		j = 0;
		while ((nbig[i] == nlittle[j]) && (i < len))
		{
			i++;
			j++;
			if (nlittle[j] == '\0')
				return (&nbig[i - j]);
		}
		i = i - j;
		i++;
	}
	return (NULL);
}
