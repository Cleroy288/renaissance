/*
Return value
	The string representing the integer.
	NULL if the allocation fails.
Description
	Allocates (with malloc(3)) and returns a string
	representing the integer received as an argument.
	Negative numbers must be handled.
*/

#include "../libft.h"

int	ft_len(int n)
{
	int	len;

	len = 0;
	if (n < 0)
	{
		len++;
		n = -n;
	}
	while (n > 0 && ++len >= 0)
		n /= 10;
	return (len);
}

char *ft_itoa(int n)
{
	long int	len;
	char		*numb;

	len = ft_len(n);
	numb = malloc(sizeof(char) * (len + 1));
	len--;
	numb[len] = '\0';
	if (n == 0)
		numb[0] = '0';
	if (n < 0)
	{
		numb[0] = '-';
		n = -n;
	}
	while (n > 0)
	{
		numb[len] = '0' + (n % 10);
		len--;
		n /= 10;
	}
	return (numb);
}
/*
int	main()
{
	int	nb = 10000090;
	printf("%d => len\n", ft_len(nb));
	printf("%s result \n", ft_itoa(nb));
}*/
