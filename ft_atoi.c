#include "libft.h"

int	ft_atoi(const char *str)
{
	int i;
	int	n;
	int signo;

	i = 0;
	n = 0;
	signo = 1;

	while(str[i] == ' ')
	{
		i++;
	}

	if(str[i] == '-')
	{
		signo = -1;
		i++;
	}
	
	while (ft_isdigit(str[i]))
	{
		n = n * 10 + (str[i] - '0');

		i++;
	}
	return (n * signo);
}