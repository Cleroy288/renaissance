/*
parameters 
		lst:  The beginning of the list.

return value
		The length of the list

description
		Counts the number of nodes in a list.

*/

#include <stdio.h>
#include <stdlib.h>

#ifndef	STRUCT_H
# define STRUCT_H

typedef	struct	s_list
{
	void		*content;
	struct	s_list	*next;
}			t_list;

#endif

int ft_lstsize(t_list *lst)
{
	int	len;

	len = -1;
	if (lst)
		while (++len >= 0 && lst  /*++len >= 0*/)
			lst = lst->next;
	return (len);
}

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

	t_list *current = begin;

	while (current)
	{
		printf("%s\n", ((char *)current->content));
		current = current->next;
	}
	printf("%d\n", ft_lstsize(begin));
	return (0);
}
