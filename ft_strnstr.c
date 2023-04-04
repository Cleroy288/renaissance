/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chleroy <charles.leroy288@gmail.co>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/03 13:56:22 by chleroy           #+#    #+#             */
/*   Updated: 2023/04/03 17:12:30 by chleroy          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_is_word(const char *str, int pos, const char *word, size_t len)
{
	size_t	i;

	i = 0;
	while (str[pos] == word[i] && (size_t)pos < len)
	{
		i++;
		pos++;
	}
	if (i == (ft_strlen(word)))
		return (1);
	else
		return (0);
}

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t	i;
	size_t	j;

	i = 0;
	while (i < len)
	{
		j = 0;
		if (haystack[i] == needle[j]
			&& ft_is_word(haystack, i, needle, len) == 1)
			return (&((char *)haystack)[i]);
		i++;
	}
	return (0);
}
