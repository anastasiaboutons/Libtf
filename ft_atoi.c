/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anrassou <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/26 19:15:21 by anrassou          #+#    #+#             */
/*   Updated: 2026/10/26 19:15:28 by anrassou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_atoi(const char *nptr)
{
	size_t	i;
	int		negatif;
	int		n;
	char	*nnptr;

	i = 0;
	negatif = 1;
	n = 0;
	nnptr = (char *)nptr;
	if (nnptr[i] == '\0')
		return (0);
	while (((nnptr[i] == ' ') || ((nnptr[i] >= 9) && (nnptr[i] <= 13))))
		i++;
	if ((nnptr[i] == '+') || (nnptr[i] == '-'))
	{
		if (nnptr[i] == '-')
			negatif = -1;
		i++;
	}
	while ((nnptr[i] >= '0') && (nnptr[i] <= '9'))
	{
		n = n * 10 + (nnptr[i] - '0');
		i++;
	}
	return (n * negatif);
}
