#include <stdio.h>
#include <ctype.h>

int ft_isdigit(int c)
{
	if(c >= '0' && c <= '9')
		return (1);
	else
		return (0);

}

int	main()
{
	int dig;
	dig = -10;
	while (dig <= 150)
	{
		//if(ft_isdigit(dig) != isdigit(dig))
			printf("%c, %d, %d\n", dig, ft_isdigit(dig), isdigit(dig));
		dig++;
	}
	return (0);
}