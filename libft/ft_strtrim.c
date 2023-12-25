/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cuyar <cuyar@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/21 16:19:40 by cuyar             #+#    #+#             */
/*   Updated: 2023/12/25 15:26:17 by cuyar            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s1, char const *set)
{
	size_t	i;
	size_t j;
	size_t	len;
	char	*str;
	
	str = 0;
	if (s1 != 0 && set != 0)
	{
		i = 0;
		len = ft_strlen(s1);
		while (s1[i] && ft_strchr(set, s1[i]))
			i++;
		while (s1[len - 1] && ft_strchr(set, s1[len - 1]) && len > i)
			len--;
		str = (char *)malloc(sizeof(char) * (len - i + 1));
		if (str)
		{
			j = 0;
			while(i < len)
			{
				str[j] = s1[i];
				i++;
				j++;
			}
			str[j] = '\0';
		}
	}
	return (str);
}
/*
#include <stdio.h>
int main()
{
    char c[] = "cemrece";
    char l[] = "ce";
    char *m = ft_strtrim(c, l);
    if (m)
    {
        printf("%s", m);
        free(m); // Belleği serbest bırakmayı unutmayın
    }
    return 0;
}
*/