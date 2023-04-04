/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chleroy <charles.leroy288@gmail.co>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/03 13:35:35 by chleroy           #+#    #+#             */
/*   Updated: 2023/04/03 17:10:25 by chleroy          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

unsigned int	ft_strlen_1(char const *s)
{
	unsigned int	i;

	i = -1;
	while (s[++i])
		;
	return (i);
}

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	char				*res;
	unsigned int		i;

	i = -1;
	res = malloc(sizeof(char) * (ft_strlen_1(s) + 1));
	if (!res)
		return (0);
	while (++i < ft_strlen_1(s))
		res[i] = f(i, s[i]);
	res[++i] = '\0';
	return (res);
}
