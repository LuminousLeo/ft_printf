/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: user <lemontei@student.42porto.com>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/27 09:06:57 by user              #+#    #+#             */
/*   Updated: 2025/10/27 09:38:11 by user             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void*))
{
	t_list	*ptr;

	if (*lst)
	{
		ptr = *lst;
		while (ptr)
		{
			(*del)(ptr->content);
			*lst = ptr->next;
			free(ptr);
			ptr = *lst;
		}
		*lst = NULL;
	}
}
