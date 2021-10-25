#include "libft.h"

char    *ft_strtrim(char const *s1, char const *set)
{
        size_t          len;
        size_t          start;
        char            *ts;

        if (!s1)
                return (NULL);
        start = 0;
        while (s1[start] && ft_strchr(set, s1[start]))
                start++;
        len = ft_strlen(s1) - 1;
        while (len && ft_strchr(set, s1[len]))
                len--;
	if (len == 0)
		return (ft_calloc(1, 1));
        ts = malloc(len - start + 2);
        if (!ts)
                return (NULL);
        ft_strlcpy(ts, &s1[start], len - start + 2);
        return (ts);
}
