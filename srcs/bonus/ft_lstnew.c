/*
Description
	Allocates (with malloc(3)) and returns a new node.
	The member variable ’content’ is initialized with
	the value of the parameter ’content’.  The variable
	’next’ is initialized to NULL.
*/

/*
//#include "struct.h"
#include <stdlib.h>
#include <unistd.h>

#ifndef STRUCT_H
# define STRUCT_H

typedef struct	s_list
{
	void		*content;
	struct s_list	*next;
}			t_list;

#endif

void	ft_s(void *content)
{
	int	i = -1;
	while (((char *)content)[++i])
		write (1, &content[i], 1);
}
*/

#include "../libft.h"

//selui la c'est celui qu'il faut rendre
t_list *ft_lstnew(void *content)
{
	t_list	*link;

	link = malloc(sizeof(t_list));
	if (!link)
		return (NULL);
	if (link)
	{
		link->content = content;
		link->next = 0;
	}
	return (link);
}
/*
t_list *ft_lstnew_list(t_list *list, void *content)
{
	t_list	*link_2;

	link_2 = malloc(sizeof(t_list));
	if (!link_2)
		return (NULL);
	if (link_2)
	{
		link_2->content = content;
		link_2->next = list;
	}
	return (link_2);
}

void	print_l(t_list *list)
{
	while (list)
	{
		ft_s(list->content);
		list = list->next;
	}
}

int	main()
{
	t_list	*list;
	t_list	*list2;
	
	list2 = NULL;
	list2 = ft_lstnew("toto\n");
	
	
	list = NULL;
	list = ft_lstnew_list(list, "toto\n");
	list = ft_lstnew_list(list,"tata\n");
	list = ft_lstnew_list(list,"tutu\n");

	print_l(list2);
	ft_s("on a crée un element et on pointe vers nul après\n");
	print_l(list);
	ft_s("plusieurs elem crée, on pointe vers prés\n");
	ft_s("ordre création toto, tata et tutu => ordre affichage est diff\n");
}*/
