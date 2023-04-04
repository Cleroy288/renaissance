/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chleroy <charles.leroy288@gmail.co>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/03 11:42:43 by chleroy           #+#    #+#             */
/*   Updated: 2023/04/03 11:42:50 by chleroy          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	size_t	i;

	i = -1;
	while (++i < n - 1 && ((unsigned char *)s1)[i] == ((unsigned char *)s2)[i])
		;
	return (((unsigned char *)s1)[i] - ((unsigned char *)s2)[i]);
}
