/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_substr.c                                        :+:    :+:            */
/*                                                     +:+                    */
/*   By: hkhoshne <hkhoshne@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2025/05/03 16:27:57 by hkhoshne      #+#    #+#                 */
/*   Updated: 2025/05/26 17:53:39 by hkhoshne      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*substr;
	size_t	i;
	size_t	remaining_len;

	if (!s)
		return (0);
	if (ft_strlen(s) < (size_t)start)
		return (ft_strdup(""));
	remaining_len = ft_strlen(s) - start;
	if (remaining_len < len)
		substr = (char *)malloc((remaining_len + 1) * sizeof(char));
	else
		substr = (char *)malloc((len + 1) * sizeof(char));
	if (!substr)
		return (NULL);
	i = 0;
	while (i < len && s[start + i])
	{
		substr[i] = s[start + i];
		i++;
	}
	substr[i] = '\0';
	return (substr);
}
