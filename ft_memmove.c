#include "libft.h"

void	*ft_memmove(void *s1, const void *s2, size_t n)
{
	size_t	i;

	i = 0;
	if (!s1 && !s2)
		return (NULL);
	if (s2 < s1)
	{
		while (n--)
			*((unsigned char *)s1 + n) = *((unsigned char *)s2 + n);
	}
	else
	{
		while (i < n)
		{
			*((char *)s1 + i) = *((char *)s2 + i);
			i++;
		}
	}
	return (s1);
}
