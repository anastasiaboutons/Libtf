#include <stdio.h>
#include <stdlib.h>

char *ft_substr(char const *s, unsigned int start, size_t len)
{
	size_t	i;
	i = 0;
	size_t	j;
	j = 0;
	char	*news;

	while (s[i] != '\0')
		i ++;
	if (start > i)
	{
		news = malloc(1);
		news[0] = '\0';
		return (news);
	}
	i = (size_t)start;
	while ((s[i] != '\0') && (i - start < len))
		i++;
	news = malloc((i - start) * sizeof(char)+1);
	if (news == NULL)
		return (NULL);
	i = (size_t)start;	
	while ((s[i] != '\0') && (i - start < len))
	{
		news[j] = s[i];
		i++;
		j++;
	}
	news[j] = '\0';
	return (news);
}

int	main()
{
	char const a[] = "Salut moi c'est";
	printf("%s", ft_substr(a, 7, 4));
}
