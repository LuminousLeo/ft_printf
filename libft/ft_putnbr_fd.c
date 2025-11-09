/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lemontei <lemontei@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/23 02:34:58 by lemontei          #+#    #+#             */
/*   Updated: 2025/10/23 02:46:34 by lemontei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <unistd.h>

static int	nbr_size(int n)
{
	int	digit_count;

	digit_count = 0;
	if (n < 0)
	{
		n *= -1;
	}
	if (n == 0)
		digit_count = 1;
	while (n > 0)
	{
		n /= 10;
		digit_count++;
	}
	return (digit_count);
}

static int	div_nbr(int tmp, int int_size)
{
	int	idx;

	idx = 0;
	while (idx < int_size - 1)
	{
		tmp /= 10;
		idx++;
	}
	return (tmp);
}

static void	write_nbr(int n, int digit_count, int fd)
{
	char	int_char;
	int		int_size;
	int		tmp;

	int_size = digit_count;
	tmp = n;
	while (int_size > 0)
	{
		tmp = n;
		if (int_size > 1)
			tmp = div_nbr(tmp, int_size);
		tmp %= 10;
		int_char = tmp + 48;
		write(fd, &int_char, 1);
		int_size--;
	}
}

void	ft_putnbr_fd(int n, int fd)
{
	if (n == -2147483648)
		write(fd, "-2147483648", 11);
	else if (n == 0)
		write(fd, "0", 1);
	else
	{
		if (n < 0)
		{
			n *= -1;
			write(fd, "-", 1);
		}
		write_nbr(n, nbr_size(n), fd);
	}
}

/*
#include <stdio.h>

int main(void)
{
	ft_putnbr_fd(2147483647, 1);
	printf("\n");
}
*/
