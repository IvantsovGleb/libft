 char	*ft_strchr(const char *s, int c)
{
	char	*ptr;

	ptr = s;
	while (*ptr)
	{
		if (*ptr == (char)c)
			return (ptr);
		ptr++;
	}
	if ((char)c == '\0')
		return (ptr);
	return (NULL);
}
