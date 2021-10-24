#include "libft.h"
#include <string.h>

void	*ft_memcpy(void *s1, const void *s2, size_t n)
{
	size_t	i;

	i = 0;
	if (!s1 && !s2)
		return (0);
	while (i < n)
	{
		*((char *)s1 + i) = *((char *)s2 + i);
		i++;
	}	
	return (s1);
}
