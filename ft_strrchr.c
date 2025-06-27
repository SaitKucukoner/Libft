/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: skucukon <skucukon@student.42istanbul.c    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/27 20:45:32 by skucukon          #+#    #+#             */
/*   Updated: 2025/06/27 20:55:30 by skucukon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char    *ft_strrchr(const char *s, int c)
{
    size_t srclen;

    srclen = ft_strlen(s) + 1;
    while (srclen-- > 0)
        if (s[srclen] == (char)c)
            return ((char *)&s[srclen]);
    return (NULL);
}