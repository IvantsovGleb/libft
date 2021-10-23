#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t		dstlen;
	char		*d;
	const char	*s;
	char		*end;

	dstlen = ft_strlen(dst);
	d = dst;
	s = src;
	end = dst + dstsize;
	while (*d != '\0')
		d++;
	while (d < end && *s != '\0')
		*d++ = *s++;
	if (d < end)
		*d = 0;
	else
		*(--d) = 0;
	while (*s != '\0')
		s++;
	return (s - src + dstlen);
}
