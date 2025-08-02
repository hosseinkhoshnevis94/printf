/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_itoa.c                                          :+:    :+:            */
/*                                                     +:+                    */
/*   By: hkhoshne <hkhoshne@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2025/05/03 16:28:52 by hkhoshne      #+#    #+#                 */
/*   Updated: 2025/05/22 13:19:59 by hkhoshne      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t	get_num_length(long n)
{
	size_t	count;

	if (n == 0)
		return (1);
	count = 0;
	if (n < 0)
	{
		n = -n;
		count++;
	}
	while (n > 0)
	{
		n = n / 10;
		count++;
	}
	return (count);
}

static char	*build_number_string(long n, char *number, size_t size)
{
	number[size] = '\0';
	if (n < 0)
	{
		number[0] = '-';
		n = -n;
	}
	while (n > 0)
	{
		number[--size] = (n % 10) + '0';
		n = n / 10;
	}
	return (number);
}

char	*ft_itoa(int n)
{
	char	*number;
	size_t	size;
	long	n_long;

	n_long = (long)n;
	if (n_long == 0)
		return (ft_strdup("0"));
	size = get_num_length(n_long);
	number = (char *)malloc((size + 1) * sizeof(char));
	if (!number)
		return (NULL);
	return (build_number_string(n_long, number, size));
}
