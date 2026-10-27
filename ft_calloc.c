/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anrassou <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/26 19:16:00 by anrassou          #+#    #+#             */
/*   Updated: 2026/10/26 19:16:06 by anrassou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

void	*ft_calloc(size_t n, size_t size)
{
	char	*nsize;

	if ((size == 0) || (n == 0))
	{
		return (malloc(0));
	}
	if (size > 18446744073709551615UL / n)
		return (NULL);
	nsize = malloc(n * size);
	if (nsize == NULL)
		return (NULL);
	ft_bzero(nsize, n * size);
	return (nsize);
}
