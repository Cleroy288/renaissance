/*
Parameters
	n:  The integer to output.
	fd:  The file descriptor on which to write.
Description
	Outputs the integer ’n’ to the given file
	descriptor.
*/

#include <unistd.h>

void	f(int n, int fd)
{
	if (n == -2147483648)
		write (fd, "-2147483648", 11);
	if (n < 0)
		n *= -1;
	if  (n > 9)
		f(n / 10, fd);
	write (fd, &"0123456789"[n % 10], 1);
}

void ft_putnbr_fd(int n, int fd)
{
	if (n < 0)
		write (fd, "-", 1);
	f(n, fd);
}

int	main()
{
	int fd = 0;
	ft_putnbr_fd(-100, fd);
}
