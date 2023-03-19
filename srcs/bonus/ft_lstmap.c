/*
Parameters
	lst:  The address of a pointer to a node.
	f:  The address of the function used to iterate on the list.
	del:  The address of the function used to delete the content of a node if needed.

Return value
	The new list.
	NULL if the allocation fails.

external functions
		malloc & free

Description
	Iterates the list ’lst’ and applies the function
	’f’ on the content of each node.  Creates a new
	list resulting of the successive applications of
	the function ’f’.  The ’del’ function is used to
	delete the content of a node if needed.
*/


/*
liste de base est elle changé ? 
peut elle etre chnagé ?
est ce ok ?
on verra
*/
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

#ifndef FT_STRUCT_H
# define FT_STRUCT_H

typedef	struct	s_list
{
	void		*content;
	struct s_list	*next;
}			t_list;

#endif

t_list	*ft_create_elem(void *data)
{
	t_list	*node;

	node = malloc(sizeof(t_list));
	if (!node)
		return (NULL);
	node->content = data;
	node->next = NULL;
	return (node);
}

t_list	*ft_new(t_list *new, t_list *lst, void *(*f)(void *))
{
	t_list	*start;

	new = lst;
	start = new;
	while (new)
	{
		new->content = f("bonjour");
		new = new->next;
	}
	new = start;
	return (new);
}

t_list	*ft_copy_list(t_list *lst, t_list *new)
{
	t_list	*start;

	new = lst;
	start = new;
	while (lst)
	{
		new = ft_create_elem(lst->content);
		lst = lst->next;
		new = new->next;
	}
	new = start;
	return (new);
}

//ca a rendre;
t_list *ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*new;
	t_list	*start;
	
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

void	*ft_f(void *pt)
{
	char	*str = malloc(sizeof(char) * 20);
	int	i = 0;
	static int	nb = 1;
	while (((char *)pt)[i])
	{
		str[i] = (((char *)pt)[i]);
		i++;
	}
	str[i] = '\0';
	return ((void *)str);
}

void	ft_del(void *pt)
{
	free(pt);
}

void	ft_put_list(t_list *pt, char *str)
{
	printf("list ; %s =\n", str);
	while (pt)
	{
		printf("%s\n", ((char *)pt->content));
		pt = pt->next;
	}
	write (1, "\n", 1);
}

int	main()
{
	t_list	*elem1;
	t_list	*elem2;
	t_list	*res;
	t_list	*test;
	t_list	*verif_p;
	t_list	*cop;

	elem1 = ft_create_elem("bonjour ");
	elem2 = ft_create_elem("NEEDED");
	
	elem1->next = elem2;
	elem2->next = 0;

	cop = ft_copy_list(elem1, cop);	
	while (cop)
	{
		printf("%s\n", ((char *)cop->content));
		cop = cop->next;
	}

	res = ft_lstmap(elem1, ft_f, ft_del);
	while (res)
	{
		printf("%s\n", ((char *)res->content));
		res = res->next;
	}

	while (elem1)
	{
		printf("%s\n", ((char *)elem1->content));
		elem1 = elem1->next;
	}
//	ft_put_list(test, "test");

//	res = ft_lstmap(elem1, &ft_f, &ft_del);//test de tt qui est ok

//	ft_put_list(res, "res");
//	ft_put_list(verif_p, "verif_p");

	
//	printf("if is null ==> ");
//	t_list	*seg = NULL;
//	t_list	*fault = ft_lstmap(seg, &ft_f, &ft_del);
//	printf("%s\n", ((char *)fault->content));

}
