void	*ft_memmove(void *s1, const void *s2, size_t n)
{
	int		i;
	char	*tmp;

	i = 0;
	while (i < n)
	{
		*((char *)s1 + i) = *((char *)s2 + i);
		i++;
	}
	return (s1);
}
