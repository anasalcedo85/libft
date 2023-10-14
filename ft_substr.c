/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ansalced <ansalced@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/14 14:00:50 by ansalced          #+#    #+#             */
/*   Updated: 2023/10/14 14:00:53 by ansalced         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*s2;
	size_t	i;
	size_t	min;

	if (len == 0 || ft_strlen(s) == 0)
	{
		s2 = ft_calloc(1, sizeof(char));
		return (s2);
	}
	else if (ft_strlen(s) < len)
		min = ft_strlen(s) + 1;
	else
		min = len + 1;
	s2 = ft_calloc (min, sizeof(char));
	if (s2 == NULL)
		return (NULL);
	else if (start >= ft_strlen(s))
		return (s2);
	i = 0;
	while (i < len && s[start] != '\0')
		s2[i++] = s[start++];
	return (s2);
}
