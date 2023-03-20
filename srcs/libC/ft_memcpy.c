//#include <stdlib.h>

#include "../libft.h"

void	*ft_memcpy(void *restrict dst, const void *restrict src, size_t n)
{
	size_t			i;
	const unsigned char	*s;
	unsigned char		*d;

	i = -1;
	s = src;
	d = dst;
	while (++i < n)
		d[i] = s[i];
	return (dst);

}

/*
int	ft_atoi(char *str)
{
	int res = 0;
	int i = 0;
	while (str[i] == 32)
		i++;
	while (str[i] >= '0' && str[i] <= '9')
	{
		res = res * 10 + str[i] - '0';
		i++;
	}
	return (res);
}

#include <stdio.h>
int	main(int argc, char **argv)
{
	if (argc == 3)
	{
		char *src = argv[1];
		char *ret;
		int	nb = ft_atoi(argv[2]);
		char dest[nb];

		ret = ft_memcpy(dest, src, nb);
		printf("%s", ret);
	}
	return (0);
}*/
