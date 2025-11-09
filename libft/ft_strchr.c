/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lemontei <lemontei@student.42porto.co      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/15 22:09:45 by lemontei          #+#    #+#             */
/*   Updated: 2025/10/16 00:05:12 by lemontei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

char	*ft_strchr(const char *s, int c)
{
	int		i;
	char	curr_letter;

	i = 0;
	curr_letter = (char)c;
	while (s[i])
	{
		if (s[i] == curr_letter)
		{
			return ((char *)&s[i]);
		}
		i++;
	}
	if (s[i] == curr_letter)
		return ((char *)&s[i]);
	return (NULL);
}

/*#include <stdio.h>
#include <string.h>

int main(void)
{
	printf("%s\n", ft_strchr("teste", 357));
}*/
