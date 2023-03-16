/*
parameters
		lst:  The address of a pointer to the first link ofa list.
		new:  The address of a pointer to the node to beadded to the list.

description
		Adds the node ’new’ at the end of the list.
*/

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

t_list	*ft_new_nod(t_list *new, void *data)
{
	new = NULL;
	new = malloc(sizeof(t_list));
	if (!new)
		return (NULL);
	new->content = data;
	new->next = NULL;
	return (new);
}

//ca a rendre
void ft_lstadd_back(t_list **lst, t_list *new)
{
	if (!lst || !new)
		return ;
	if (!*lst)
	{
		*lst = new;
		return ;
	}
	while ((*lst)->next)
		lst = &(*lst)->next;
	(*lst)->next = new;
}

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

	t_list *new = ft_new_nod(new, "bonjour");
	ft_lstadd_back(&begin, new);

	while (begin)
	{
		printf("%s\n", ((char *)begin->content));
		begin = begin->next;
	}
	return (0);
}
