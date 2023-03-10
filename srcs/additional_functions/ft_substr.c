/*
Parameters

-s:  The string from which to create the substring.
-start:  The start index of the substring in the string ’s’.
-len:  The maximum length of the substring.

Return value => The substring. NULL if the allocation fails.

Description => 
Allocates (with malloc(3)) and returns a substring from the string ’s’.
The substring begins at index ’start’ and is of
maximum size ’len’.
*/

/*
retirer les explications du code ,
crash => no
return val => ok
protection => ok
*/
#include <stdio.h>
#include <stdlib.h>

size_t	ft_strlen(char const *s)
{
	size_t	i;

	i = -1;
	while (s[++i])
		;
	return (i);
}

char *ft_substr(char const *s, unsigned int start, size_t len)
{
	unsigned char		*s2;
	size_t			i;

	i = -1;
	if (!s || !start || !len)
		return (0);
	if ((long long int)len < 0)
		len *= -1;
	printf("len => %zu\n", len);
	if ((long long int)start < 0)
		start *= -1;
	printf ("start %d\n", start);
	if (len + start > ft_strlen(s))
	{
		printf("len + start (%lu) > ft_strlen(s) (%zu) == > return (0);\n", len + start, ft_strlen(s));
		return (0);
	}
	s2 = malloc(sizeof(char) * (len + 1));
	if (!s2)
		return (0);
	while (++i < len && (start <= start + len))
		s2[i] = s[start++];
	s2[len] = '\0';
	return ((char *)s2);
}

int	ft_atoi(char *str)
{
	int	sign;
	int	res;

	res = 0;
	sign = 1;
	int	i = 0;
	while (str[i] == 32)
		i++;
	if (str[i] == '-' || str[i] == '+')
	{
		sign *= -1 ;
		i++;
	}
	while (str[i] >= '0' && str[i] <= '9')
	{
		res = res * 10 + str[i] - '0';
		i++;
	}
	return (res * sign);
}

int	main(int argc, char **argv)
{;
	int	start = ft_atoi(argv[2]);
	int	len = ft_atoi(argv[3]);
	char	*s1 = ft_substr(argv[1], start, len);
	printf("start = > [%d], len = [%d], ft_strdup == > <<%s>>\n", start, len, s1);
	printf("longueur string ==> %zu\n", ft_strlen(argv[1]));
}
