#include "libft.h"

void	ft_putnbr_fd(int n, int fd)
{
	char	*nstr;

	nstr = ft_itoa(n);
	if (fd > 0 && nstr)
		ft_putstr_fd(nstr, fd);
}
