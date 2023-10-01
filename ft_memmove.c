#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	void		*ptr1;
	const void	*ptr2;
	size_t		i;

	if (dst < src)
	{
		ft_memcpy(dst, src, len);
		return (dst);
	}
	if (dst == NULL && src == NULL)
		return (dst);
	ptr1 = dst;
	ptr2 = src;
	i = 0;
	while (len--)
		((unsigned char *)ptr1)[len] = ((unsigned char *)ptr2)[len];
	return (dst);
}
