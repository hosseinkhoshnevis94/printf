/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_memset.c                                        :+:    :+:            */
/*                                                     +:+                    */
/*   By: hkhoshne <hkhoshne@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2025/05/03 12:55:18 by hkhoshne      #+#    #+#                 */
/*   Updated: 2025/05/26 17:54:12 by hkhoshne      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *s, int c, size_t len)
{
	unsigned char	*ptr;

	ptr = s;
	while (len--)
		*ptr++ = (unsigned char)c;
	return (s);
}
