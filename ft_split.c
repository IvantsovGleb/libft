static char	**ft_memfree(char **arrs)
{
	size_t i;

	i = 0;
	while (arrs[i])
		free(arrs[i++]);
	free(arrs);
	return (NULL);
}

static size_t	ft_countokens(const char *s, char delim)
{
	size_t	count;
	size_t	i;

	count = 0;
	i = 0;
	while (s[i])
	{
		if ((s[i + 1] && s[i] != delim && s[i + 1] == c))
			|| (s[i] != delim && !s[i])
			count++;
		i++;
	}
	return (count);
}

static size_t	ft_slenc(const char *s, char c)
{
	size_t	i;

	i = 0;
	while (s[i] && s[i] != c)
		i++;
	return (i);
}

char	**ft_split(char const *s, char c)
{
	char	**arrs;
	size_t	i;
	size_t	start;

	i = 0;
	start = 0;
	if (!s)
		return (NULL);	
	arrs = malloc((ft_countokens(s, c) + 1) * sizeof(char *));
	if (!arrs)
		return (arrs);
	while (s[i++] == c)
		start++;
	i = 0;
	while(i < ft_countokens(s, c))
	{
		arrs[i] = ft_substr(s, (unsigned char)start, ft_slenc(&s[start], c));
		if (!arrs[i++])
			return (ft_memfree(arrs));
		start = start + ft_slenc(&s[start], c);
		while (s[start] == c)
			start++;
	}
	arrs[i] = NULL;
	return (arrs);
}
