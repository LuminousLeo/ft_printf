/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lemontei <lemontei@student.42porto.co      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/16 02:53:51 by lemontei          #+#    #+#             */
/*   Updated: 2025/10/17 02:26:14 by lemontei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	size_t	i;

	i = 0;
	while ((s1[i] || s2[i]) && i < n)
	{
		if ((unsigned char)s1[i] > (unsigned char)s2[i])
			return (1);
		if ((unsigned char)s1[i] < (unsigned char)s2[i])
			return (-1);
		i++;
	}
	return (0);
}
/*#include <stdio.h>
#include <string.h>

int main(void)
{
//	printf("%i\n", strncmp("abcdef", "abcdefghijklmnop", 6));
	printf("%i\n", ft_strncmp("abcdef", "abc\375xx", 5));
//	printf("%i\n", ft_strncmp("abc", "abcd", 6));
}
*/
