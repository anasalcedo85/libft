/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ansalced <ansalced@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/07 19:24:04 by ansalced          #+#    #+#             */
/*   Updated: 2023/10/07 19:24:30 by ansalced         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t	counter;
	size_t	len;

	len = ft_strlen(src);
	//printf("\n\n destino = %s\n\n", dst);
	if (dstsize == 0)
		return (len);
	counter = 0;
	while (*dst != '\0')
	{
		dst++;
		counter++;
	}
	while (*src != '\0' && counter < dstsize - 1)
	{
		*dst = *src;
		dst++;
		src++;
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
