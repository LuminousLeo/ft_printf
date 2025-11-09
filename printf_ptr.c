/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   printf_ptr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: user <lemontei@student.42porto.com>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/08 10:27:10 by user              #+#    #+#             */
/*   Updated: 2025/11/08 10:29:34 by user             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static int	get_nbr_size(unsigned long long nbr)
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

static unsigned long long	divide_nbr(unsigned long long ptr, int times)
{
	while (times - 1 > 0)
	{
		ptr /= 16;
		times--;
	}
	return (ptr);
}

int	printf_ptr(unsigned long long ptr, int fd)
{
	int		ptr_size;
	char	hex_value;
	int		times_write;

	times_write = 2;
	if (ptr == 0)
	{
		write(fd, "(nil)", 5);
		return (5);
	}
	write(fd, "0x", 2);
	ptr_size = get_nbr_size(ptr);
	while (ptr_size > 0)
	{
		if (divide_nbr(ptr, ptr_size) % 16 < 10)
			hex_value = (divide_nbr(ptr, ptr_size) % 16) + '0';
		else
			hex_value = (divide_nbr(ptr, ptr_size) % 16) + '0' + 39;
		write(fd, &hex_value, 1);
		ptr_size--;
		times_write++;
	}
	return (times_write);
}
