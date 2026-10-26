#include <string.h>
#include <stdio.h>

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	size_t	i;
	i = 0;

	unsigned char	*str1; 
	str1 = (unsigned char *)s1; 
	unsigned char	*str2;
	str2 = (unsigned char *)s2;

	while ((str1[i] != '\0') && (str2[i] != '\0') && (i < n))
	{
		if (str1[i] != str2[i])
			return (str1[i] - str2[i]);
		else 
			i++;
	}
	return(0);
}

int	main()
{
	unsigned char a[] = "Bonjour";
	unsigned char b[] = "onjour"; 
	printf("%d\n", ft_memcmp(a, b, 3));
	printf("%d\n", memcmp(a, b, 3));
}
