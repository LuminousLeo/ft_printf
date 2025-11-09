/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lemontei <lemontei@student.42porto.co      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/17 02:27:32 by lemontei          #+#    #+#             */
/*   Updated: 2025/10/17 05:52:56 by lemontei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	size_t			i;
	unsigned char	*tmp;
	unsigned char	letter_find;

	i = 0;
	tmp = (unsigned char *)s;
	letter_find = (unsigned char)c;
	while (i < n)
	{
		if (tmp[i] == letter_find)
		{
			return (&tmp[i]);
		}
		i++;
	}
	return (NULL);
}

/*
#include <stdio.h>
#include <string.h>

int main(void)
{
	char *test = ft_memchr("hello", 'l', 6);
	printf("%s\n", test);
}
*/
