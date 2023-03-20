/*
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
*/

#include "../libft.h"

void	*ft_calloc(size_t nmemb, size_t size)
{
	void	*p;
	size_t	i;

	i = -1;
	p = malloc(nmemb * size);
	if (!p)
		return (NULL);
	while (++i <= nmemb * size)
		((unsigned char *)p)[i] = 0;
	return (p);
}
/*
size_t	ft_strlen(char *str)
{
	size_t	i = -1;
	while (str[++i])
		;
	return (i);
}

int	main(int argc, char **argv)
{
	char	*str = ft_calloc(1, ft_strlen(argv[1]) + 1);
	if (!str)
		return (0);
	size_t	i = 0;
	size_t	j = 0;
	while (argv[1][i] && i < ft_strlen(argv[1]))
	{
		str[i] = argv[1][i];
		printf("str[%zu] == char [%c]\n", i, str[i]);
		i++;
	}
	printf("longueur de str == > [%zu] et longueur de argv[1] == > [%zu] , derniere index str[i] == > [%zu]\n", ft_strlen(str) , ft_strlen(argv[1]), i);
	free(str);
	printf("bon accorchez vous , maintenant la vrai fonction\n");
	str = calloc(1, ft_strlen(argv[1]) + 1);
	if (!str)
		return (0);
	while (argv[1][j] && j < ft_strlen(argv[1]))
	{
		str[j] = argv[1][j];
		printf("str[%zu] == char [%c]\n", i, str[j]);
		j++;
	}
	printf("longueur de str == > [%zu] et longueur de argv[1] == > [%zu] , derniere index str[i] == > [%zu]\n", ft_strlen(str), ft_strlen(argv[1]), i);
	free(str);
	printf("et bah ouais y'a aucun diff psk je suis un boss ;) \n");
	return (0);
}
*/
/*
Le code que vous avez fourni est une adaptation de la fonction calloc et est plus approprié pour allouer de la mémoire et initialiser tous les octets à zéro.

Il alloue la mémoire en utilisant la formule nmemb * size, ce qui garantit que suffisamment d'espace est alloué pour stocker nmemb éléments de taille size.

Ensuite, il utilise une boucle while pour initialiser tous les octets de la mémoire allouée à zéro. Cette boucle est exécutée nmemb fois, ce qui garantit que tous les éléments du tableau sont initialisés à zéro.

Notez que la boucle utilise l'opérateur de pré-incrémentation ++i pour incrémenter la variable i avant l'exécution de chaque itération de la boucle. Cela signifie que la boucle s'exécutera nmemb fois, car la première valeur de i sera 0.

En fin de compte, ce code est un bon choix si vous avez besoin d'allouer de la mémoire et d'initialiser tous les éléments à zéro, et que vous ne pouvez pas utiliser la fonction calloc pour une raison quelconque.

*/

