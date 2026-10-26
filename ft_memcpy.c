#include <string.h>
#include <stdio.h> 

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	size_t	i;
	i = 0;

	unsigned char	*ndest;
	ndest = (unsigned char *)dest; 
	unsigned char	*nsrc; 
	nsrc = (unsigned char *)src;

	while (i != n)
	{
		ndest[i] = nsrc[i]; 
		i++;
	}
	ndest[i] = '\0';
	return (ndest); 
}

int	main()
{
	char str[] = "salut les loulous!";
	char dest[] = "12";
	ft_memcpy(dest, str, 5);
	printf("%s", dest);

}
