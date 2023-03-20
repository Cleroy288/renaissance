/*
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
*/

#include "../libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	unsigned char	*d;
	unsigned char	*s;

	d = (unsigned char *)dst;
	s = (unsigned char *)src;
	if (src < dst)
	{
		s = s + len - 1;
		d = d + len - 1;
		while (len--)
			*d-- = *s--;
	}
	else if (src >= dst && (dst || src))
	{
		while (len-- > 0)
			*d++ = *s++;
	}
	return (dst);
}
/*
int	ft_atoi(char *str)
{
	int	i = 0;
	int	res = 0;
	int	sign = 1;

	while (str[i] == 32)
		i++;
	if (str[i] == '-')
	{
		sign *= -1;
		i++;
	}
	while (str[i] >= '0' && str[i] <= '9')
	{
		res = res * 10 + str[i] - '0';
		i++;
	}
	return (sign * res);

	
}

int main(int argc, char **argv)
{
	if (argc == 4)
	{
		char *ret;
		char *ret2;

		ret = ft_memmove(argv[1], argv[2], ft_atoi(argv[3]));
		ret2 = memmove(argv[1], argv[2], ft_atoi(argv[3]));
		printf("ft_memmove ; <<%s>>\n", ret);
		printf("memmove ; <<%s>>\n", ret2);
	}
	return (0);
}
*/
/*
La fonction memmove permet de copier une zone de mémoire à une autre zone de mémoire. Contrairement à la fonction memcpy, elle permet de gérer les cas où les zones de mémoire source et de destination se chevauchent. Cela signifie que si vous voulez copier une zone de mémoire dans une autre zone qui se trouve en partie ou totalement dans la zone source, la fonction memmove permettra de gérer cela sans risquer d'écraser les données.

Le code que vous avez fourni implémente la fonction memmove en utilisant deux pointeurs d'octets non signés. Il commence par convertir les pointeurs void en pointeurs d'octets non signés pour pouvoir manipuler les données.

Ensuite, si la zone de destination est située avant la zone source, le code copie les octets en partant de la fin de la zone source jusqu'au début de la zone de destination. Cela se fait en décrémentant les pointeurs d'octets à chaque boucle, afin de reculer d'un octet à chaque fois.

Si la zone de destination se trouve après la zone source, le code copie simplement les octets de la zone source à la zone de destination.

Enfin, la fonction renvoie un pointeur vers la zone de destination.
*/
