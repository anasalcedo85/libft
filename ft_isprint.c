#include <stdio.h>
#include <ctype.h>

int ft_between(int n, int ini, int fin)
{
	return (n >= ini && n <= fin);
}

int ft_isprint(int c)
{
	return (ft_between(c, 32, 126));
}


int	main()
{
	int dig;
	dig = -10;
	while (dig <= 150)
	{
		if(ft_isprint(dig) != isprint(dig))
			printf("%c, %d, %d\n", dig, ft_isprint(dig), isprint(dig));
		dig++;
	}
	return (0);
}