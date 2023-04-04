/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putendl_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chleroy <charles.leroy288@gmail.co>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/03 12:01:27 by chleroy           #+#    #+#             */
/*   Updated: 2023/04/03 16:22:21 by chleroy          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ftpts_fd(char *s, int fd, int i)
{
	if (s)
		while (s[++i])
			write (fd, &s[i], 1);
}

void	ft_putendl_fd(char *s, int fd)
{
	if (!s)
		return ;
	if (fd < -1)
		return ;
	ftpts_fd(s, fd, -1);
	write (fd, "\n", 1);
}
