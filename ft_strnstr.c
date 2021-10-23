char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t	needlen;
	size_t	i;

	i = 0;
	needlen = ft_strlen(needle);
	if (*needle == '\0')
		return ((char *)haystack);
	while (i < len && haystack[i])
	{
		if ((haystack[i] == needle[0])
			&& (0 == ft_strncmp(&haystack[i], needle, needlen)))
			return ((char *)&haystack[i]);
		i++;
	}
	return (NULL);
}
