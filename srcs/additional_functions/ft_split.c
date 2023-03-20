/*
Parameters
	s:  The string to be split.
	c:  The delimiter character.
Return value
	The array of new strings resulting from the split.
	NULL if the allocation fails.
Description
	Allocates (with malloc(3)) and returns an array
	of strings obtained by splitting ’s’ using the
	character ’c’ as a delimiter.  The array must end
	with a NULL pointer.
*/

#include "../libft.h"

int	ft_is_sep(char const c, char sep)
{
	if (c == sep || c == '\0')
		return (1);
	return (0);
}

long int	ft_nb_word(char const *s, char c)
{
	long int	count;
	long int	i;

	i = -1;
	count = 0;
	if (!s)
		return (0);
	while (s[++i])
		if (s[i] && ft_is_sep(s[i], c) == 0 && ft_is_sep(s[i + 1], c) == 1)
			count++;
	return (count);
}

long int	ft_len_word(char const *s, char c, int pos)
{
	long int	count;

	count = 0;
	while (s[pos] && ft_is_sep(s[pos], c) == 0)
	{
		count++;
		pos++;
	}
	return (count);
}

unsigned char	*ft_str_dup(char const *s, int pos, char c)
{
	unsigned char		*str;
	long int		i;
	
	i = -1;
	str = malloc(sizeof(char) * (ft_len_word(s, s[pos], pos) + 1));
	if (!str)
		return (0);
	while (s[pos] && ft_is_sep(s[pos], c) == 0)
		str[++i] = s[pos++];
	str[++i] = '\0';
	return (str);
}


char **ft_split(char const *s, char c)
{
	long long int		i;
	long long int		j;
	unsigned char		**str;

	i = -1;
	j = -1;
	str = malloc(sizeof(char *) * (ft_nb_word(s, c) + 1));
	if (!str)
		return (0);
	while (s[++i] && j <= ft_nb_word(s, c))
		if (s[i] && (ft_is_sep(s[i], c) == 0 && (ft_is_sep(s[i - 1], c) == 1 || i == 0)))
			str[++j] = ft_str_dup(s, i, c);
	str[++j] = NULL;
	return ((char **)str);
}
/*
//#include "ft_fgets.c"

char	*ft_fgets(int fd, int size)
{
	int	i;
	char 	c;
	char	*str;

	i = -1;
	str = malloc(sizeof(char) * size);
	if (!str)
		return (0);
	while (++i < size && read(fd, &c, 1) == 1 && c != '\n')
		str[i] = c;
	str[++i] = '\0';
	return (str);
}
int	ft_strcmp(char *s1, char *s2)
{
	int i = 0;
	while (s1[i] && s1[i] == s2[i])
		i++;
	return (s1[i] - s2[i]);
}

void	ft_putstr(char *str)
{
	int	i = -1;
	while (str[++i])
		write (1, &str[i], 1);
}

int	main()
{
	printf("input 1 ==> string a split, input 2 ==> separateur (attention que le prmeier char)\n");
	while (1)
	{
		char	*str_split = ft_fgets(0, 100);
		char	*sep = ft_fgets(0, 100);
		char	**split;
		int	i = -1;
		if (ft_strcmp(str_split, "STOP") == 0 || ft_strcmp(sep, "STOP") == 0)
			break;
		else if (ft_strcmp(str_split, "HELP") == 0 || ft_strcmp(sep, "HELP") == 0)
			printf("input 1 => string a separer input 2 separateur\n");
		printf("str_split ==> <%s>> && sep ==> <<%s>>\n", str_split, sep);
		ft_putstr("On vas commencer avec le vrai du vrai la\n");
		split = ft_split(str_split, sep[0]);
		while (++i < ft_nb_word(str_split, sep[0]))
			printf("premier mot index [%d] ==> <<%s>>\n", i, split[i]);
		ft_putstr("pour stop == click ENTER puis ecire STOP\n");
		ft_putstr("pour un autre test input la string puis le sep\n");
	}
}*/
