/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_putptr_pf.c                                     :+:    :+:            */
/*                                                     +:+                    */
/*   By: hkhoshne <hkhoshne@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2025/06/19 12:17:08 by hkhoshne      #+#    #+#                 */
/*   Updated: 2025/06/19 12:17:08 by hkhoshne      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static int	ft_puthex_ptr_helper(unsigned long n)
{
	int		count;
	char	*base;

	base = HEX_LOW_BASE;
	count = 0;
	if (n >= 16)
		count += ft_puthex_ptr_helper(n / 16);
	count += ft_putchar_pf(base[n % 16]);
	return (count);
}

int	ft_putptr_pf(void *ptr)
{
	int	count;

	if (!ptr)
		return (ft_putstr_pf("(nil)"));
	count = 0;
	count += ft_putstr_pf("0x");
	count += ft_puthex_ptr_helper((unsigned long)ptr);
	return (count);
}
