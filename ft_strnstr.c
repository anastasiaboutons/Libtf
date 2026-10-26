#include <bsd/string.h>
#include <stdio.h>
char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	size_t	i;
	i = 0;
	size_t	j; 
	j = 0;

	char	*nbig;
	nbig = (char *)big;
	char	*nlittle;
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
				return(&nbig[i - j]);
		}
		i = i - j;
		i++;
	}
	return (NULL);
}

int	main()
{
	const char a[] = "oui bonjour ca va ?";
	const char b[] = "bon";
	printf("%p\n", ft_strnstr(a, b, 10));
	printf("%p\n", strnstr(a, b, 10));
}
