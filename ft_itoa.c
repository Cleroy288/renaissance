/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chleroy <charles.leroy288@gmail.co>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/03 11:33:33 by chleroy           #+#    #+#             */
/*   Updated: 2023/04/03 16:01:44 by chleroy          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_len(int n)
{
	int	len;

	len = 0;
	if (n < 0)
	{
		len++;
		n = -n;
	}
	while (n > 0 && ++len >= 0)
		n /= 10;
	return (len);
}

char	*ft_itoa(int n)
{
	long int	len;
	char		*numb;

	len = ft_len(n);
	numb = malloc(sizeof(char) * (len + 1));
	if (!numb)
		return (0);
	len--;
	numb[len] = '\0';
	if (n == 0)
		numb[0] = '0';
	if (n < 0)
	{
		numb[0] = '-';
		n = -n;
	}
	while (n > 0)
	{
		numb[len] = '0' + (n % 10);
		len--;
		n /= 10;
	}
	return (numb);
}
