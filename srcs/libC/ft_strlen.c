
//#include <stdlib.h>

#include "../libft.h"

size_t	ft_strlen(const char *s)
{
	size_t	i;

	i = -1;
	while (s[++i])
		;
	return (i);
}
/*
#include <stdio.h>

int main( int argc, char **argv)
{
	if (argc > 1)
	{
		int i = 1;
		while (argv[i])
		{
			printf("%zu\n", ft_strlen(argv[i]));
			i++;
		}
	}
}*/
