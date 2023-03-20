/*
Parameters
	c:  The character to output.
	fd:  The file descriptor on which to write.
Description
	Outputs the character ’c’ to the given file
	descriptor.
*/
#include "../libft.h"

void ft_putchar_fd(char c, int fd)
{
	if (c)
		write (fd, &c, 1);
}

