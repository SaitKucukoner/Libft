/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: skucukon <skucukon@student.42istanbul.c    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/27 20:44:38 by skucukon          #+#    #+#             */
/*   Updated: 2025/06/27 20:46:43 by skucukon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void    *ft_calloc(size_t nmemb, size_t size)
{
    void *ptr;

    ptr = (void *)malloc(nmemb * size);
    if (ptr == NULL)
        return (NULL);
    ft_bzero(ptr, nmemb * size);
    return (ptr);
}