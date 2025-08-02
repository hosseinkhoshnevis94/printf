/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_printf.c                                        :+:    :+:            */
/*                                                     +:+                    */
/*   By: hkhoshne <hkhoshne@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2025/06/19 12:16:37 by hkhoshne      #+#    #+#                 */
/*   Updated: 2025/06/19 12:16:37 by hkhoshne      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static int	ft_format(va_list args, const char c)
{
	if (c == 'c')
		return (ft_putchar_pf(va_arg(args, int)));
	else if (c == 's')
		return (ft_putstr_pf(va_arg(args, char *)));
	else if (c == 'p')
		return (ft_putptr_pf(va_arg(args, void *)));
	else if (c == 'd' || c == 'i')
		return (ft_putnbr_pf(va_arg(args, int)));
	else if (c == 'u')
		return (ft_putuint_pf(va_arg(args, unsigned int)));
	else if (c == 'x')
		return (ft_puthex_pf(va_arg(args, unsigned int), HEX_LOW_BASE));
	else if (c == 'X')
		return (ft_puthex_pf(va_arg(args, unsigned int), HEX_UPP_BASE));
	else if (c == '%')
		return (ft_putchar_pf('%'));
	return (0);
}

int	ft_printf(const char *str, ...)
{
	va_list	args;
	size_t	count;
	size_t	i;

	if (!str)
		return (-1);
	va_start(args, str);
	count = 0;
	i = 0;
	while (str[i])
	{
		if (str[i] == '%' && str[i + 1])
		{
			count += ft_format(args, str[i + 1]);
			i++;
		}
		else
			count += ft_putchar_pf(str[i]);
		i++;
	}
	va_end(args);
	return ((int)count);
}
