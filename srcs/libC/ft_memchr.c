/*
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
*/

#include "../libft.h"

void	*ft_memchr(const void *str, int c, size_t n)
{
	size_t	i;
	unsigned char *str_1;

	str_1 = (unsigned char *)str;
	i = -1;
	while (++i < n)
	{
		if (((unsigned char *)str_1)[i] == (unsigned char)c)
			return ((void *)(str_1 + i));
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
*/
/*
./a.out "oui" 'o' 1
char == argv[1][o] ==> index 0
char == argv[1][u] ==> index 1
char == argv[1][i] ==> index 2
==> argv[2]
char == argv[2][o] ==> index 0
result ft_ => 1861695552
vrai funct => 1861695552

La valeur de retour que vous obtenez (1861695552) est un pointeur sur l'octet trouvé dans la plage de mémoire, 
exprimé en nombre entier.

Le pointeur est en fait une adresse de mémoire, qui est représentée en hexadécimal. Pour afficher cette adresse 
en décimal, le compilateur convertit l'adresse hexadécimale en nombre entier. C'est pourquoi la valeur que vous 
voyez est un nombre assez grand.
*/
/*
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
	printf("result ft_ (cast en char) => %s\n", (char *)ft_memchr(argv[1], argv[2][0], ft_atoi(argv[3])));
	printf("vrai funct(cast en char)  => %s\n", (char *)memchr(argv[1], argv[2][0], ft_atoi(argv[3])));

	printf("result ft_ (en int) => %d\n", ft_memchr(argv[1], argv[2][0], ft_atoi(argv[3])));
	printf("vrai funct (en int) => %d\n", (memchr(argv[1], argv[2][0], ft_atoi(argv[3]))));
}*/
