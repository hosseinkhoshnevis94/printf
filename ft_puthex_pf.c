/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_puthex_pf.c                                     :+:    :+:            */
/*                                                     +:+                    */
/*   By: hkhoshne <hkhoshne@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2025/06/19 12:16:56 by hkhoshne      #+#    #+#                 */
/*   Updated: 2025/06/19 12:16:56 by hkhoshne      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_puthex_pf(unsigned int n, char *base)
{
	int	count;

	count = 0;
	if (n >= 16)
		count += ft_puthex_pf(n / 16, base);
	count += ft_putchar_pf(base[n % 16]);
	return (count);
}
