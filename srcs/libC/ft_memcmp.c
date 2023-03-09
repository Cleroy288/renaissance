#include <stdio.h>
#include <string.h>

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	size_t	i;

	i = -1;
	while (++i < n - 1 && ((unsigned char *)s1)[i] == ((unsigned char *)s2)[i])
		;
	return (((unsigned char *)s1)[i] - ((unsigned char *)s2)[i]);
}

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
	size_t i = 0;
	while (argv[1][i])
	{
		printf("char == argv[1][%c] ==> index %zu\n", argv[1][i], i);
		i++;
	}
	i = 0;
	printf("==> argv[2]\n");
	while(argv[2][i])
	{
		printf("char == argv[2][%c] ==> index %zu\n", argv[2][i], i);
		i++;
	}
	printf("result ft_ (int) => %d\n", ft_memcmp(argv[1], argv[2], ft_atoi(argv[3])));
	printf("vrai funct (int) => %d\n", (memcmp(argv[1], argv[2], ft_atoi(argv[3]))));
}
