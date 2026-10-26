#include <string.h>
#include <stdio.h>

void *ft_memmove(void *dest, const void *src, size_t n)
{
	size_t	i;
	i = 0;

	unsigned char *ndest;
	ndest = (unsigned char *)dest; 
	unsigned char *nsrc;
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
		ndest[i]= ndest[i];
		i++;
	}

	ndest[i] = '\0';
	return (ndest);
}

int	main()
{
	char f[] = "boutons";
	char m[] = "boutons";
	ft_memmove(m +2, m, 3);
	memmove(f +2, f, 3);
	printf("%s\n", m);
	printf("%s\n", f);
}
