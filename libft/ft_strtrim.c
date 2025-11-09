/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lemontei <lemontei@student.42porto.co      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/19 23:25:27 by lemontei          #+#    #+#             */
/*   Updated: 2025/10/20 04:44:55 by lemontei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	same_char(int c, char const *set)
{
	size_t	i;

	i = 0;
	while (set[i])
	{
		if (set[i] == c)
			return (1);
		i++;
	}
	return (0);
}

static size_t	count_malloc(char const *s1, char const *set)
{
	size_t	i;
	size_t	malloc_size;

	i = 0;
	malloc_size = 0;
	while (s1[i] && same_char(s1[i], set))
	{
		malloc_size++;
		i++;
	}
	if (s1[i])
	{
		i = ft_strlen(s1) - 1;
		while (i > 0 && same_char(s1[i], set))
		{
			malloc_size ++;
			i--;
		}
	}
	return (malloc_size);
}

static char	*cpy_str(char const *s1, char const *set, char *new_str)
{
	size_t	i;
	size_t	j;
	size_t	l;

	i = 0;
	l = 0;
	j = ft_strlen(s1) - 1;
	while (same_char(s1[i], set))
		i++;
	while (same_char(s1[j], set))
		j--;
	while (i <= j)
	{
		new_str[l] = s1[i];
		i++;
		l++;
	}
	new_str[l] = '\0';
	return (new_str);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	size_t	len;
	char	*new_str;

	len = ft_strlen(s1) - count_malloc(s1, set);
	if (!s1[0])
		return (ft_strdup(""));
	new_str = malloc((len + 1) * sizeof(char));
	if (!new_str)
		return (NULL);
	if (len > 0)
		cpy_str(s1, set, new_str);
	else
		return (ft_strdup(""));
	return (new_str);
}

/*
#include <stdio.h>

int main(void)
{
	//char str[] = "11 hello 11";
	printf("%s", ft_strtrim("  \t \t \n   \n\n\n\t", " \n\t"));
}
*/
