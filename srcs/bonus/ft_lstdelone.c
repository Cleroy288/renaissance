/*
Parameters
		lst:  The node to free.
		del:  The address of the function used to delete the content.
external function
		free
Description
		Takes as a parameter a node and frees the memory of
		the node’s content using the function ’del’ given
		as a parameter and free the node.  The memory of
		’next’ must not be freed.
*/

#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>

#ifndef FT_STRUCT_H
# define FT_STRUCT_H

typedef struct	s_list
{
	void		*content;
	struct s_list	*next;
}			t_list;

#endif

t_list	*ft_create_elem(void *data)
{
	t_list	*created;

	created = malloc(sizeof(t_list));
	if (!created)
		return (NULL);
	created->content = data;
	created->next = NULL;
	return (created);
}

void	ft_del(void *pt)
{
	pt = pt;
}

void ft_lstdelone(t_list *lst, void (*del)(void*))
{
	if (lst && del)
	{
		if (lst->content)
			del(lst->content);
		free(lst);
	}
}

int	main()
{
	t_list	*elem1;
	t_list	*elem2;
	t_list	*elem3;
	t_list	*start;
	t_list	*begin;

	start = NULL;
	begin = NULL;

	elem1 = ft_create_elem("bonjour");
	elem2 = ft_create_elem("les");
	elem3 = ft_create_elem("gens");

	if (!elem1 || !elem2 || !elem3)
		printf("non");

	elem1->next = elem2;
	elem2->next = elem3;
	elem3->next = NULL;

	start = elem1;
	begin = elem2;

	while (start)
	{
		printf("%s\n", ((char *)start->content));
		start = start->next;
	}
	ft_lstdelone(elem1, &ft_del);
	while (begin)
	{
		printf("%s\n", ((char *)begin->content));
		begin = begin->next;
	}
	if (!elem1->content)
		printf("%s\n", ((char *)elem1->content));
	else
		printf("elem1->content == free (segfaul si tu retire le ! du if ci dessus)\n");
}


