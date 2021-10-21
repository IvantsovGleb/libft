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
