/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: skucukon <skucukon@student.42istanbul.c    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/27 20:44:25 by skucukon          #+#    #+#             */
/*   Updated: 2025/06/27 20:46:43 by skucukon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int ft_atoi(const char *nptr)
{
    int i;
    int result;
    int sign;

    i = 0;
    result = 0;
    sign = 1;
    while ((nptr[i] > 8 && nptr[i] < 14) || nptr[i] == ' ')
        i++;
    if (nptr[i] == '-' || nptr[i] == '+')
    {
        if (nptr[i] == '-')
            sign *= -1;
        i++;
    }
    while (nptr[i] >= '0' && nptr[i] <= '9')
    {
        result = (result * 10) + (nptr[i] - '0');
        i++;
    }
    return (sign * result);
}