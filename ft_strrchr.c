/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ansalced <ansalced@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/07 18:43:09 by ansalced          #+#    #+#             */
/*   Updated: 2023/10/07 18:43:12 by ansalced         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	const char	*ptr;
	const char	*ptr2;

	ptr = s;
	ptr2 = NULL;
	while (*ptr != '\0')
	{
		if (*ptr == (char) c)
			ptr2 = ptr;
		ptr++;
	}
	if ((char) c == '\0')
		ptr2 = ptr;
	return ((char *)ptr2);
}
