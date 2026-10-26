#include <unistd.h>

void	ft_putendl_fd(char *s, int fd)
{
	size_t	i;
	i = 0;

	while (s[i] != '\0')
	{
		write (fd, &s[i], 1);
		i++;
	}
	write (fd, "\n", 1);
}

int	main()
{
	char	s[] = "Saluttt";
	ft_putendl_fd(s, 1);
}

