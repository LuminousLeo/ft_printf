/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   printf_nbr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lemontei <lemontei@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/04 02:35:19 by lemontei          #+#    #+#             */
/*   Updated: 2025/11/04 02:45:04 by lemontei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static int	get_nbr_size(int tmp)
{
	int	counter;

	counter = 0;
	if (tmp < 0)
	{
		tmp *= -1;
		counter++;
	}
	else if (tmp == 0)
		counter++;
	while (tmp > 0)
	{
		tmp /= 10;
		counter++;
	}
	return (counter);
}

int	printf_nbr(int nbr, int fd)
{
	int	digit_count;

	if (nbr == -2147483648)
	{
		ft_putnbr_fd(nbr, fd);
		return (11);
	}
	digit_count = get_nbr_size(nbr);
	ft_putnbr_fd(nbr, fd);
	return (digit_count);
}
