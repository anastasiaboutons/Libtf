/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anrassou <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/26 19:19:43 by anrassou          #+#    #+#             */
/*   Updated: 2026/10/26 19:19:46 by anrassou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	size_t			i;
	unsigned char	*str;

	c = (unsigned char)c;
	i = 0;
	str = (unsigned char *)s;
	while (i < n)
	{
		if (str[i] == c)
			return (&str[i]);
		else
			i++;
	}
	return (NULL);
}
