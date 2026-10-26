#include <string.h>

void	*ft_memset(void *s, int c, size_t n)
{
	size_t	i;
	unsigned char	*str;

	i = 0;
	str = (unsigned char *)s;
	while (n != i)
	{
		str[i] = c;
		i++;
	}
	return (str);
}
