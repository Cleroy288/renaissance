/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chleroy <charles.leroy288@gmail.co>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/03 13:30:35 by chleroy           #+#    #+#             */
/*   Updated: 2023/04/04 16:22:44 by chleroy          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *dst, const char *src, size_t dstsize)
{
	size_t	i;

	i = 0;
	if (!dst || !src)
		return (0);
	if (dstsize == 0)
		while (src[i])
			i++;
	if (dstsize != 0)
	{
		while (i < dstsize - 1 && src[i])
		{	
			dst[i] = src[i];
			i++;
		}
		if (src[i])
			while (src[i])
				i++;
		dst[i] = '\0';
//		printf("%s\n", dst);
	}
	return (i);
}


#include <stdio.h>
#include <string.h>
int main()
{
	char	dst[15];
	char 	dst2[15];

	
	ft_strlcpy(dst, "aaa", 3);
	strlcpy(dst2, "aaa", 3);
	printf("mine	[%s]\n",dst);
	printf("real	[%s]\n",dst2);
		
}
