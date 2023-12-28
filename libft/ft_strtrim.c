/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cuyar <cuyar@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/21 16:19:40 by cuyar             #+#    #+#             */
/*   Updated: 2023/12/28 16:46:21 by cuyar            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	checkchar(char a, char const *b)
{
	int	i;

	i = ft_strlen(b);
	while (i >= 0)
	{
		if (b[i] == a)
			return (1);
		i--;
	}
	return (0);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	size_t	i;
	size_t	len;
	char	*str;

	i = 0;
	len = ft_strlen(s1);
	if (s1 == 0)
		return (0);
	while (s1[i] && checkchar(s1[i], set))
		i++;
	while (s1[len - 1] && checkchar(s1[len], set) && i < len)
		len--;
	str = ft_substr(s1, i, len - i + 1);
	return (str);
}
