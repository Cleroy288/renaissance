/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chleroy <charles.leroy288@gmail.co>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/03 11:38:22 by chleroy           #+#    #+#             */
/*   Updated: 2023/04/03 16:20:27 by chleroy          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *str, int c, size_t n)
{
	size_t			i;
	unsigned char	*str_1;

	str_1 = (unsigned char *)str;
	i = -1;
	while (++i < n)
	{
		if (((unsigned char *)str_1)[i] == (unsigned char)c)
			return ((void *)(str_1 + i));
	}
	return (0);
}
