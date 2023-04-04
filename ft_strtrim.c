/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chleroy <charles.leroy288@gmail.co>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/03 14:46:04 by chleroy           #+#    #+#             */
/*   Updated: 2023/04/03 17:14:01 by chleroy          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

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

int	ft_index_last_word(char const *s1)
{
	int	i;

	i = ft_strlen(s1);
	while (s1[i--] != 32)
		;
	if (s1[i] == 32)
		i++;
	if (s1[i] != '\0')
		return (i);
	return (0);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	int		i;
	int		j;
	int		k;
	char	*str;

	i = 0;
	j = 0;
	if (!s1)
		return (NULL);
	if (!set)
		return ((char *)s1);
	k = ft_index_last_word(s1);
	str = malloc(sizeof(char) * (ft_strlen(s1) + 1));
	if (!str)
		return (NULL);
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
