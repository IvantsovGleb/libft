#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	char	*sdup;
	size_t	i;

	i = 0;
	if (!s)
		return (NULL);
	sdup = ft_strdup(s);
	if (!f || !sdup)
		return (NULL);
	while (sdup[i])
	{
		sdup[i] = f(i, sdup[i]);
		i++;
	}
	return (sdup);
}
