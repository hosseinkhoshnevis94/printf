/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_strjoin.c                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: hkhoshne <hkhoshne@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2025/05/03 16:28:09 by hkhoshne      #+#    #+#                 */
/*   Updated: 2025/05/20 08:38:21 by hkhoshne      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*str2;
	size_t	i;
	size_t	j;

	i = 0;
	j = 0;
	if (s1 && !s2)
		return (ft_strdup(s1));
	if (!s1 && s2)
		return (ft_strdup(s2));
	str2 = (char *)malloc((ft_strlen(s1) + ft_strlen(s2) + 1) * sizeof(char));
	if (!str2)
		return (0);
	while (i < ft_strlen(s1))
	{
		str2[i] = s1[i];
		i++;
	}
	while (j < ft_strlen(s2))
	{
		str2[i + j] = s2[j];
		j++;
	}
	str2[i + j] = '\0';
	return (str2);
}
