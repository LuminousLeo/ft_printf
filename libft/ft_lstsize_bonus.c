/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstsize.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lemontei <lemontei@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/25 01:28:40 by lemontei          #+#    #+#             */
/*   Updated: 2025/10/25 01:58:22 by lemontei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_lstsize(t_list *lst)
{
	int		lst_size;
	t_list	*ptr;

	lst_size = 0;
	ptr = lst;
	while (ptr)
	{
		lst_size++;
		ptr = ptr->next;
	}
	return (lst_size);
}
