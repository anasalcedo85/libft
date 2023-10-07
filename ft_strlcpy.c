/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ansalced <ansalced@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/07 18:32:33 by ansalced          #+#    #+#             */
/*   Updated: 2023/10/07 18:37:20 by ansalced         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

size_t	ft_strlcpy(char *dst, const char *src, size_t dstsize)
{
	unsigned long	i;

	if (dstsize == 0)
		return (ft_strlen(src));
	i = 0;
	while (i < dstsize -1 && *src != '\0')
	{
		*dst = *src;
		dst++;
		src++;
		i++;
	}
	*dst = '\0';
	while (*src != '\0')
	{
		src++;
		i++;
	}
	return (i);
}
