/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_putnbr_pf.c                                     :+:    :+:            */
/*                                                     +:+                    */
/*   By: hkhoshne <hkhoshne@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2025/06/19 12:17:03 by hkhoshne      #+#    #+#                 */
/*   Updated: 2025/06/19 12:17:03 by hkhoshne      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_putnbr_pf(int n)
{
	char	*str;
	int		count;

	str = ft_itoa(n);
	if (!str)
		return (0);
	count = ft_putstr_pf(str);
	free(str);
	return (count);
}
