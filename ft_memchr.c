void	*ft_memchr(const char *s, int c, size_t n)
{
	const char	*ptr;
	size_t		i;

	ptr = s;
	i = 0;
	while (i < n)
	{
		if (ptr[i] == (unsigned char)c)
			return ((void *)&ptr[i]);
		i++;
	}
	return (NULL);
}
