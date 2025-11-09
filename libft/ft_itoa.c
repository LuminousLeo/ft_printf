/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lemontei <lemontei@student.42porto.co      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/22 03:33:35 by lemontei          #+#    #+#             */
/*   Updated: 2025/10/23 02:53:28 by lemontei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t	count_digits(int n)
{
	int	digits;

	digits = 0;
	while (n > 0)
	{
		n /= 10;
		digits++;
	}
	return (digits);
}

static char	*str_recursion(char *str, int idx, int n)
{
	if (n >= 10)
	{
		str[idx] = (n % 10) + 48;
		str_recursion(str, idx - 1, n / 10);
	}
	else
		str[idx] = n + 48;
	return (str);
}

char	*ft_itoa(int n)
{
	int		neg;
	char	*str;

	neg = 0;
	if (n == -2147483648)
		return (ft_strdup("-2147483648"));
	if (n == 0)
		return (ft_strdup("0"));
	if (n < 0)
	{
		n *= -1;
		neg++;
	}
	str = (char *)ft_calloc((count_digits(n) + neg + 1), sizeof(char));
	if (!str)
		return (NULL);
	if (neg != 0)
		str_recursion(str, count_digits(n), n);
	if (neg == 0)
		str_recursion(str, count_digits(n) - 1, n);
	if (neg > 0)
		str[0] = '-';
	return (str);
}

/*
#include <stdio.h>

int	main(void)
{
	printf("%s\n", ft_itoa(-1000034));
}
*/
