/*

parameters
		lst:  The beginning of the list.
return value 
		Last node of the list
description
		Returns the last node of the list.
*/

#ifndef	FT_STRUCT_H
# define FT_STRUCT_H

typedef struct	s_list
{
	void		*content;
	struct	s_list	*next;
}			t_list;

#endif

#include <stdio.h>
#include <stdlib.h>

//ça a rendre.
t_list *ft_lstlast(t_list *lst)
{
	int i = 0;
	while (lst->next)
	{
		i++;
		lst = lst->next;
		printf("%d\n", i);
	}
	return (lst);
}

int	main()
{
	t_list	elem1, elem2, elem3, *begin;

	begin = &elem1;
	elem1.next = &elem2;
	elem2.next = &elem3;
	elem3.next = 0;

	elem1.content = "bonjour";
	elem2.content = "les";
	elem3.content = "gens";

	t_list *start = begin;

	while (start)
	{
		printf("%s\n", ((char *)start->content));
		start = start->next;
	}
	printf("début (*begin) => <<%s>>\n", ((char *)begin->content));
	start = ft_lstlast(begin);
	printf("la fin (*start) après begin mis dans ft_ => <<%s>>\n", ((char *)start->content));
	return (0);
}
