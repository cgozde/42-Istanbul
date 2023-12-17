#include "libft.h"
void    *ft_memchr(const void *s, int c, size_t n)
{
    size_t i;
    char *str;
    
    i = 0;
    str = (char *)s;
    while (i < n)
    {
        if ((unsigned char)str[i] == (unsigned char)c)
        {
            return ((unsigned char *)s + i);
        }
        i++;
    }
    return (0);
}
/*#include <stdio.h>
#include <string.h>

int main() {
    const char *str = "Hello, World!";
    int ch = 'W';

    // str içinde 'W' karakterini ara
    const char *result = ft_memchr(str, ch, strlen(str));

    if (result != NULL) {
        printf("'%c' found at position: %ld\n", ch, result - str);
    } else {
        printf("'%c' not found.\n", ch);
    }

    return 0;
}
*/