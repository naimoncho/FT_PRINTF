#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <unistd.h>
# include <strings.h>
# include <stdio.h>
# include <stdlib.h>
# include <stdarg.h>

size_t	ft_strlen(const char *str);
void	ft_putnbr(int n);
void	*ft_putnbr_base(unsigned long int num, char *base, int *len);
int		*ft_putptr(unsigned long int n, char *base);
void	ft_putchar(char c);
void	ft_putstr(char *s);
void	ft_check(char s, va_list args, int *len, int *i);
int		ft_printf(char const *str, ...);

# endif 