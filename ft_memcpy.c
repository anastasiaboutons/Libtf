#include <string.h>

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	size_t	i;
	unsigned char	*ndest;
	unsigned char	*nsrc;

	i = 0;
	ndest = (unsigned char *)dest;
	nsrc = (unsigned char *)src;
	while (i != n)
	{
		ndest[i] = nsrc[i];
		i++;
	}
	ndest[i] = '\0';
	return (ndest);
}
