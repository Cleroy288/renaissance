/*
external functions 
		free
Description
		Deletes and frees the given node and every
		successor of that node, using the function ’del’
		and free(3).
		Finally, the pointer to the list must be set to NULL.

Parameters
		lst:  The address of a pointer to a node.
		del:  The address of the function used to delete the content of the node.


*/

#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

#ifndef STRUCT_H
# define STRUCT_H

typedef	struct s_list
{
	void		*content;
	struct s_list	*next;
}			t_list;

#endif

void	ft_del(void *trou)
{
	static int i = 0;
	printf("ft_del ok x %d\n", i);
	i++;
	//free(str);
}

t_list	*ft_create_elem(void *data)
{
	t_list *node;

	node = malloc(sizeof(t_list));
	if (!node)
		return (NULL);
	node->content = data;
	node->next = NULL;
	return (node);
}


void ft_lstclear(t_list **lst, void (*del)(void*))
{
	if (*lst != NULL && del)
	{
		t_list	*tmp;
		while (*lst)
		{
			tmp = (*lst)->next;
			printf("%s\n", ((char *)(*lst)->content));
			free(*lst);
			//printf("%s\n", (*lst)->content);
			*lst = tmp;
		}
	(*lst) = NULL;
	}
}

int	main()
{
	t_list	*elem1;
	t_list	*elem2;
	t_list	*elem3;
	t_list	*start;

	start = NULL;

	elem1 = ft_create_elem("bonjour");
	elem2 = ft_create_elem("les");
	elem3 = ft_create_elem("cons");

	elem1->next = elem2;
	elem2->next = elem3;
	elem3->next = NULL;

	start = elem1;
	t_list *tmp = elem1;

	while (start)
	{
		printf("%s\n", ((char *)start->content));
		start = start->next;
	}
	ft_lstclear(&tmp, &ft_del);

	printf("le contenu est montré 2 fois car, prmier while == vérifier que tout exciste\n");
	printf("condition lstclear ==> affiche le contenu de *lst->content avant de le free\n");
	printf("si t'essaye de l'afficher en retirant le comm ==> segfault psk espace mémorie != alloué\n");
	printf("pointeur tmp ==> peux pas passer à élément next d'un élément free result == segfault\n");
	printf("(*lst) = NULL ==> alloué NULL = mieux, (etre sure)*lst pointe plus vers adress valide\n");	
}
