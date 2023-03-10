#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char	*ft_strdup(const char* s)
{
	unsigned char	*s2;
	size_t	i;

	i = -1;
	s2 = malloc(sizeof(((unsigned char *)s) + 1));
	if (!s2)
		return (0);
	while (((unsigned char *)s)[++i])
		s2[i] = s[i];
	return ((char *)s);
}

int	main(int argc, char **argv)
{
	char	*s1 = argv[1];
	char	*s2 = ft_strdup(s1);

	char	*s1_2 = "je suis choqué ça a compilé du premier coup";
	char	*s2_2 = strdup(s1_2);

	printf("et voila le trvail de ft_ => <<%s>>\n", s2);
	printf("et voila le trvail de la vrai fonction ==> <<%s>>\n", s2_2);

	s1_2 = NULL;
	s2_2 = strdup(s1_2);
	printf("%s\n", s2_2);
}
