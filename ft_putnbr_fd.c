void	ft_putnbr_fd(int n, int fd)
{
	const char	*nstr;

	nstr = ft_atoi(n);
	if (fd > 0 && nstr)
		ft_putstr_fd(fd, str, ft_strlen(str) + 1);
}
