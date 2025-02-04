#include "ft_printf.h"

size_t	ft_strlen(const char *str)
{
	size_t aux;

	aux = 0;
	while (str[aux] != '\0')
	{
		aux ++;
	}
	return (aux);
}
static void	ft_recursive(int n)
{
	char	character_n;
	int		number;

	number = n;
	if ((number / 10) != 0)
	{
		ft_recursive(number / 10);
	}
	character_n = 48 + (n % 10);
	write(1, &character_n, 1);
}

void	ft_putnbr(int n)
{
	if (n == 0)
	{
		write(1, "0", 1);
		return ;
	}
	if (n == -2147483648)
	{
		write(1, "-2147483648", 11);
		return ;
	}
	else if (n < 0)
	{
		write(1, "-", 1);
		ft_recursive(-n);
	}
	else
	{
		ft_recursive(n);
	}
}
void	*ft_putnbr_base(unsigned long int num, char *base, int *len)
{
	unsigned int	i;
	unsigned int	length;

	length = ft_strlen(base);
	i = num;
	if (i >= length)
		ft_putnbr_base(i / length, base, len);
	ft_putchar(base[i % length]);
	(*len)++;
}
int	*ft_putptr(unsigned long int n, char *base)
{
	unsigned int	i;
	unsigned int	counter;

	counter = ft_strlen(base);
	i = 0;
	if (i >= counter)
		ft_putptr(n / counter, base);
	ft_putchar(base[n % counter]);
	i ++;
	return(i);
}
