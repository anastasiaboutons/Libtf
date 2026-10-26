#include <stdlib.h>

void	*ft_calloc(size_t n, size_t size)
{
	char	*nsize;

	if ((size == 0) || (n == 0))
	{
		return (malloc(0));
	}
	if (size > 18446744073709551615UL / n)
		return (NULL);
	nsize = malloc(n * size);
	if (nsize == NULL)
		return (NULL);
	ft_bzero(nsize, n * size);
	return (nsize);
}
