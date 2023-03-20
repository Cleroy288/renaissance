//#include <stdio.h>
//#include <string.h>

#include "../libft.h"

//mine => handmade 
int ft_strncmp_2(const char *s1, const char *s2, size_t n)
{
	size_t	i;

	i = 0;
	while ((unsigned char)s1[i] == (unsigned char)s2[i] && i < n)
		i++;
	return (s1[i] - s2[i]);
}
/*
// exemple => pas le mien
int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	size_t			cnt;
	unsigned int	diff;

	cnt = 0;
	diff = 0;
	while ((cnt < n) && !diff && (s1[cnt] != 0) && (s2[cnt] != 0))
	{
		diff = (unsigned char)s1[cnt] - (unsigned char)s2[cnt];
		cnt++;
	}
	if (cnt < n && !diff && (s1[cnt] == 0 || s2[cnt] == 0))
		diff = (unsigned char)s1[cnt] - (unsigned char)s2[cnt];
	return (diff);
}

//partie test et main toi meme tu sais
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
		int	nb;
		nb = ft_atoi(argv[3]);
		char	*test = NULL;
		printf("nb => %d\n", nb);
		printf("result ft_1 => %d\n", ft_strncmp(argv[1], argv[2], nb));
		printf("result ft_2(mine) => %d\n", ft_strncmp_2(argv[1], argv[2], nb));
		printf("vrai fonction => %d\n", strncmp(argv[1], argv[2], nb));

}*/
