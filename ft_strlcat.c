/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ansalced <ansalced@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/07 19:24:04 by ansalced          #+#    #+#             */
/*   Updated: 2023/10/07 19:24:30 by ansalced         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t	counter;

	if (dstsize == 0)
		return (ft_strlen(src));
	else if (dstsize < ft_strlen(dst))
		return (ft_strlen(src) + dstsize);
	counter = 0;
	while (*dst != '\0')
	{
		dst++;
		counter++;
	}
	while (*src != '\0' && counter < dstsize - 1)
	{
		*dst++ = *src++;
		counter++;
	}
	*dst = '\0';
	while (*src != '\0')
	{
		src++;
		counter++;
	}
	return (counter);
}
