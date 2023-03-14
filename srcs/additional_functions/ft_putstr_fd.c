/*
Parameters
	s:  The string to output.
	fd:  The file descriptor on which to write.
Description
	Outputs the string ’s’ to the given file
	descriptor.
*/

#include <unistd.h>

void ft_putstr_fd(char *s, int fd)
{
	int	i;

	i = -1;
	if (s)
		while (s[++i])
			write (fd, &s[i], 1);
}

int	main()
{
	int	fd = 0;
	char	*str = NULL;
	ft_putstr_fd("bonjour les gens", fd);
	ft_putstr_fd(str, fd);
}
