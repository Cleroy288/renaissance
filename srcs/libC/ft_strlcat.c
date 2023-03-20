/*
#include <string.h>
#include <stdio.h>
*/
/*
size_t	ft_strlen(const char *str)
{
	size_t i = -1;
	while (str[++i])
		;
	return (i);
}
*/

#include "../libft.h"

int	ft_is_char(char c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
		return (1);
	return (0);
}

/*
si destsize > ft_strlen (dst) ==> juste renvoyer la longueur de dest, sinon retourner dstsize + strlen(src)
en cas normal return ;
*/
size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t	i;
	size_t	j;

	if (dstsize <= ft_strlen(dst) || src[0] == '\0')
		return (dstsize + ft_strlen(src));
	else if (dstsize > ft_strlen(dst))
		return (ft_strlen(dst));	
	j = ft_strlen(dst);
	i = 0;
	while (src[i] && (j + i < dstsize))
	{
		dst[j + i] = src[i];
		i++;
	}
	dst[j] = '\0';
	return (ft_strlen(dst) + ft_strlen(&src[i]));
}
/*
int				main(void)
{
	char			dest[50] = "sefs fesa";
	char			src[50] = "bonjour";
	unsigned int	size;

	size = 0;//ft_strlen(dest);
	printf("size => %d\n", size);
	printf("ft_strlen(dest) => %zu + ft_strlen(src) => %zu\n", ft_strlen(dest), ft_strlen(src));

	printf("strlcat ; %lu\n", strlcat(dest, src, size));
	printf("ft_strlcat ; %zu\n", ft_strlcat(dest, src, size));
	
	printf("ft_strlcat (dest) => <<%s>>\n", dest);
	printf("dest: <<%s>> src: <<%s>>\n", dest, src);
}*/
