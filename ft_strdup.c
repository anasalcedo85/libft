/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ansalced <ansalced@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/14 12:18:19 by ansalced          #+#    #+#             */
/*   Updated: 2023/10/14 12:18:24 by ansalced         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s1)
{
	char	*s2;

	s2 = ft_calloc(ft_strlen(s1) + 1, sizeof(char));
	if (s2 == NULL)
		return (NULL);
	ft_strlcpy(s2, s1, ft_strlen(s1) + 1);
	return ((char *)s2);
}
