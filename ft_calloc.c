/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chleroy <charles.leroy288@gmail.co>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/03 11:15:18 by chleroy           #+#    #+#             */
/*   Updated: 2023/04/03 11:16:36 by chleroy          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t nmemb, size_t size)
{
	void	*p;
	size_t	i;

	i = -1;
	p = malloc(nmemb * size);
	if (!p)
		return (NULL);
	while (++i <= nmemb * size)
		((unsigned char *)p)[i] = 0;
	return (p);
}
