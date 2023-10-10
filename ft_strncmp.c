/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ansalced <ansalced@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/10 22:28:07 by ansalced          #+#    #+#             */
/*   Updated: 2023/10/10 22:28:09 by ansalced         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	size_t	counter;

	counter = 1;
	if (n == 0)
		return (0);
	while ((unsigned char)*s1 == (unsigned char)*s2 && counter < n
		&& (unsigned char)*s1 != '\0' && (unsigned char)*s2 != '\0')
	{
		s1++;
		s2++;
		counter++;
	}
	if ((unsigned char)*s1 > (unsigned char)*s2)
		return (1);
	else if ((unsigned char)*s1 < (unsigned char)*s2)
		return (-1);
	else
		return (0);
}
