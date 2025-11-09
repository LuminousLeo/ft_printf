/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lemontei <lemontei@student.42porto.co      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/17 20:47:34 by lemontei          #+#    #+#             */
/*   Updated: 2025/10/17 23:24:26 by lemontei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	size_t	j;
	size_t	i;

	i = 0;
	j = 0;
	if (!little[0])
		return ((char *)big);
	while (big[i] && i < len)
	{
		while ((big[i + j] == little[j]) && little[j] && i + j < len)
			j++;
		if (!little[j])
			return ((char *)&big[i]);
		j = 0;
		i++;
	}
	return (NULL);
}

/*
#include <stdio.h>
#include <string.h>
#include <bsd/string.h>

int main(void)
{
	char haystack[] = "abcdefgh";
	char needle[] = "abc";
	//int size = ft_strlen(big);
//	printf("%s\n", strnstr(haystack, needle, 2));
	printf("%s\n", ft_strnstr(haystack, needle, 2));
}
*/
