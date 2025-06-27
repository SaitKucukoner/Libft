/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: skucukon <skucukon@student.42istanbul.c    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/27 20:45:00 by skucukon          #+#    #+#             */
/*   Updated: 2025/06/27 20:52:24 by skucukon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	unsigned char		*d;
	const unsigned char	*s;

	d = (unsigned char *)dest;
	s = (const unsigned char *)src;
	if (dest == src || n == 0)
		return (dest);
	if (d < s)
	{
		while (n-- > 0)
			*d++ = *s++;
	}
	else
	{
		d += n;
		s += n;
		while (n-- > 0)
			*--d = *--s;
	}
	return (dest);
}
