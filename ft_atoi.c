#include <stdlib.h>
#include <stdio.h>
int	ft_atoi(const char *nptr)
{
	size_t	i;
	i = 0;
	int	negatif;
	negatif = 1;
	int	n;
	n = 0;

	char	*nnptr;
	nnptr = (char *)nptr;

	if (nnptr[i] == '\0')
		return (0);
	while (((nnptr[i] == ' ') || ((nnptr[i] >= 9) && (nnptr[i] <= 13))))
		i++;
	if ((nnptr[i] == '+') || (nnptr[i] == '-'))
	{
		if (nnptr[i] == '-')
		{
			negatif = -1;
			i++;
		}
		else
			i++;
	}
	while ((nnptr[i] >= '0') && (nnptr[i] <= '9'))
	{
		n = n * 10 + (nnptr[i] - '0');
		i++;
	}
	return (n * negatif);
}

int	main()
{
	char a[] = "+-az265f";
	printf("%d", ft_atoi(a));
	printf("%d", atoi(a));
}
