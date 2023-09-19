#include <stdio.h>
#include <ctype.h>

int ft_islower(int c)
{
	if(c >= 'a' && c <= 'z')
		return (1);
	else
		return (0);
}

int ft_isupper(int c)
{
	if(c >= 'A' && c <= 'Z')
		return (1);
	else
		return (0);
}

int ft_isalpha(int c)
{
	if(ft_islower(c) || ft_isupper(c))
		return (1);
	else
		return (0);

}

int	main()
{
	int dig;
	dig = 32;
	while (dig <= 126)
	{
		if(ft_isalpha(dig) != isalpha(dig))
			printf("%c, %d, %d\n", dig, ft_isalpha(dig), isalpha(dig));
		dig++;
	}
	return (0);
}