#include <stdlib.h>
#include <stdio.h>

char	*ft_itoa(int n)
{
	size_t	i; 
	i = 0;
	long	nbr;
	nbr = n;
	char	*str;

	if (n == 0)
	{
		str = malloc(1 * sizeof(char) + 1);
		if (str == NULL)
			return (NULL);
		str[i] = '0';
		str[i + 1] = '\0'; 
		return(str);
	}

	if (nbr < 0)
	{
		nbr = nbr * (-1);
		i++;
	}
	while ((nbr) > 0)
	{
		nbr = nbr/10;
		i++;
	}

	str = malloc(i * sizeof(char) + 1);
	if (str == NULL)
		return (NULL);
	nbr = n;
	if(nbr < 0)
	{
		str[0] = '-';
		nbr = nbr * (-1);
	}

	str[i] = '\0';

	while ((nbr) > 0)
	{
		i--;
		str[i] = (nbr % 10) + '0';
		nbr = nbr/10;
	}
	return (str);
}

int	main()
{
	int n = 1526; 
	printf("%s\n", ft_itoa(n));
}

