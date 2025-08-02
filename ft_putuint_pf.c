/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_putuint_pf.c                                    :+:    :+:            */
/*                                                     +:+                    */
/*   By: hkhoshne <hkhoshne@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2025/06/19 12:17:42 by hkhoshne      #+#    #+#                 */
/*   Updated: 2025/06/19 12:17:42 by hkhoshne      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_putuint_pf(unsigned int n)
{
	int		count;
	char	c;

	count = 0;
	if (n >= 10)
		count += ft_putuint_pf(n / 10);
	c = (n % 10) + '0';
	count += ft_putchar_pf(c);
	return (count);
}
