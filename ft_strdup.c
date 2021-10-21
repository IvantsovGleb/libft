char	*ft_strdup(const char *str)
{
	char	*copy;
	size_t	slen;

	slen = ft_strlen(str) + 1;
	copy = (char *)malloc(slen);
	if (!copy)
		return (NULL);
	ft_memcpy(copy, str, slen);
	return (copy);
}
