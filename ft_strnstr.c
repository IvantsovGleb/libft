#include "libft.h"

static size_t	ft_strnlen(const char *str, size_t maxlen)
{
	size_t	i;

	i = 0;
	while (i < maxlen && str[i])
		i++;
	return (i);
}

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t	needlen;
	size_t	i;

	i = 0;
	needlen = ft_strnlen(needle, len);
	if (*needle == '\0')
		return ((char *)haystack);
	while (i < len - needlen && haystack[i])
	{
		if ((haystack[i] == needle[0])
			&& (0 == ft_strncmp(&haystack[i], needle, needlen)))
			return ((char *)&haystack[i]);
		i++;
	}
	return (NULL);
}
