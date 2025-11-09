/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_hexs_convert_fd.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lemontei <lemontei@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/03 22:59:11 by lemontei          #+#    #+#             */
/*   Updated: 2025/11/03 23:38:37 by lemontei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static int	get_nbr_size(unsigned int nbr)
{
	int	digit_count;

	digit_count = 0;
	while (nbr > 0)
	{
		nbr /= 16;
		digit_count++;
	}
	return (digit_count);
}

static unsigned int	divide_nbr(unsigned int nbr, int times)
{
	while (times - 1 > 0)
	{
		nbr /= 16;
		times--;
	}
	return (nbr);
}

int	ft_hexl_convert_fd(unsigned int nbr, int fd)
{
	int		nbr_size;
	char	hex_value;
	int		times_write;

	times_write = 0;
	if (nbr == 0)
	{
		write(fd, "0", 1);
		return (1);
	}
	nbr_size = get_nbr_size(nbr);
	while (nbr_size > 0)
	{
		if (divide_nbr(nbr, nbr_size) % 16 < 10)
			hex_value = (divide_nbr(nbr, nbr_size) % 16) + '0';
		else
			hex_value = (divide_nbr(nbr, nbr_size) % 16) + '0' + 39;
		write(fd, &hex_value, 1);
		nbr_size--;
		times_write++;
	}
	return (times_write);
}
