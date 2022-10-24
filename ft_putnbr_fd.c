
#include "libft.h"

void	ft_putnbr_fd(int n, int fd)
{
	long int	num;

	num = n;
	if (num < 0)
	{
		num = -num;
		ft_putchar_fd('-', fd);
	}
	if (num < 10)
		ft_putchar_fd(48 + num % 10, fd);
	else
	{
		ft_putnbr_fd(num / 10, fd);
		ft_putchar_fd(48 + num % 10, fd);
	}
}
