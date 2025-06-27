/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: skucukon <skucukon@student.42istanbul.c    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/27 20:45:18 by skucukon          #+#    #+#             */
/*   Updated: 2025/06/27 20:45:46 by skucukon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char *ft_strdup(const char *s)
{
    char *dupstr;
    size_t strlen;

    strlen = ft_strlen(s);
    dupstr = (char *)malloc((strlen + 1) * sizeof(char));
    if (dupstr == NULL)
        return (NULL);
    ft_strlcpy(dupstr, s, strlen + 1);
    return (dupstr);
}