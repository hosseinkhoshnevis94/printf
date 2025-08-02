/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_calloc.c                                        :+:    :+:            */
/*                                                     +:+                    */
/*   By: hkhoshne <hkhoshne@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2025/05/03 16:27:31 by hkhoshne      #+#    #+#                 */
/*   Updated: 2025/05/26 17:53:51 by hkhoshne      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t count, size_t size)
{
	char	*memory;

	if (count == 0 || size == 0)
		return (malloc(0));
	if (size != 0 && count > (size_t)-1 / size)
		return (NULL);
	memory = malloc(count * size);
	if (!memory)
		return (NULL);
	ft_bzero(memory, count * size);
	return (memory);
}
