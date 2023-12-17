#include "libft.h"
int   ft_memcmp(const void *s1, const void *s2, size_t n)
{
    size_t i;
    char *d, *s;
    d = (char *)s1;
    s = (char *)s2;
    i = 0;
    while (i < n)
    {
        if (d[i] != s[i])
        {
            return ((unsigned char)d[i] - (unsigned char)s[i]);
        }
        i++;
    }
    return (0);
}
/*
#include <stdio.h>
#include <string.h>
int main()
{
    char str1[] = "cemo";
    char str2[] = "cemzo";
    int result = ft_memcmp(str1,str2,4);
    printf("%d",result);
}*/