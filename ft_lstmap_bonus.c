/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap_bonus.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chleroy <charles.leroy288@gmail.co>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/03 11:00:10 by chleroy           #+#    #+#             */
/*   Updated: 2023/04/03 16:18:27 by chleroy          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_create_elem_1(void *data)
{
	t_list	*node;

	node = malloc(sizeof(t_list));
	if (!node)
		return (NULL);
	node->content = data;
	node->next = NULL;
	return (node);
}

t_list	*ft_copy_list(t_list *lst, t_list *new)
{
	t_list	*start;

	new = lst;
	start = new;
	while (lst)
	{
		new = ft_create_elem_1(lst->content);
		lst = lst->next;
		new = new->next;
	}
	new = start;
	return (new);
}

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*new;
	t_list	*start;

	new = NULL;
	if (lst)
	{
		new = ft_copy_list(lst, new);
		start = new;
		while (new)
		{
			if (!new->content)
				del(new->content);
			new->content = f(new->content);
			new = new->next;
		}
		new = start;
		return (new);
	}
	del(new);
	return (new);
}
