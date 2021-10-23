#include "libft.h"

size_t	ft_strlcpy(char *dst, const char *src, size_t dstsize)
{
	char		*d;
	const char	*s;
	char		*end;

	d = dst;
	s = src;
	end = dst + dstsize;
	while (d < end && *s != '\0')
		*d++ = *s++;
	if (d < end)
		*d = 0;
	else
		*(--d) = 0;
	while (*s != '\0')
		s++;
	return (s - src);
}
