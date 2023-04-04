/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chleroy <charles.leroy288@gmail.co>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/03 14:48:04 by chleroy           #+#    #+#             */
/*   Updated: 2023/04/03 15:53:57 by chleroy          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlen_1(char const *s)
{
	size_t	i;

	i = -1;
	while (s[++i])
		;
	return (i);
}

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char		*res;
	size_t		i;

	i = -1;
	if (start < 0)
		start *= -1;
	if (len < 0)
		start *= -1;
	if (!s)
		return (0);
	if (start > len)
		return ("too far");
	res = malloc(sizeof(char) * (len + 1));
	if (!res)
		return (0);
	while (++i < len)
	{
		res[i] = s[start];
		start++;
	}
	res[i] = '\0';
	return (res);
}
