static size_t	ft_nbrlen(int n)
{
	size_t	nlen;

	nlen = 1;
	if (n == 0)
		return (0);
	while (n / 10)
		nlen++;
	return (nlen);
}

static char	*ft_itoaa(int n, int sign)
{
	char	*nstr;
	size_t	nlen;

	nlen = ft_nbrlen(n); 
	nstr = malloc(nlen + sign);
	if (!nstr)
		return (nstr);
	nstr[nlen + sign] = '\0'; 
	while (--nlen)
        {
		nstr[nlen] = (n % 10) + '0';
                n /= 10;
        }
	return (nstr);
}

char	*ft_itoa(int n)
{
	int		sign;

	sign = 0;
	if (n < 0)
		sign = 1;
	return (ft_itoaa(n, sign));
}
