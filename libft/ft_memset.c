/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lemontei <lemontei@student.42porto.co      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/13 19:11:37 by lemontei          #+#    #+#             */
/*   Updated: 2025/10/14 01:25:11 by lemontei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *s, int c, size_t n)
{
	unsigned char	*tmp;
	unsigned char	value;

	tmp = (unsigned char *)s;
	value = (unsigned char)c;
	while (n > 0)
	{
		*tmp = value;
		n--;
		tmp++;
	}
	return (s);
}
