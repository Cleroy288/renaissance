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
	if (ft_memcmp(argv[1], argv[2], ft_atoi(argv[3])) != 0)
	{
		size_t	j = 0;
		printf("l'index a le pas dépaser est => %d\n", ft_atoi(argv[3]));
		while (argv[1][j] && argv[2][j] && j < ft_atoi(argv[3]) - 2)
		{
			while (argv[1][j] == argv[2][j])
			{
				printf("jusqua mnt c'est la même chose => argv[1][%c] à l'index => [%zu] et argv[2][%c] à l'index => [%zu]\n", argv[1][j], j, argv[2][j], j);
				j++;
			}
			if (argv[1][j] != argv[2][j])
				printf("la différence se situe a l'index => [%zu], sur la caractère de argv[1][%c] et argv[2][%c]\n", j, argv[1][j], argv[2][j]);
				break;
			j++;
		}
	}
	else
		printf("pas de diff entre argv[1] => <<%s>> et argv[2] => <<%s>>\n", argv[1], argv[2]);
}

/*
est il necessaire de cats selon gpt ? => Dans le code que vous avez partagé, il est utile de caster les pointeurs s1 et s2 en 
pointeurs vers unsigned char, car la fonction ft_memcmp() compare des données binaires (i.e., des octets). Si les pointeurs 
n'étaient pas castés, le compilateur pourrait générer des avertissements ou des erreurs pour vous informer que vous comparez des 
données de type différent.

Cela dit, le cast en "unsigned" n'est pas toujours nécessaire dans tous les cas. Tout dépend du contexte de votre application et 
du type de données que vous manipulez. Par exemple, si vous travaillez avec des chaînes de caractères ASCII qui ne contiennent que 
des caractères imprimables, alors les données ne dépasseront probablement jamais la plage de 0 à 127, et il ne sera peut-être pas 
nécessaire de les caster en "unsigned".

En résumé, caster les chaînes de caractères en "unsigned" peut être une bonne pratique pour éviter les problèmes de débordement et 
de manipulation des données binaires, mais cela dépend du contexte de votre application et du type de données que vous manipulez.
*/
