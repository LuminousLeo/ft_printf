/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lemontei <lemontei@student.42porto.co      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/20 06:49:20 by lemontei          #+#    #+#             */
/*   Updated: 2025/10/28 17:29:12 by lemontei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t	word_count(char const *s, char c)
{
	int		i;
	size_t	words;

	i = 0;
	words = 0;
	if (!s[i])
		return (0);
	if (s[i] != c)
		words++;
	while (s[i])
	{
		while (s[i] == c)
			i++;
		if (s[i] && s[i - 1] == c && (i - 1 >= 0))
			words++;
		if (s[i])
			i++;
	}
	return (words);
}

static void	*free_arr(char **arr, int pos)
{
	while (pos >= 0)
	{
		free(arr[pos]);
		pos--;
	}
	free(arr);
	return (NULL);
}

static int	iterate_invalid(char const *s, char c, int i)
{
	while (s[i] && s[i] == c)
		i++;
	return (i);
}

char	**ft_split(char const *s, char c)
{
	int		i;
	int		j;
	int		sub_start;
	char	**str_arr;

	i = 0;
	j = 0;
	str_arr = ft_calloc(word_count(s, c) + 1, sizeof(char *));
	if (!str_arr)
		return (NULL);
	while (s[i])
	{
		i = iterate_invalid(s, c, i);
		if (s[i])
		{
			sub_start = i;
			while (s[i] != c && s[i])
				i++;
			if (s[i] || s[i - 1] != c)
				str_arr[j] = ft_substr(s, sub_start, i - sub_start);
			if (!str_arr[j++])
				return (free_arr(str_arr, j--));
		}
	}
	return (str_arr);
}

/*
#include <stdio.h>

int main(void)
{
	char *str = "1ola1mundo1deus";
	char **str_arr;
	str_arr = ft_split(str, '1');
	printf("%zu\n", word_count(str, '1'));
//	for (size_t i = 0; i < 1; i++)
//	{
//		for (size_t j = 0; j < ft_strlen(str_arr[i]); j++)
//			printf("%c\n", str_arr[i][j]);
//		printf("\n");
//	}
	free_arr(str_arr, 3);
}
*/
