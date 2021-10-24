#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t		dstlen;
	char		*d;
	const char	*s;

	dstlen = 0;
	d = dst;
	s = src;
	while (*d && dstsize > 0)
	{
		dstlen++;
		d++;
		dstsize--;
	}
	while (dstsize-- > 1 && *s)
		*d++ = *s++;
	if (dstsize == 1 || *s == 0)
		*d = '\0';
	while (*s)
		s++;
	return (s - src + dstlen);
}
