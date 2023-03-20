/*
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

*/

#include "../libft.h"

int	ft_atoi(const char *str)
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
/*
int	main(int argc, char **argv)
{
	printf("test ft => %d\n", ft_atoi(argv[1]));
	printf("test vrai fonction => %d\n", atoi(argv[1]));
}*/
