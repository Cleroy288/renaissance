#include <stdio.h>
#include <stdlib.h>

int	ft_len(int nbr)
{
	int	len;

	len = 0;
	if (nbr < 0)
	{
		len++;
		nbr *= -1;
	}
	while (nbr > 0)
	{
		len++;
		nbr /= 10;
	}
	return (len);
}

char	*ft_itoa(int nbr)
{
	int	i;
	int	len = ft_len(nbr);
	char	*str;
	str = malloc(sizeof(char) * len + 1);
	i = len;
	i--;
	str[i] = '\0';
	if (nbr == 0)
	{
		str[0] = '0';
		return (str);
	}
	if (nbr < 0)
	{
		str[0] = '-';
		nbr *= -1;
	}
	while (nbr > 0)
	{
		str[i] = '0' + (nbr % 10);
		i--;
		nbr /= 10;
	}
	return (str);

}

int main()
{
	printf("%s\n", ft_itoa(-0));
}
