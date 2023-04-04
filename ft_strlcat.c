/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chleroy <charles.leroy288@gmail.co>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/03 13:10:33 by chleroy           #+#    #+#             */
/*   Updated: 2023/04/03 17:10:01 by chleroy          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <unistd.h>
#include "libft.h"

size_t	ft_strlen_1(const char *s)
{
	size_t	i;

	i = 0;
	while (s[i])
		i++;
	return (i);
}

/*
si destsize > ft_strlen (dst) ==> juste renvoyer la longueur de dest, sinon 
retourner dstsize + strlen(src)
en cas normal return ;
*/

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t	i;
	size_t	j;

	if (dstsize <= ft_strlen_1(dst) || src[0] == '\0')
		return (dstsize + ft_strlen_1(src));
	else if (dstsize > ft_strlen_1(dst))
		return (ft_strlen_1(dst));
	j = ft_strlen_1(dst);
	i = 0;
	while (src[i] && (j + i < dstsize))
	{
		dst[j + i] = src[i];
		i++;
	}
	dst[j] = '\0';
	return (ft_strlen_1(dst) + ft_strlen_1(&src[i]));
}
