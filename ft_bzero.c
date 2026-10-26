#include <strings.h>
#include <stdio.h>
void	ft_bzero(void *s, size_t n)
{
	size_t	i;
	i = 0;
	unsigned char *str; 
	str = (unsigned char *)s; 

	while (i != n)
	{
		str[i] = '\0'; 
		i++;
	}
}

int	main()
{
	char s[] = "Salut";
       char g[] = "Salut";	
	ft_bzero(s, 0);
	bzero(g, 0);
	printf("%d %d\n", s[0], s[1]);
	printf("%d %d\n", g[0], g[1]);
}
