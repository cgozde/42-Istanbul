#include "libft.h"
void    *ft_memmove(void *dest, const void *src, size_t n)
{
    size_t i;

    i = 0;
    if(dest < src)
    {
        i = n;
        while (i > 0)
        {
            i--;
            ((unsigned char *)dest)[i] = ((unsigned char *)src)[i];
        }
    }
    else
    {
        i = 0;
        while (i < n)
        {
            ((unsigned char *)dest)[i] = ((unsigned char *)src)[i];
            i++;
        }
    }
    return (dest);
}
/*#include <stdio.h>
#include <string.h>
int main()
{
    char d[] = "cemogozonabo";
    char s[] = "yationabsin";
    ft_memmove(d,s,5);
    printf("%s\n",d);
}*/