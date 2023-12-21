/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cuyar <cuyar@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/21 19:21:43 by cuyar             #+#    #+#             */
/*   Updated: 2023/12/21 19:24:50 by cuyar            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	size_t	i;
	char	*d;
	char	*s;

	d = (char *)s1;
	s = (char *)s2;
	i = 0;
	while (i < n)
	{
		if (d[i] != s[i])
		{
			return ((unsigned char)d[i] - (unsigned char)s[i]);
		}
		i++;
	}
	return (0);
}
