#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*sub;
	size_t	slen;

	sub = "";
	slen = ft_strlen(s);
	if (start == slen)
		return (sub);
	if (start + len > slen)
		len = slen - start;
	sub = (char *)malloc(len + 1);
	if (!sub)
		return (sub);
	ft_strlcpy(sub, &s[start], len + 1);
	return (sub);
}
