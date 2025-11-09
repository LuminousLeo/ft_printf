/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lemontei <lemontei@student.42porto.co      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/14 01:29:05 by lemontei          #+#    #+#             */
/*   Updated: 2025/10/16 00:56:33 by lemontei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	unsigned char	*tmp1;
	unsigned char	*tmp2;

	tmp1 = (unsigned char *)src;
	tmp2 = (unsigned char *)dest;
	if (!src && !dest)
		return (dest);
	while (n > 0)
	{
		*tmp2 = *tmp1;
		tmp1++;
		tmp2++;
		n--;
	}
	return (dest);
}

/*#include <stdio.h>
#include <string.h>

int main(void)
{
	char src[] = "";
	char dst[] = "";
	ft_memcpy(dst, src, 3);
	printf("%s", dst);
}*/
