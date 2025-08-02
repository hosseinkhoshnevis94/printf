/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_split.c                                         :+:    :+:            */
/*                                                     +:+                    */
/*   By: hkhoshne <hkhoshne@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2025/05/16 13:51:11 by hkhoshne      #+#    #+#                 */
/*   Updated: 2025/05/26 17:39:25 by hkhoshne      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	get_word_length(char const *str, char c)
{
	int	len;

	len = 0;
	while (str[len] && str[len] != c)
		len++;
	return (len);
}

static int	get_number_of_words(char const *str, char c)
{
	int	i;

	i = 0;
	while (*str)
	{
		while (*str != '\0' && *str == c)
			str++;
		if (*str)
			i++;
		while (*str != '\0' && *str != c)
			str++;
	}
	return (i);
}

static int	copy_word_to_result(char	**res, int i, char const *str, char c)
{
	int		len;

	len = get_word_length(str, c);
	res[i] = (char *)malloc(len + 1);
	if (!res[i])
	{
		while (--i >= 0)
		{
			free(res[i]);
		}
		free(res);
		return (0);
	}
	ft_memcpy(res[i], str, len);
	res[i][len] = '\0';
	return (1);
}

char	**ft_split(char const *s, char c)
{
	char	**res;
	int		i;

	res = (char **)malloc((get_number_of_words(s, c) + 1) * sizeof(char *));
	if (!res)
		return (NULL);
	i = 0;
	while (*s)
	{
		while (*s == c)
			s++;
		if (*s)
		{
			if (!copy_word_to_result(res, i, s, c))
				return (NULL);
			i++;
		}
		while (*s && *s != c)
			s++;
	}
	res[i] = 0;
	return (res);
}
