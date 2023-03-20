
/*
Parameters;
	s1:  The prefix string.
	s2:  The suffix string.
Return value;
	The new string.
	NULL if the allocation fails.
Description;
	Allocates (with malloc(3)) and returns a new
	string, which is the result of the concatenation
	of ’s1’ and ’s2’.
*/

#include "../libft.h"

size_t	ft_strlen_2(char const *str)
{
	size_t i;

	i = -1;
	while (str[++i])
		;
	return (i);
}

size_t	ft_strlen_3(char const *s1, char const *s2)
{
	size_t	i;
	size_t	j;

	i = -1;
	j = -1;
	if (!s1 && !s2)
		return (0);
	if (!s1)
		return (ft_strlen_2(s2));
	if (!s2)
		return (ft_strlen_2(s1));
	while (s1[++i])
		;
	while (s2[++j])
		;
	return (i + j);
}

char *ft_strjoin(char const *s1, char const *s2)
{
	size_t		len_str;
	size_t		i;
	unsigned char	*str;

	str = NULL;
	len_str = -1;
	i = -1;
	if (!s1 && !s2)
		return (0);
	if (s1 || s2)
		str = malloc(sizeof(char) * (ft_strlen_3(s1, s2) + 1));
	if (!str)
		return (0);
	if (s1)
		while (s1[++i] && ++len_str == i)
			str[len_str] = s1[i];
	i = -1;
	if (s2)
		while (s2[++i] && ++len_str >= i)
			str[len_str] = s2[i];
	str[len_str + 1] = '\0';
	return ((char *)str);
}
/*
int	main(int argc, char **argv)
{
	char	*str_arg;

	if (argv[1] || argv[2])
		str_arg = ft_strjoin(argv[1], argv[2]);

	char	*str2 = NULL;"bon je suis pas sure ";
	char	*str3 = NULL;"mais si ca passe je suis un génie";
	char	*str = ft_strjoin(str2, str3);
	if (str2)
		printf("string str2[%zu] ==> <<%s>>\n", ft_strlen_2(str2), str2);
	if (str3)
		printf("string str3[%zu] ==> <<%s>>\n", ft_strlen_2(str3), str3);
	if (str)
		printf("string des str[%zu] ==> <<%s>>\n", ft_strlen_2(str), str);
	if (argv[1])
		printf("string argv[1][%zu] ==> <<%s>>\n", ft_strlen_2(argv[1]), argv[1]);
	if (argv[2])
		printf("string argv[2][%zu] ==> <<%s>>\n", ft_strlen_2(argv[2]), argv[2]);
	if (str_arg)
		printf("string str_arg[%zu] ==> <<%s>>\n", ft_strlen(argv[1], argv[2]), str_arg);
	
}*/
