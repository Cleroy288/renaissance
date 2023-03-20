//#include <string.h>
//#include <stdio.h>

#include "../libft.h"

/*
int	ft_strlen(const char *str)
{
	size_t	i;

	i = -1;
	while (str[++i])
		;
	return (i);
}
*/
int	ft_is_word(const char *str, int pos, const char *word, size_t len)
{
	size_t	i;

	i = 0;
	while (str[pos] == word[i] && (size_t)pos < len)
	{
		i++;
		pos++;
	}
	if (i == (ft_strlen(word)))
		return (1);
	else
		return (0);
}

char *ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t	i;
	size_t	j;

	i = 0;
	while (i < len)
	{
		j = 0;
		if (haystack[i] == needle[j] && ft_is_word(haystack, i, needle, len) == 1)
			return (&((char *)haystack)[i]);
		i++;
	}
	return (0);
}
/*
int	ft_atoi(char *str)
{
	int i = 0;
	int res = 0;
	int sign = 1;

	while (str[i] == 32)
		i++;
	if (str[i] == '-' || str[i] == '+')
	{
		if (str[i] == '-')
			sign *= -1;
		i++;
	}
	while (str[i] >= '0' && str[i] <= '9')
	{
		res = res * 10 + str[i] - 48;
		i++;
	}
	return (res * sign);
}

int	main(int argc, char **argv)
{
	printf("résultat de ft => %s\n", ft_strnstr(argv[1], argv[2], ft_atoi(argv[3])));
	printf("resultat vrai fonction => %s\n", strnstr(argv[1], argv[2], ft_atoi(argv[3])));
}
*/
