/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cuyar <cuyar@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/09 17:25:33 by cuyar             #+#    #+#             */
/*   Updated: 2023/12/21 19:37:43 by cuyar            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *str, int c)
{
	int	i;

	i = 0;
	while (str[i])
	{
		if (str[i] == ((char)c))
		{
			return ((char *)(str + i));
		}
		i++;
	}
	if (str[i] == '\0')
	{
		return ((char *)(str + i));
	}
	return (0);
}
