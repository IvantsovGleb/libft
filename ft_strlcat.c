size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t		dstlen;
        char            *d;
        const char      *s;
        char            *end;

        d = dst;
        s = src;
        end = dst + dstsize;
	dstlen = 0
	while (*d != '\0')
	{
		d++;
		dstlen += 1;
	}
        while (d < end && *s != '\0')
                *d++ = *s++;
        if (d < end)
                *d = 0;
        else
                *(--d) = 0;
        while (*s != '\0')
                s++;
        return (s - src + dstlen);
}
