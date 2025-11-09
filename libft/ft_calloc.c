/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lemontei <lemontei@student.42porto.co      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/18 22:59:22 by lemontei          #+#    #+#             */
/*   Updated: 2025/10/19 00:06:04 by lemontei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t nmemb, size_t size)
{
	void	*arr;

	if (nmemb * size > SIZE_MAX)
		return (NULL);
	arr = (void *)malloc(nmemb * size);
	if (!arr)
		return (arr);
	ft_bzero(arr, nmemb * size);
	return (arr);
}

/*
#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	int i = 0;
	int *arr1 = ft_calloc(0, 0);
	while (i < 5 * 1)
	{
		printf("%i\n", arr1[i]);
		i++;
	}
}
*/
