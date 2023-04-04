/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chleroy <charles.leroy288@gmail.co>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/03 11:43:07 by chleroy           #+#    #+#             */
/*   Updated: 2023/04/03 11:47:10 by chleroy          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *restrict dst, const void *restrict src, size_t n)
{
	size_t					i;
	const unsigned char		*s;
	unsigned char			*d;

	i = -1;
	s = src;
	d = dst;
	while (++i < n)
		d[i] = s[i];
	return (dst);
}
