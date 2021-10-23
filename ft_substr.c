char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*sub;
	size_t	slen;

	sub = "";
	slen = ft_strlen(s);
	if (start == slen)
		return (sub);
	if (start + len <= slen)
	{
		sub = (char *)malloc(len + 1);
		if (!sub)
			return (sub);
		ft_strlcpy(sub, &s[start], len + 1);
	}
	else
	{
		sub = (char *)malloc(slen - start + 1);
		if (!sub)
			return (sub);
		ft_strlcpy(sub, &s[start], slen - start + 1);
	}
	return (sub);
}
