/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chleroy <charles.leroy288@gmail.co>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/03 12:03:18 by chleroy           #+#    #+#             */
/*   Updated: 2023/04/03 16:23:44 by chleroy          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_ptnbfd(int n, int fd)
{
	if (n == -2147483648)
		write (fd, "-2147483648", 11);
	if (n < 0)
		n *= -1;
	if (n > 9)
		ft_ptnbfd(n / 10, fd);
	write (fd, &"0123456789"[n % 10], 1);
}

void	ft_putnbr_fd(int n, int fd)
{
	if (n < 0)
		write (fd, "-", 1);
	ft_ptnbfd(n, fd);
}
