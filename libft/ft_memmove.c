/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lemontei <lemontei@student.42porto.co      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/14 02:01:35 by lemontei          #+#    #+#             */
/*   Updated: 2025/10/22 06:55:48 by lemontei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	size_t			i;
	unsigned char	*tmp_src;
	unsigned char	*tmp_dest;

	i = 0;
	tmp_src = (unsigned char *)src;
	tmp_dest = (unsigned char *)dest;
	if (!tmp_src && !tmp_dest)
		return (NULL);
	if (tmp_dest > tmp_src)
	{
		while (n-- > 0)
		{
			tmp_dest[n] = tmp_src[n];
		}
	}
	else
	{
		while (i < n)
		{
			tmp_dest[i] = tmp_src[i];
			i++;
		}
	}
	return (dest);
}

/*#include <stdio.h>
#include <string.h>

int main(void)
{
	char dst[] = "2222";
	char src[] = "aaa";

	printf("%s\n", (char *)ft_memmove(dst, src, 4));

}*/
