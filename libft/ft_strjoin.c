/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lemontei <lemontei@student.42porto.co      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/19 03:40:19 by lemontei          #+#    #+#             */
/*   Updated: 2025/10/19 05:13:20 by lemontei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

char	*ft_strjoin(char const *s1, char const *s2)
{
	size_t	i;
	size_t	j;
	size_t	s1_size;
	char	*new_str;

	i = 0;
	j = 0;
	s1_size = ft_strlen(s1);
	new_str = (char *)malloc((s1_size + ft_strlen(s2) + 1) * sizeof(char));
	if (!new_str)
		return (NULL);
	while (s1[j])
	{
		new_str[j] = s1[j];
		j++;
	}
	while (s2[i])
	{
		new_str[s1_size + i] = s2[i];
		i++;
	}
	new_str[s1_size + i] = '\0';
	return (new_str);
}

/*
#include <stdio.h>

int main(void)
{
	printf("%s\n", ft_strjoin("lorem ipsum", "dolor sit amet"));
}
*/
