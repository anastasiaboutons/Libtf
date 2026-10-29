/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anrassou <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/26 19:20:26 by anrassou          #+#    #+#             */
/*   Updated: 2026/10/26 19:20:28 by anrassou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	size_t			i;
	unsigned char	*ndest;
	unsigned char	*nsrc;

	i = 0;
	ndest = (unsigned char *)dest;
	nsrc = (unsigned char *)src;
	if (ndest > nsrc)
	{
		while (n != 0)
		{
			n--;
			ndest[n] = nsrc[n];
		}
	}
	else
	{
		while (i != n)
		{
			ndest[i] = nsrc[i];
			i++;
		}
	}
	return (ndest);
}
