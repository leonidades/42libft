#include "libft.h"

void *ft_memchr(const void *s,int c, size_t n)
{
    size_t	i;

    i = 0;
    while ((*(char*)s) && n--)
    {
        if ((*(char*)s) == c)
        {
            return((char*)s);
        }
        s++;
    }
    return(0);
}