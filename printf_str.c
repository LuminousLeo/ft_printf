/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   printf_str.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lemontei <lemontei@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/04 01:45:10 by lemontei          #+#    #+#             */
/*   Updated: 2025/11/04 01:50:37 by lemontei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	printf_str(char *str, int fd)
{
	int	counter;

	if (!str)
	{
		write(fd, "(null)", 6);
		return (6);
	}
	counter = ft_strlen(str);
	ft_putstr_fd(str, fd);
	return (counter);
}
