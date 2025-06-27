/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: skucukon <skucukon@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/27 20:45:14 by skucukon          #+#    #+#             */
/*   Updated: 2025/06/27 23:37:12 by skucukon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	calculate_string_digit(char const *s, char c)
{
	int	i;
	int	digit;

	i = 0;
	digit = 0;
	while (s[i])
	{
		if (s[i] != c && (i == 0 || s[i - 1] == c))
			digit++;
		i++;
	}
	return (digit);
}

static int	copy_words_to_array(char **arr, const char *s, char c)
{
	int	i;
	int	start;
	int	len;

	i = 0;
	start = 0;
	while (s[start])
	{
		if (s[start] != c)
		{
			len = 0;
			while (s[start + len] && s[start + len] != c)
				len++;
			arr[i] = ft_substr(s, start, len);
			if (!arr[i])
				return (0);
			i++;
			start += len;
		}
		else
			start++;
	}
	arr[i] = NULL;
	return (1);
}

static void	free_split(char **arr)
{
	int	i;

	i = 0;
	while (arr[i])
		free(arr[i++]);
	free(arr);
}

char	**ft_split(char const *s, char c)
{
	char	**spltstr;
	int		word_count;

	if (!s)
		return (NULL);
	word_count = calculate_string_digit(s, c);
	spltstr = (char **)malloc((word_count + 1) * sizeof(char *));
	if (spltstr == NULL)
		return (NULL);
	if (copy_words_to_array(spltstr, s, c) == 0)
	{
		free_split(spltstr);
		return (NULL);
	}
	return (spltstr);
}
