#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <unistd.h>

char	*ft_fgets(int fd, int size)
{
	int	i;
	char 	c;
	char	*str;

	i = -1;
	str = malloc(sizeof(char) * size);
	if (!str)
		return (0);
	while (++i < size && read(fd, &c, 1) == 1 && c != '\n')
		str[i] = c;
	str[++i] = '\0';
	return (str);
}
