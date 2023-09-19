#include <stdio.h>
#include <ctype.h>

int ft_islower(int c)
{
	return (c >= 'a' && c <= 'z');
}

int ft_isupper(int c)
{
	return (c >= 'A' && c <= 'Z');
}
int ft_isdigit(int c)
{
	return (c >= '0' && c <= '9');
}

int ft_isalpha(int c)
{
	return (ft_islower(c) || ft_isupper(c));

}

int ft_isalnum(int c)
{
	return (ft_isalpha(c) || ft_isdigit(c));
}


int	main()
{
	int dig;
	dig = 32;
	while (dig <= 126)
	{
		if(ft_isalnum(dig) != isalnum(dig))
			printf("%c, %d, %d\n", dig, ft_isalnum(dig), isalnum(dig));
		dig++;
	}
	return (0);
}