void	*ft_memmove(void *s1, const void *s2, size_t n)
{
	int	i;
	char	tmp[n];

	i = 0;
	while (i < n)
	{
		tmp[i] = *((char *)s2 + i);
		i++;
	}
	i = 0;
	while (i < n)
	{
		*((char *)s1 + i) = tmp[i];
		i++;
	}
	return (s1);
}
