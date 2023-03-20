/*#include <stdio.h>
#include <libc.h>
#include <string.h>
*/

#include "../libft.h"

size_t	ft_strlcpy(char *dst, const char *src, size_t dstsize)
{
	size_t	i;

	i = -1;
	if (!dst || !src)
		return (0);
	if (dstsize != 0)
	{
		while (++i < (dstsize) && src[i])
			dst[i] = src[i];
		dst[i] = '\0';
	}
	return (i);
}
/*
size_t	ft_strlen(const char *str)
{
	size_t i = -1;
	while (str[++i])
		;
	return (i);
}

int	main(int argc, char **argv)
{
	char dest2[10] = "";
	char dest3[10] = "";

	char	*str = argv[1];

	int b = ft_strlcpy(dest2, str, 100);
	int z = strlcpy(dest3, str, 7);

	printf("ft_strlcpy <<%s>>\n", dest2);
	printf("len ft_strlcpy ; %d\n", b);

	printf("strlcpy <<%s>>\n", dest3);
	printf("len strlcpy ; %d\n", z);
}*/
