int	ft_tolower(int a)
{
	if (a >= 'A' && a <= 'Z')
		a += 32;
	return (a);
}
