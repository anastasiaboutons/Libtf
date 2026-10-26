#include <string.h>

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	size_t	i;
	unsigned char	*ndest;
	unsigned char	*nsrc;

	i = 0;
	ndest = (unsigned char *)dest;
	nsrc = (unsigned char *)src;
	if (ndest > nsrc)
	{
		while (n != 0)
		{
			n--;
			ndest[n] = nsrc[n];
		}
	}
	else
	{
		while (i != n)
		{
			ndest[i] = nsrc[i];
			i++;
		}
	}
	while (ndest[i] != '\0')
	{
		ndest[i] = ndest[i];
		i++;
	}
	ndest[i] = '\0';
	return (ndest);
}
