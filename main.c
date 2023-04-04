#include "libft.h"

int main()
{
	system("leaks a.out -atExit");
	char **tab;

	tab = ft_split("Salut les gens :)", ' ');
	for (int i=0; tab[i]; i++)
		printf("%s\n", tab[i]);
	return (0);
}
