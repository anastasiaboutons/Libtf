#include <stdio.h>

void	*ft_memset(void *s, int c, size_t n)
{
	size_t	i;
	i = 0;
	unsigned char *str;
	str = (unsigned char *)s;

	while (n != i)
	{
		str[i] = c;
		i++;
	}
	return(str);
}

int	main()
{
	char s[] = "Salut";
	ft_memset(s, 'l', 3);
	printf("%s", s);
}
