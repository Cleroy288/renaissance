/*
Parameters
	lst:  The address of a pointer to a node.
	f:  The address of the function used to iterate on the list.

Description
	Iterates the list ’lst’ and applies the function
	’f’ on the content of each node.
*/
/*
#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>

#ifndef	FT_STRUCT_H
# define FT_STRUCT_H

typedef	struct	s_list
{
	void		*content;
	struct	s_list	*next;
}			t_list;

#endif

t_list	*ft_create_elem(void *data)
{
	t_list	*elem;

	elem = malloc(sizeof(t_list));
	if (!elem)
		return (NULL);
	elem->content = data;
	elem->next = 0;
	return (elem);
}
*/

#include "../libft.h"

void ft_lstiter(t_list *lst, void (*f)(void *))
{
	if (lst && f)
		while (lst)
		{
			f(lst->content);
			lst = lst->next;
		}
}
/*
int	ft_atoi(char *str)
{
	int	res = 0;
	int	sign = 1;
	int	i = 0;
	

	while (str[i] >= '0' && str[i] <= '9')
	{
		res = res * 10 + str[i] - '0';
		i++;
	}
	return (res);
}

void	ft_f(void *pt)
{
	static int res = 0;
	res = res + ft_atoi(pt);
	printf("%d\n", res);
}

int	main()
{	t_list	*elem1;
	t_list	*elem2;

	elem1 = ft_create_elem("12");
	elem2 = ft_create_elem("3");
	
	elem1->next = elem2;
	elem2->next = 0;

	ft_lstiter(elem1, &ft_f);	
}*/
