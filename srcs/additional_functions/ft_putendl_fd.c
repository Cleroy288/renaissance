/*
Parameters
	s:  The string to output.
	fd:  The file descriptor on which to write.
Description
	Outputs the string ’s’ to the given file descriptor
	followed by a newline.
*/

#include <unistd.h>

void	ft_f(char *s, int fd, int i)
{
	if (s)
		while (s[++i])
			write (fd, &s[i], 1);
}

void 	ft_putendl_fd(char *s, int fd)
{
	if (!s)
		return ;
	if (fd < -1)
		return ;
	ft_f(s, fd, -1);
	write (fd, "\n", 1);
}

int	main()
{
	ft_putendl_fd("bonjour les gens", 0);
}
