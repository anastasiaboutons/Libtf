#include <stdio.h>
#include <string.h>
size_t	ft_strlcpy(char *dst, const char *src, size_t dsize)
{
	size_t	i;
	i = 0;

	if (dsize != 0)
	{
		while ((i < dsize - 1) && (src[i] != '\0'))
		{
			dst[i] = src[i];
			i++; 
		}
		dst [i] = '\0';
	}
	i = 0;
	while (src[i] != '\0')
		i++;
	return (i);

}

int	main()
{
	char a[] = "Salut l'équipe";
	char bm[] = "hello";
	char bf[] = "hello";
	ft_strlcpy(bm, a, 3);
	strlcpy(bf, a, 3);
	printf("%s\n", bm);
	printf("%s\n", bf);
	printf("%ld\n",ft_strlcpy(bm, a, 3));
	printf("%ld\n",strlcpy(bf, a, 3));
}
