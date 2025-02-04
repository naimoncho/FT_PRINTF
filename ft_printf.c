#include "ft_printf.h"

void	ft_check(char s, va_list args, int *len, int *i)
{
	if (s == 's')
		ft_putstr(va_arg(args, char *));
	else if (s == 'c')
		ft_putchar(va_arg(args, int));
	else if (s == 'd')
		ft_putnbr(va_arg(args, int));
	else if (s == 'p')
	{
		write (1, "0x", 1);
		(*len) += 2;
		ft_putptr(va_arg(args, unsigned long), "0123456789abcdef");
	}
	else if (s == 'i')
		ft_putnbr(va_arg(args, int));
	else if (s == 'u')
		ft_putnbr_base(va_arg(args, int), "0123456789", len);
	else if ( s == 'x')
		ft_putnbr_base(va_arg(args, int), "0123456789abcdef", len);
	else if (s == 'X')
		ft_putnbr_base(va_arg(args, int), "0123456789ABCDEF", len);
	else if (s == '%')
		ft_putchar('%');
	else
		(*i)--;
}

int	ft_printf(char const *str, ...)
{
	int	i;
	int	length;
	va_list args;
	va_start(args, str);
	i = 0;
	length = 0;
	while (str[i])
	{
		if (str[i] == '%')
		{
			i ++;
			ft_check(str[i], args, &length, &i);
			i ++;
		}
		else
		{
			write (1, &str[i], 1);
			i ++;
			length ++;
		}
	}
	va_end(args);
	return (length);
}