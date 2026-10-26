#include <unistd.h>

void	ft_putnbr_fd(int n, int fd)
{
	int	nbr;

	if (n == -2147483648)
	{
		n = 2147483648;
	       	write (fd, "-2147483648", 11);
		return;
	}	       

	if (n < 0)
	{
		n = n * (-1);
		write (fd, "-", 1);
	}
	if (n == 0)
	{
		write (fd, "0", 1);
		return;
	}
	

	if (n >= 10)
		ft_putnbr_fd((n/10), fd);
	nbr = (n % 10) + '0';
	write (fd, &nbr, 1); 
}

int	main()
{
	ft_putnbr_fd(145, 1);
}
