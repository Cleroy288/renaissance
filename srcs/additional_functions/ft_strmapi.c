/*
Return value
	The string created from the successive applications
	of ’f’.
	Returns NULL if the allocation fails.
Description
	Applies the function ’f’ to each character of the
	string ’s’, and passing its index as first argument
	to create a new string (with malloc(3)) resulting
	from successive applications of ’f’.
*/

#include <stdio.h>
#include <stdlib.h>

int	ft_strlen(char const *s)
{
	int	i;

	i = -1;
	while (s[++i])
		;
	return (i);
}

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	char			*res;
	unsigned int		i;

	i = -1;
	res = malloc(sizeof(char) * (ft_strlen(s) + 1));
	if (!res)
		return (0);
	while (++i < ft_strlen(s))
		res[i] = f(i, s[i]);
	res[++i] = '\0';
	return (res);
}

char	ft_f(unsigned int pos, char c)
{
	printf("index => [%d], char =>%c\n", pos, c);
	return (c);
}

int	main()
{
	char	*str = ft_strmapi("bonjour", &ft_f);
}
