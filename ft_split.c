#include <stdio.h>
#include <stdlib.h>

char **ft_split(char const *s, char c)
{
	char	**tab;
	size_t	i;
	size_t	j;
	size_t	k;
	size_t max;
	size_t len;
	len = 0;
	i = 0;
	j = 0;
	k = 0;

	if (s == NULL)
		return (NULL);

	while (s[i] == c)
		i++;
	if (s[i] == '\0')
	{
		tab = malloc(1 * sizeof(char*));
		if (tab == NULL)
			return (NULL);
		tab[0] = NULL;
		return (tab);
	}
	while (s[j] != 0)
		j++;
	j = j - 1;
	
	while ((s[j] == c)
		j--;
	max = j;

	while (i < j)
	{
		if (s[j] == c)
		{
			k++;
			j--;
		}
		else
			j--;
	}
	tab = malloc((k+2) * sizeof(char*));
	if (tab == NULL)
		return (NULL);
	k = 0;
	j = 0;
	while ((s[i] != '\0') && (i <= max))
	{
		if (s[i] != c)
		{
			if (k == 0)
			{
			       	while ((s[i + len] != c) && (s[i + len] != '\0'))
					len ++;
				tab[j] = malloc(len * sizeof(char) + 1);
				if (tab[j] == NULL)
				{
					while(j > 0)
					{
						j--;
						free(tab[j]);
					}
					free(tab);
					return (NULL);
				}
				len = 0;
			}

			tab[j][k] = s[i];
			i++;
			k++;
		}
		else 
		{
			tab[j][k] = '\0';
			j++;
			k = 0;
			while (s[i] == c)
				i++;
		}
	}
	tab[j][k] = '\0';
	tab[j + 1] = NULL;
	return (tab);

}

int	main(void)
{
	char	**tab;
	int		i;

	tab = ft_split("  salut   les  amis ", ' ');
	if (tab == NULL)
		return (1);
	i = 0;
	while (tab[i] != NULL)
	{
		printf("[%s]\n", tab[i]);
		i++;
	}
	return (0);
}
