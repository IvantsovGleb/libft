 char	*ft_strchr(const char *s, int c)
{
	char	*ptr;

	ptr = s;
	while (*ptr)
	{
		if (*ptr == c)
			return (ptr);
		ptr++;
	}
	if (c == '\0')
		return (ptr);
	return (NULL);
}
