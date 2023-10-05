#include "libft.h"

char	*ft_strchr(const char *s, int c)

{
	const char	*ptr;

	ptr = s;
	while (*ptr != '\0')
	{
		if (*ptr == (char) c)
			return ((char *)ptr);
		ptr++;
	}
	if ((char) c == '\0')
		return ((char *)ptr);
	else
		return (NULL);
}
