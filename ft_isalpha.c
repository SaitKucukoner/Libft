/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: skucukon <skucukon@student.42istanbul.c    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/27 12:58:53 by skucukon          #+#    #+#             */
/*   Updated: 2025/06/27 20:46:41 by skucukon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

static int ft_isupper(int c)
{
    if (c > 64 && c < 91)
        return (1);
    else
        return (0);
}

static int ft_islower(int c)
{
    if (c > 96 && c < 123)
        return (1);
    else
        return (0);
}
int ft_isalpha(int c)
{
    if (ft_isupper(c) || ft_islower(c))
        return (1);
    else
        return (0);
}