#include "ft_printf.h"

int	ft_char(char c)
{
	write(1, &c, 1);
	return (1);
}

void	ft_putstr(char *s, int *len)
{
	size_t	i;

	i = 0;
	if (!s)
	{
		write (1, "(null)", 6);
		(*len) += 6;
		return ;
	}
	while (s[i])
	{
		write(1, &s[i], 1);
		i ++;
		(*len)++;
	}
}
