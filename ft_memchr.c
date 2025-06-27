/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: skucukon <skucukon@student.42istanbul.c    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/27 20:44:55 by skucukon          #+#    #+#             */
/*   Updated: 2025/06/27 20:57:49 by skucukon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void *ft_memchr(const void *s, int c, size_t n)
{
    const unsigned char *str;

    str = (unsigned char *)s;
    while (n-- > 0)
    {
        if (*str == (unsigned char)c)
            return ((void *)str);
        str++;
    }
    return (NULL);
}