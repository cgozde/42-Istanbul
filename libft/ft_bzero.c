#include "libft.h"
void    ft_bzero(void *s, size_t len)
{
    ft_memset(s,0,len);
}

#include <strings.h>
#include <stdio.h>
int main()
{
    char str[] = "cemre";
    printf("%s\n", str);
    ft_bzero(str, 10);
    printf("%s \n", str);
}
