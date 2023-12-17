#include "libft.h"
size_t  ft_strlcat(char *dest, const char *src, size_t size)
{
	size_t	i;
	size_t	j;

	i = 0;
	j = 0;
	while (dest[i] && i < size)
	{
		i++;
	}
	while (src[j] && (i + j + 1) < size)
	{
		dest[i + j] = src[j];
		j++;
	}
	if (i < size)
	{
		dest[i + j] = '\0';
	}
	return (i + ft_strlen(src));
}

/*int main()
{
    char s1[50] = "cemre";
    const char s2[50] = "uyar";
	size_t x = 15;
 
	ft_strlcat(s1,s2,x);
    printf("%s\n", s1);
}
*/