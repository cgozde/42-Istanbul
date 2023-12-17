#include "libft.h"
void    *ft_memset (void *s, int c, size_t len)
{
    char *p;

    p = (char *)s;
    while(len > 0)
    {
        p[len-1] = c; //p[len-1] p işaretçisinin gösterdiği bellek bloğunun sonuncu byte'ıdır.
        len--;
    }
    return (s); //başlangıç adresini döndür.
}
