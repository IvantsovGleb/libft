char	*ft_strrchr(const char *s, int c)
{
        char    *ptr;
	char	*pos;

        ptr = s;
	pos = NULL;
        while (*ptr)
        {
                if (*ptr == c)
                        pos = ptr;
                ptr++;
        }
        if (c == '\0')
                return (ptr);
        return (pos);
}
