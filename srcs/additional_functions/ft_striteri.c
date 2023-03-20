/*
Parameters
	s:  The string on which to iterate.
	f:  The function to apply to each character.
Description
	Applies the function ’f’ on each character of
	the string passed as argument, passing its index
	as first argument.  Each character is passed by
	address to ’f’ to be modified if necessary.
*/

#include "../libft.h"

void	ft_striteri(char *s, void (*f)(unsigned int, char*))
{
	unsigned int	i;

	i = -1;
	if (s && f)
		while (s[++i])
			f(i, &s[i]);
}

