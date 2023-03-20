/*
Parameters
	s1:  The string to be trimmed.
	set:  The reference set of characters to trim.
Return value
	The trimmed string.
	NULL if the allocation fails.
Description
	Allocates (with malloc(3)) and returns a copy of
	’s1’ with the characters specified in ’set’ removed
	from the beginning and the end of the string
*/

#include "../libft.h"

int	ft_is_set(char const c, char const *set)
{
	int	i;

	i = -1;
	while (set[++i])
	{
		if (c == set[i])
			return (1);
		if (c >= 'a' && c <= 'z' && c >= 'A' && c <= 'Z')
			return (2);
	}
	return (0);
}
/*
int	ft_strlen(char const *str)
{
	int i = -1;
	while (str[++i])
		;
	return (i);
}
*/
int	ft_index_last_word(char const *s1) //char const *set)
{
	int i;

	i = ft_strlen(s1);
	while (s1[i--] != 32)
		;
	if (s1[i] == 32)
		i++;
	if (s1[i] != '\0')
		return (i);
	return (0);
}

char *ft_strtrim(char const *s1, char const *set)
{
	int	i;
	int	j;
	int	k;
	char	*str;
	
	i = 0;
	j = 0;
	k = ft_index_last_word(s1); //set);
	str = malloc(sizeof(char) * (ft_strlen(s1) + 1));
	while (ft_is_set(s1[i], set) == 1)
		i++;
	while (ft_is_set(s1[i], set) == 0)
		str[j++] = s1[i++];
	while (i <= k)
		str[j++] = s1[i++];
	while (s1[i] && ft_is_set(s1[i], set) == 0)
		str[j++] = s1[i++];
	str[j] = '\0';
	return (str);
}
/*
int	main(int argc, char **argv)
{

	char const  	string[] = "gensgens les gens lol gens";
	char const	set[] = "gens";
	int i = -1;
	printf("string au complet\n");
	while (string[++i])
		printf("char [%c] a index %d\n", string[i], i);
	printf("de la string => <<%s>>\n\n", string);

	char	*str2 = ft_strtrim(string, set);
	int	len_str = -1;
	while (str2[++len_str])
		printf("le char [%c] a l'index =>%d\n", str2[len_str], len_str);

	printf("résultat => <<%s>>\n", str2);

	free(str2);
}*/
