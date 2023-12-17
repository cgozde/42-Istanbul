#include "libft.h"
char	*ft_strnstr(const char *big, const char *little, size_t n)
{
	size_t	i;
	size_t	j;

	i = 0;
	j = 0;
	if (little == '\0' || little[0] == '\0')
		return ((char *)big);
	while (big[i] != '\0' && i < n)
	{
		if (big[i] == little[j])
		{
			while (big[i + j] == little[j] && i + j < n)
			{
				if (little[j + 1] == '\0')
					return ((char *)big + i);
				j++;
			}
			j = 0;
		}	
		i++;
	}
	return (0);
}

#include <stdio.h>
#include <string.h>
int main()
{
    char a[] = "cemre gozde";
    char b[] = "goz";
    char *result;
    result = ft_strnstr(a, b, 50);
    printf("%s",result);

}
