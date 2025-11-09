/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lemontei <lemontei@student.42porto.co      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/16 00:02:48 by lemontei          #+#    #+#             */
/*   Updated: 2025/10/19 03:09:00 by lemontei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

char	*ft_strrchr(const char *s, int c)
{
	unsigned int		i;
	unsigned int		found;
	char				curr_letter;
	char				*location;

	i = 0;
	found = 0;
	curr_letter = (char)c;
	while (s[i])
	{
		if (s[i] == curr_letter)
		{
			location = (char *)&s[i];
			found++;
		}
		i++;
	}
	if (s[i] == curr_letter)
		return ((char *)&s[i]);
	else if (found != 0)
		return (location);
	return (NULL);
}

/*#include <stdio.h>
#include <string.h>

int main(void)
{
	printf("%s\n", ft_strrchr("\0", 'a'));
}*/
