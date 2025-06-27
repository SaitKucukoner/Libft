/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: skucukon <skucukon@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/27 20:45:35 by skucukon          #+#    #+#             */
/*   Updated: 2025/06/27 23:55:12 by skucukon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*substr;
	size_t	sublen;

	if (!s)
		return (NULL);
	if (len == 0 || start >= ft_strlen(s))
	{
		substr = (char *)malloc(1);
		if (substr == NULL)
			return (NULL);
		*substr = '\0';
		return (substr);
	}
	if (ft_strlen(s) - start < len)
		sublen = ft_strlen(s) - start;
	else
		sublen = len;
	substr = (char *)malloc((sublen + 1) * sizeof(char));
	if (substr == NULL)
		return (NULL);
	ft_strlcpy(substr, s + start, sublen + 1);
	return (substr);
}
