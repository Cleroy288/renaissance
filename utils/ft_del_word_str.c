#include <stdlib.h>
#include <stdio.h>

size_t	ft_strlen(char *str)
{
	size_t	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

int	ft_is_word(char *str, char *word, int pos)
{
	int	i;
	int	len_word;
	char	*tab;

	i = 0;
	len_word = ft_strlen(word);
	tab = malloc(sizeof(char) * (len_word + 1));
	while (str[pos] == word[i] && i <= len_word)
	{
		tab[i] = str[pos];
		pos++;
		i++;
	}
	tab[i] = '\0';
//	printf("<<%s>> ; tab\n", tab);
//	printf("<<%s>> ; word\n", word);
	//printf("%d ; i\n", i);
	//printf("%d ; len_word\n", len_word);
	i = 0;
	while (tab[i] == word[i])
		i++;
//	printf("%d ; i\n", i);
//	printf("%d ; len_word\n", len_word);
	if (len_word == i - 1)
		return (1);
	return (0);
	
}

int	ft_nb_word(char *str, char *word)
{
	int	i;
	int	count;

	count = 0;
	i = 0;
	while (str[i])
	{
		if (ft_is_word(str, word, i) == 1)
			count++;
		i++;
	}
	return (count);
}

int	ft_word_exist(char *str, char *word)
{
	int i = 0;
	int j;
	while (str[i])
	{
		if (ft_is_word(str, word, i) == 1)
			return (1);
		i++;
	}
	return (0);
}

size_t	ft_len_new_str(char *str, char *word)
{
	size_t	len_word;
	size_t	len_str;
	size_t	nb_word;
	size_t	new_len;
	
	len_word = ft_strlen(word);
	printf("%zu ; len_word (ft_len_new_str)\n" , len_word);

	len_str = ft_strlen(str);
	printf("%zu ; len_str (ft_len_new_str)\n", len_str);

	nb_word = ft_nb_word(str, word);
	printf("%zu ; nb_word(ft_len_new_str)\n", nb_word);

	new_len = len_str - (nb_word * len_word);
	return (new_len);

}

char	*ft_del_word_str(char *str, char *word)
{
	size_t	i;
	size_t	j;
	char	*tab;

	i = 0;
	j = 0;
	if (ft_word_exist(str, word) == 0 || !word || word[0] == '\0')
		return (str);
	if (!str)
		return (NULL);
	tab = malloc(sizeof(char) * (ft_len_new_str(str, word)  + 1));
	if (!tab)
		return (0);
	while (str[i])
	{
		if (str[i] && ft_is_word(str, word, i) == 1)
		{
			i += ft_strlen(word);
			if (str[i] == 32)
				i++;
		}
		tab[j] = str[i];
		j++;
		i++;
	}
	tab[j] = '\0';
	return (tab);
}
 
int	main(int argc, char **argv)
{
	//printf("%d ; ft_is_word\n", ft_is_word("bonjour", "bonjour" , 0));//ft_is_word => ok
	//printf("%d ; ft_nb_word\n", ft_nb_word("les bonjour les gens les", "les"));//ft_nb_word => ok
	//printf("%d ; ft_word_exist\n", ft_word_exist("bonjour les gens", "les"));//ft_word_exist => ok
	//printf("%zu ; ft_len_new_str\n", ft_len_new_str("bonjour les gens les", "les"));//ft_len_new_str => ok

	//char	*str;
	//str = ft_del_word_str("bonjour les gens, vs etes chiants les chats sont mieux", "les");// ft_del_word_str => ok
	//printf("%s\n", str);

//	char	*test_res = ft_del_word_str("bonjour les oui gens", "oui");
//	printf("phrase test ; <<%s>>\n" , test_res);
	//printf("%d\n", ft_is_word(" oui", "oui", 0));
	if (argc == 3)
	{
		printf("result new str => <<%s>>\n", ft_del_word_str(argv[1], argv[2]));
	}
}
