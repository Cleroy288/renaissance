/*
Parameters
	s1:  The string to be trimmed.
	set:  The reference set of characters to trim.
Return value
	The trimmed string.
	NULL if the allocation fails.
Description
	Allocates (with malloc(3)) and returns a copy of
	’s1’ with the characters specified in ’set’ removed
	from the beginning and the end of the string
*/

#include <stdio.h>
#include <stdlib.h>

int	ft_is_set(const char c, const char *set)
{
	size_t	i;

	i = -1;
	while (set[++i])
		if (c == set[i])
			return (1);
	return (0);
}

size_t	ft_new_len(char const *s1, char const *set)
{
	long long int	count;
	size_t		i;

	count = 0;
	i = -1;
	while (s1[++i])
	{
		if (ft_is_set(s1[i], set) == 1)
			count++;
	}
	return ((size_t)(i - count));
}

char *ft_strtrim(char const *s1, char const *set)
{
	unsigned char	*str;
	size_t		i;
	size_t		j;

	i = -1;
	j = -1;
	if (!str)
		return (0);
	if (!set)
		return ((char *)s1);
	str = malloc(sizeof(char) * (ft_new_len(s1, set) + 1));
	if (!str)
		return (0);
	while (s1[++i])
	{
		if (s1[i] && ft_is_set(s1[i], set) == 0)
			str[++j] = s1[i];
	}
	str[++j] = '\0';
	return ((char *)str);
}

int	main(int argc, char **argv)
{
	char	*str = ft_strtrim(argv[1], argv[2]);
	printf("résultat => <<%s>>\n", str);
}
