char    *ft_strjoin(char const *s1, char const *s2)
{
    size_t    i;
    size_t    s1len;
    size_t    s2len;
    char      *s;

    s1len = ft_strlen(s1);
    s2len = ft_strlen(s2);
    i = 0;
    s = (char *)malloc(s1len + s2len + 1);
    if (!s)
        return (s);
    while (i < s1len)
        s[i++] = s1[i];
    i = 0;
    while (i < s2len)
        s[s1len + i++] = s2[i];
    s[s1len + i] = '\0';
    return (s);
}
