/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cuyar <cuyar@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/21 14:30:27 by cuyar             #+#    #+#             */
/*   Updated: 2023/12/21 19:48:23 by cuyar            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	size_t	i;
	char	*str;

	len = ft_strlen(s);
	str = (char *)malloc(sizeof(s) * (len + 1));
	if (!str)
	{
		return (NULL);
	}
	i = 0;
	if (start > ft_strlen(s))
		return (ft_strdup(""));
	while (i < len)
	{
		str[i] = s[i + start];
		i++;
	}
	return (str);
}
