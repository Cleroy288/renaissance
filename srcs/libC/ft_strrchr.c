#include <stdio.h>
#include <string.h>

int	ft_is_in(const char *str, int c)
{
	size_t i;

	i = -1;
	while (str[++i])
		if (str[i] == c)
			return (1);
	return (0);
}

char *ft_strrchr(const char *str, int c)
{
	size_t	i;
	size_t	j;

	i = -1;
	if (c == 0)
		return ("\0");
	if (ft_is_in(str, c) == 1)
	{
		while ((unsigned char)str[++i])
		{
			if ((unsigned char)str[i] == (unsigned char)c)
				j = i;
		}
		return ((char *)&str[j]);
	}
	return (0);
}

int	main(int argc, char **argv)
{
	if (argc == 3)
	{
		char	*str = ft_strrchr(argv[1], argv[2][0]);
		printf("caractère rehcerché <<%c>>, retour ft => <<%s>>\n", argv[2][0], str);
		char	*str2 = strrchr(str, argv[2][0]);
		printf("caractère recherché <<%c>>, retour vrai fonction <<%s>>\n", argv[2][0], str2);
	}
}
