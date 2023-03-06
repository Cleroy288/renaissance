#include <stdlib.h>

//retire une partie d'une chaine de cartère et la renvoi

#include <stdio.h>
char	*ft_del_str_part(char *str, int start, int end)
{
	int	i = 0;
	int	j;
	int	len;
	char	*tab;
	
	while (str[i])
		i++;
	len = i - (end - start);
	printf("%d\n", len);
	tab = malloc(sizeof(char) * (len + 1));
	i = 0;
	while (i < start)
	{
		tab[i] = str[i];
		printf("<<%c>> => index [%d]\n", str[i], i);
		i++;
	}
	j = i;
	while (i <= end)
	{
		printf("<<%c>> => index [%d]\n", str[i], i);
		i++;
	}
	while (str[i])
	{
		tab[j] = str[i];
		printf("<<%c>> => index [%d]\n", str[i], i);
		i++;
		j++;
	}
	tab[j] = '\0';
	return (tab);
}
//ne fonctionne pas encore, FAIRE MEME FONCTION MAIS AVCE UN MOT
#include <stdio.h>

int	main(int argc, char **argv)
{
	if (argc == 2)
	{
		char	*str;
		printf("argv[1] avant <<%s>>\n", argv[1]);
		str = ft_del_str_part(argv[1], 8, 11);
		printf("argv[1], donc str apres la fonction <<%s>>\n", str);
	}
}

