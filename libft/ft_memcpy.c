#include "libft.h"
void    *ft_memcpy(void *dest, const void *src, size_t n)
{
    size_t i;
    char *d;
    char *s;

    
    d = (char *)dest;
    s = (char *)src;
    i = 0;
    while (i < n)
    {
        d[i] = s[i];
        i++;  
    }
    return (dest);
}
/*#include <stdio.h>
#include <string.h>
int main()
{
    char dest[] = "cemre";
    char src[] = "uyaragubugu";
    printf("%s %s\n",dest,src);
    ft_memcpy(dest,src,7);
    printf("%s\n",dest);
    memcpy(dest,src,7);
    printf("%s\n",dest);
}
*/