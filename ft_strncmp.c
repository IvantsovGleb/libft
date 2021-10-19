int     ft_strncmp(const char *s1, const char *s2, size_t n)
{
        char    *s11;
        char    *s22;
        char    *end;

        s11 = s1;
        s22 = s2;
        while (*s11 && n > 0 && (*s11 == *s22))
        {
                s11++;
                s22++;
                n--;
        }
        if (n == 0)
                return (0);
        return (*(unsigned char *)s11 - *(unsigned char *)s22);
}
