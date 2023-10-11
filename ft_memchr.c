/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ansalced <ansalced@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/07 18:42:37 by ansalced          #+#    #+#             */
/*   Updated: 2023/10/11 12:19:45 by ansalced         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	size_t	i;

	i = 0;
	while (i < n && ((unsigned char *) s)[i] != (unsigned char) c)
		i++;
	if (i >= n)
		return (NULL);
	else
		return ((void *)&s[i]);
}
