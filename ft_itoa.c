/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anrassou <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/26 19:17:51 by anrassou          #+#    #+#             */
/*   Updated: 2026/10/26 19:17:55 by anrassou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_count_i(int n)
{
	size_t	i;
	long	nbr;

	nbr = n;
	i = 0;
	if (nbr < 0)
	{
		nbr = nbr * (-1);
		i++;
	}
	while ((nbr) > 0)
	{
		nbr = nbr / 10;
		i++;
	}
	return (i);
}

static char	*str_creation(int n, size_t i, char *str)
{
	long	nbr;

	nbr = n;
	if (nbr < 0)
	{
		str[0] = '-';
		nbr = nbr * (-1);
	}
	str[i] = '\0';
	while ((nbr) > 0)
	{
		i--;
		str[i] = (nbr % 10) + '0';
		nbr = nbr / 10;
	}
	return (str);
}

char	*ft_itoa(int n)
{
	size_t	i;
	char	*str;

	i = 0;
	if (n == 0)
	{
		str = malloc(1 * sizeof(char) + 1);
		if (str == NULL)
			return (NULL);
		str[i] = '0';
		str[i + 1] = '\0';
		return (str);
	}
	i = ft_count_i(n);
	str = malloc(i * sizeof(char) + 1);
	if (str == NULL)
		return (NULL);
	str = str_creation(n, i, str);
	return (str);
}
