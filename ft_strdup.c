#include <string.h>
#include <stdlib.h>

char	*ft_strdup(const char *s)
{
	char	*snew;
	size_t	i;

	i = 0;
	while (s[i] != '\0')
		i++;
	snew = malloc(i * sizeof(char) + 1);
	i = 0;
	if (snew == NULL)
		return (NULL);
	while (s[i] != '\0')
	{
		snew[i] = s[i];
		i++;
	}
	snew[i] = '\0';
	return (snew);
}
