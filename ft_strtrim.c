#include <stdio.h>
#include <stdlib.h>

char *ft_strtrim(char const *s1, char const *set)
{
	size_t	i;
	size_t	j;
	size_t	start;
	char	*news;
	i = 0;
	j = 0;
	while ((set[j] != '\0') && (s1[i] != '\0'))
	{
		if (set[j] == s1[i])
		{
			i++;
			j = 0;
		}
		else 
			j++;
	}
	start = i;
	printf("start : %ld\n", start);
	while (s1[i] != '\0')
		i ++;
	if (start == i)
	{
		news = malloc(1);
			if (news == NULL)
				return (NULL);
		news[0] = '\0';
		return (news);
	}
	i = i- 1;
	printf("i total : %ld\n", i);
	j = 0;
	while (set[j] != '\0')
	{
		if (set[j] == s1[i])
		{
			i--;
			j = 0;
		}
		else 
			j++;
	}
	j = 0;
	printf("i fin : %ld\n", i);
	news = malloc((i + 1 - start) * sizeof(char) +1);
	if (news == NULL)
		return (NULL);
	while (start <= i)
	{
		news[j] = s1[start];
		start++;
		j++;
	}
	printf("news : %s\n", news);
	news[j] = '\0';
	return (news);
}

int	main()
{
	const char a[] = "absalutba";
	const char b[] = "ab";
	printf("%s", ft_strtrim(a,b));
}
