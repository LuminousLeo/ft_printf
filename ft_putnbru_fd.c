/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbru_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lemontei <lemontei@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/03 19:59:42 by lemontei          #+#    #+#             */
/*   Updated: 2025/11/03 20:56:33 by lemontei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static unsigned int	get_nbru_size(unsigned int nbr)
{
	int				digit_count;
	unsigned int	i;

	i = nbr;
	digit_count = 0;
	if (i == 0)
		digit_count++;
	while (i > 0)
	{
		i /= 10;
		digit_count++;
	}
	return (digit_count);
}

static unsigned int	divide_nbru(unsigned int nbr, int times)
{
	int	idx;

	idx = 0;
	if (times > 1)
	{
		while (times - 1 > idx)
		{
			nbr /= 10;
			idx++;
		}
	}
	return (nbr);
}

int	ft_putnbru_fd(unsigned int nbr, int fd)
{
	int		nbr_size;
	char	int_to_char;

	nbr_size = get_nbru_size(nbr);
	while (nbr_size > 0)
	{
		int_to_char = (divide_nbru(nbr, nbr_size) % 10) + 48;
		write(fd, &int_to_char, 1);
		nbr_size--;
	}
	return (get_nbru_size(nbr));
}
