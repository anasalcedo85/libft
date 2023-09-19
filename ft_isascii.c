#include <stdio.h>
#include <ctype.h>

int ft_isascii(int c)
{
	return (c >= 0 && c <= 127);
}


int	main()
{
	int dig;
	dig = -10;
	while (dig <= 150)
	{
		if(ft_isascii(dig) != isascii(dig))
			printf("%c, %d, %d\n", dig, ft_isascii(dig), isascii(dig));
		dig++;
	}
	return (0);
}