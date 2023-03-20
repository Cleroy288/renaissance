/*
The isdigit() function tests for a decimal digit character.  Regardless of locale, this includes the following
     characters only:

     ``0''``1''``2''``3''``4''
     ``5''``6''``7''``8''``9''
*/

#include "../libft.h"

int	ft_isdigit(int c)
{
	if (c >= '0' && c <= '9')
		return (1);
	return (0);
}
/*
#include <stdio.h>

int	main()
{
	int nb = '9';
	printf("%d\n", ft_isdigit(nb));
}*/
