/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_strnstr.c                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: hkhoshne <hkhoshne@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2025/05/03 16:27:04 by hkhoshne      #+#    #+#                 */
/*   Updated: 2025/05/26 17:54:59 by hkhoshne      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *s1, const char *s2, size_t len)
{
	size_t	i;
	size_t	j;

	i = 0;
	if (!*s2)
		return ((char *)s1);
	while (s1[i] && i < len)
	{
		j = 0;
		while (s2[j] && s1[i + j] == s2[j] && (i + j) < len)
			j++;
		if (!s2[j])
			return ((char *)&s1[i]);
		i++;
	}
	return (NULL);
}
