/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lemontei <lemontei@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/17 23:25:42 by lemontei          #+#    #+#             */
/*   Updated: 2025/10/18 05:06:26 by lemontei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	white_space(int c)
{
	if ((c >= 9 && c <= 13) || c == 32)
		return (1);
	return (0);
}

static int	is_nbr(int c)
{
	if (c >= '0' && c <= '9')
		return (1);
	return (0);
}

int	ft_atoi(const char *nptr)
{
	int		nbr;
	int		neg;
	size_t	i;

	i = 0;
	nbr = 0;
	neg = 1;
	while (white_space(nptr[i]))
		i++;
	if (nptr[i] == '-')
	{
		neg = -1;
		i++;
	}
	else if (nptr[i] == '+')
		i++;
	while (is_nbr(nptr[i]))
	{
		nbr += nptr[i] - 48;
		if (is_nbr(nptr[i + 1]))
			nbr *= 10;
		i++;
	}
	return (nbr * neg);
}

/*
#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	//printf("%i\n", atoi("-1000043"));
	printf("%i\n", ft_atoi("    123"));
}
*/
