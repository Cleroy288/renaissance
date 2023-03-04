#include <stdlib.h>

void	*ft_memset(void *b, int c, size_t len)
{
	unsigned char *ptr;
	size_t i;

	ptr = (unsigned char*)b;
	i = 0;
	while (len > 0)
	{
		ptr[i] = (unsigned char)c;
		len--;
		i++;
	}
	return (b);
}

#include <stdio.h>

int	main(int argc, char **argv)
{
	if (argc == 2)
	{
		int c = 'l';
		
		printf("avant => %s\n", argv[1]);
		ft_memset(argv[1], c, 5);
		printf("apres => %s\n", argv[1]);
		int i = 0;
		int count = 0;
		while (argv[1][i])
		{
			if (argv[1][i] == c)
				count++;
			i++;
		}
		printf("nombre de cartères %d, (%c) dans la string mnt ; %d\n", c, c, count);
	}
}
