#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	size_t		i;
	const char	*pos;

	i = 0;
	pos = NULL;
	while (s[i])
	{
		if (s[i] == c)
			pos = &s[i];
		i++;
	}
	if (c == '\0')
		return ((char *)pos);
	return ((char *)pos);
}
