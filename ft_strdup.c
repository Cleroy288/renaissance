/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chleroy <charles.leroy288@gmail.co>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/03 12:15:03 by chleroy           #+#    #+#             */
/*   Updated: 2023/04/03 17:03:57 by chleroy          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s)
{
	unsigned char		*s2;
	size_t				i;

	i = -1;
	s2 = malloc(sizeof(((unsigned char *)s) + 1));
	if (!s2)
		return (0);
	while (((unsigned char *)s)[++i])
		s2[i] = s[i];
	return ((char *)s);
}
