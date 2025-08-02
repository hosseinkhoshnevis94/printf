/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_strrchr.c                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: hkhoshne <hkhoshne@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2025/05/03 14:58:38 by hkhoshne      #+#    #+#                 */
/*   Updated: 2025/05/26 17:55:05 by hkhoshne      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *str, int c)
{
	char		*last;
	char		target_char;
	size_t		i;

	last = (char *)str;
	target_char = (char)c;
	i = ft_strlen(str);
	while (i > 0)
	{
		if (last[i] == target_char)
			return (last + i);
		i--;
	}
	if (last[i] == target_char)
		return (last);
	return (NULL);
}
