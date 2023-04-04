/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chleroy <charles.leroy288@gmail.co>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/03 12:06:54 by chleroy           #+#    #+#             */
/*   Updated: 2023/04/03 16:51:33 by chleroy          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

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
	unsigned char			*str;
	long int				i;

	i = -1;
	str = malloc(sizeof(char) * (ft_len_word(s, s[pos], pos) + 1));
	if (!str)
		return (0);
	while (s[pos] && ft_is_sep(s[pos], c) == 0)
		str[++i] = s[pos++];
	str[++i] = '\0';
	return (str);
}

char	**ft_split(char const *s, char c)
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
		if (s[i] && (ft_is_sep(s[i], c) == 0
				&& (ft_is_sep(s[i - 1], c) == 1 || i == 0)))
			str[++j] = ft_str_dup(s, i, c);
	str[++j] = NULL;
	return ((char **)str);
}
