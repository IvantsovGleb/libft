static size_t    ft_strlen(const char *s)
{
    size_t    i;
    
    i = 0;
    while (s[i])
        i++;
    return (i);
}

static int     ft_strncmp(const char *s1, const char *s2, size_t n)
{
        char    *s11;
        char    *s22;
        char    *end;

        s11 = s1;
        s22 = s2;
        while (*s11 && n > 0 && (*s11 == *s22))
        {
                s11++;
                s22++;
                n--;
        }
        if (n == 0)
                return (0);
        return (*(unsigned char *)s11 - *(unsigned char *)s22);
}

char    *ft_strnstr(const char *haystack, const char *needle, size_t len)
{
        size_t          needlen;
        size_t          i;
        
        needlen = ft_strlen(needle);
        if (*needle == '\0')
                return ((char *)haystack);
        for (i = 0; i < len && haystack[i]; i++)
        {
		if ((haystack[i] == needle[0]) && (0 == ft_strncmp(&haystack[i], needle, needlen)))
			return ((char *)&haystack[i]);
        }
        return (NULL);
}
