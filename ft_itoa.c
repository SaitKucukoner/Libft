/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: skucukon <skucukon@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/27 20:44:53 by skucukon          #+#    #+#             */
/*   Updated: 2025/06/27 22:49:17 by skucukon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	calculate_digit_number(long number)
{
	int	digit;

	digit = 0;
	if (number <= 0)
	{
		digit++;
		number *= -1;
	}
	while (number > 0)
	{
		digit++;
		number /= 10;
	}
	return (digit);
}

char	*ft_itoa(int n)
{
	char		*str;
	long int	number;
	int			digitnumber;

	number = n;
	digitnumber = calculate_digit_number(number);
	str = (char *)malloc((digitnumber + 1) * sizeof(char));
	if (str == NULL)
		return (NULL);
	str[digitnumber] = '\0';
	if (number < 0)
	{
		*str = '-';
		number *= -1;
	}
	if (number == 0)
		*str = '0';
	while (number > 0)
	{
		str[--digitnumber] = (number % 10) + '0';
		number /= 10;
	}
	return (str);
}
