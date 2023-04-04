/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chleroy <charles.leroy288@gmail.co>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/03 14:38:39 by chleroy           #+#    #+#             */
/*   Updated: 2023/04/03 17:12:51 by chleroy          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_is_in(const char *str, int c)
{
	size_t	i;

	i = -1;
	while (str[++i])
		if (str[i] == c)
			return (1);
	return (0);
}

char	*ft_strrchr(const char *str, int c)
{
	size_t	i;
	size_t	j;

	i = -1;
	if (c == 0)
		return ("\0");
	if (ft_is_in(str, c) == 1)
	{
		while ((unsigned char)str[++i])
		{
			if ((unsigned char)str[i] == (unsigned char)c)
				j = i;
		}
		return ((char *)&str[j]);
	}
	return (0);
}
