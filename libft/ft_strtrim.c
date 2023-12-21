/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cuyar <cuyar@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/21 16:19:40 by cuyar             #+#    #+#             */
/*   Updated: 2023/12/21 18:01:57 by cuyar            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s1, char const *set)
{/*
	size_t	i;
	size_t	j;
	char	*str;

	str = 0;
	if (s1 != 0 && set != 0)
	{
		i = 0;
		j = ft_strlen(s1);
		while (s1[i] && ft_strchr(set, s1[i]))
			i++;
		while (s1[j - 1] && ft_strchr(set, s1[j - 1]) && j > i)
			j--;
		str = (char *)malloc(sizeof(char) * (j - i + 1));
		if (str)
			ft_strlcpy(str, &s1[i], j - i + 1);
	}
	return (str);
}*/
	size_t	i;
	size_t	len;
	char	*str;
	
	i = 0;
	len = ft_strlen(s1);
	if (*s1 && *set)
	{
		while (s1[i] && ft_strchr(set, s1[i]))
			i++;
		while (s1[len - 1] && ft_strchr(set, s1[len - 1] && len > i))
			len--;
		str = (char *)malloc(sizeof(char) * (len - i + 1));
		if (*str)
		{
			str[i] = s1[i];
		}
	}
	return (str);
}


#include <stdio.h>
int main()
{
	char c[] = "cemrece";
	char l[] = "ce";
	//char m[] = ft_strtrim(c, l);
	printf("%s",ft_strtrim(c, l));
}
/*#include <stdio.h>

// ft_strtrim fonksiyonunun tanımı burada olmalı

int main() {
    const char *original = "   Merhaba, dunya!   ";
    const char *set = " ";

    char *trimmed = ft_strtrim(original, set);

    if (trimmed != NULL) {
        printf("Orijinal: \"%s\"\nTemizlenmiş: \"%s\"\n", original, trimmed);

        // Bellek serbest bırakma
        free(trimmed);
    } else {
        printf("Bellek tahsis hatasi!\n");
    }

    return 0;
}*/