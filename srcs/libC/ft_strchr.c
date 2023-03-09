#include <stdio.h>
#include <string.h>

char *ft_strchr(const char *str, int c)
{
	size_t	i;

	i = 0;
	if (c == 0)
		return ("\0");
	while ((unsigned char)str[i])
	{
		if ((unsigned char)str[i] == (unsigned char)c)
			return ((char *)&str[i]);
		i++;
	}
	return (0);
}

int	main(int argc, char **argv)
{
	if (argc == 3)
	{
		char	*str = ft_strchr(argv[1], argv[2][0]);
		printf("caractère rehcerché <<%c>>, retour ft => <<%s>>\n", argv[2][0], str);
		str = NULL;
		char	*str2 = strchr(str, argv[2][0]);
		printf("caractère recherché <<%c>>, retour vrai fonction <<%s>>\n", argv[2][0], str2);
	}
}
