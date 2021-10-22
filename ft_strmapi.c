char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	char	*sdup;
	size_t	i;

	i = 0;
	sdup = ft_strdup(s); 
	if (!s || !f || !sdup)
		return (NULL);
	while (sdup[i])
	{
		sdup[i] = f(i, char);
		i++;
	}
	return (sdup);
}
