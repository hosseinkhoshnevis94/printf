/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_strchr.c                                        :+:    :+:            */
/*                                                     +:+                    */
/*   By: hkhoshne <hkhoshne@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2025/05/03 14:16:56 by hkhoshne      #+#    #+#                 */
/*   Updated: 2025/05/26 17:54:26 by hkhoshne      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *str, int c)
{
	size_t				i;
	const unsigned char	target_char = (unsigned char)c;

	i = 0;
	while (str[i])
	{
		if ((unsigned char)str[i] == target_char)
			return ((char *)&str[i]);
		i++;
	}
	if (target_char == '\0')
		return ((char *)&str[i]);
	return (NULL);
}
