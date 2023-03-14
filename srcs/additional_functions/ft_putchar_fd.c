/*
Parameters
	c:  The character to output.
	fd:  The file descriptor on which to write.
Description
	Outputs the character ’c’ to the given file
	descriptor.
*/

#include<unistd.h>

void ft_putchar_fd(char c, int fd)
{
	if (c)
		write (fd, &c, 1);
}

int	main()
{
	int	fd = 0; //sortie standart;
	ft_putchar_fd('c', fd);
}
