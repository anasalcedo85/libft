/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ansalced <ansalced@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/07 18:30:53 by ansalced          #+#    #+#             */
/*   Updated: 2023/10/07 18:31:38 by ansalced         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

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
