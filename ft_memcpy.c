#include "libft.h"

void	*ft_memcpy(void *dst, const void *src, size_t len)
{
	void	*ptr;
	size_t	i;

	if (dst == NULL && src == NULL)
		return (dst);
	ptr = dst;
	i = 0;
	while (i < len)
	{
		((unsigned char *)ptr)[i] = ((unsigned char *)src)[i];
		i++;
	}
	return (dst);
}
