#include "libft.h"

void	ft_putstr_fd(char *s, int fd)
{
	const char	*p;

	p = s;
	if (fd > 0 && p)
	{
		while (*p)
			ft_putchar_fd(*p++, fd);
	}
}
