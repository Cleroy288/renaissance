/*
parameters
	lst:  The address of a pointer to the first link of
	a list.
	new:  The address of a pointer to the node to be
	added to the list.

description
	Adds the node ’new’ at the beginning of the list.
*/
/*
#include <stdlib.h>
#include <unistd.h>
#include <stdio.h>

#ifndef STRUCT_H
# define STRUCT_H

typedef struct	s_list
{
	void		*content;
	struct s_list	*next;
}			t_list;

#endif

t_list	*ft_create_elem(t_list *created, void *data)
{
	created = NULL;
	created = malloc(sizeof(t_list));
	if (!created)
		return (NULL);
	created->content = data;
	created->next = NULL;
	return (created);
}
*/

#include "../libft.h"

void ft_lstadd_front(t_list **lst, t_list *new)
{
	if (!new)
		return ;
	if (!lst)
		*lst = new;
	new->next = *lst;
	*lst = new;
}
/*
void	ft_lstadd_front(t_list **lst, t_list *new)
{
	if (new)
	{	
		if (!lst)
			*lst = new;
		new->next = *lst;
		*lst = new;
	}
}

void	ft_lstadd_front(t_list **alst, t_list *new)
{
	if (*alst == NULL)
	{
		*alst = new;
		return ;
	}
	new->next = *alst;
	*alst = new;
}

*/
/*
int		main(void)
{
	t_list	elem1, elem2, elem3, *begin;

	begin = &elem1;
	elem1.next = &elem2;
	elem2.next = &elem3;
	elem3.next = 0;

	elem1.content = "toto,";
	elem2.content = "tata,";
	elem3.content = "tutu";

	t_list *elem_new = ft_create_elem(elem_new, "bonjour");
	
	ft_lstadd_front(&begin, elem_new);
	while (begin)
	{
		printf("%s\n", ((char *)begin->content));
		begin = begin->next;
	}
	return (0);
}*/
