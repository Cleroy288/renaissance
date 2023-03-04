#include <stdlib.h>
/*
The bzero() function writes n zeroed bytes to the string s.  If n is zero, bzero() does nothing.
*/
void	ft_bzero(void *s, size_t n)
{
	unsigned char *str;
	size_t	i;

	str = s;
	i = 0;
	while (i != n)
	{
		str[i] = 0;
		i++;
	}
}

#include <stdio.h>
#include <libc.h>
int	main(int argc, char **argv)
{
	if (argc == 3)
	{
		argv[2] = argv[1];
		size_t n = 1;
		size_t i = 0;
		printf("avant ma fonction; <%s>\n", argv[1]);
		printf("argv2 avant <%s>\n", argv[2]);
		ft_bzero(argv[1], n);
		bzero(argv[2], n);
		printf("apres ma fonction; <%s>\n", argv[1]);
		printf("argv_2 apres la vraie fonction ; <%s>\n", argv[2]);
		
	}
}

