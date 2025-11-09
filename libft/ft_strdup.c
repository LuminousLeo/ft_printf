/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lemontei <lemontei@student.42porto.co      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/18 05:09:42 by lemontei          #+#    #+#             */
/*   Updated: 2025/10/18 05:45:22 by lemontei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s)
{
	size_t	i;
	size_t	s_size;
	char	*new_str;

	i = 0;
	s_size = ft_strlen(s);
	new_str = (char *)malloc((s_size * sizeof(char )) + 1);
	if (!new_str)
		return (NULL);
	while (s[i])
	{
		new_str[i] = s[i];
		i++;
	}
	new_str[i] = '\0';
	return (new_str);
}

/*
#include <stdio.h>
#include <string.h>

int main(void)
{
	char str[] = "\0";
	printf("%lu\n", strlen(str));
	printf("%zu\n", ft_strlen(str));
}
*/
