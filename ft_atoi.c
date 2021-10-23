#include "libft.h"

static int	ft_isspace(int c)
{
	if (c == '\t' || c == '\n' || c == '\v'
		|| c == '\f' || c == '\r' || c == ' ')
		return (1);
	return (0);
}

static int	ft_check_overflow(int base, int offset)
{
	int	int_max;

	int_max = 2147483647;
	return (base > int_max / 10
		|| (base == int_max / 10 && offset >= int_max % 10));
}

int	ft_atoi(const char *nptr)
{
	const char	*p;
	int			sign;
	int			base;

	p = nptr;
	sign = 1;
	base = 0;
	while (ft_isspace((unsigned char)*p))
		p++;
	if (*p == '+' || *p == '-')
		sign = 1 - 2 * (*p++ == '-');
	while (ft_isdigit((unsigned char)*p))
	{
		if (ft_check_overflow(base, *p - '0'))
		{
			if (sign == 1)
				return (2147483647);
			else
				return (-2147483647 - 1);
		}
		base = base * 10 + (*p++ - '0');
	}
	return (sign * base);
}
