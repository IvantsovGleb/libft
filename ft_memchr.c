void   *ft_memchr(const char *s, int c, size_t n)
{
        const char    *ptr;
        size_t        i;
        
        ptr = s;
        for (i = 0; i < n; i++)
        {
          if (ptr[i] == (unsigned char)c)
            return (void *)&ptr[i];
        }
        return (NULL);
}
