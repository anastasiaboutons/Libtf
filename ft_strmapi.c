#include <stdio.h>
#include <stdlib.h>
char	f(unsigned int i, char c)
{
	(void)i;
	if (c >= 'a' && c <= 'z')
		return (c - 32);
	return (c);
}

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	unsigned int	i;
	i = 0;
	char	*str;

	if (s == NULL)
		return (NULL);

	while (s[i] != '\0')
	{
		i++;
	}

	str = malloc (i * sizeof(char) + 1);
	if (str == NULL)
		return (NULL);
	i = 0;

	while (s[i] != '\0')
	{
		str[i] = f(i, s[i]);
		i++;
	}
	str[i] = '\0';
	return (str);
}

int	main()
{
	char	s[] = "salut";
	printf("%s", ft_strmapi(s, f));

}
