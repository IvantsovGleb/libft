#include "libft.h"

char	*ft_strtrim(char const *s1, char const *set)
{
	const char	*p;
	size_t		len;

	p = s1;
	len = ft_strlen(s1);
	while (*p && ft_strchr(set, *p))
		p++;
	while (len && ft_strchr(set, p[len]))
		len--;
	if (len == 0)
        return (ft_substr(--p, 0, 0));
	return (ft_substr(p, 0, len + 1));
}
