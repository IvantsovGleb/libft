#include <stdlib.h>

void    *ft_calloc(size_t number, size_t size)
{
        void    *p;

        if (number == 0 || size == 0)
        {
              number = 1;
              size = 1;
        }
        p = (void *)malloc(number * size);
        if (p)
                ft_bzero(p, number * size);
        return (p);
}
