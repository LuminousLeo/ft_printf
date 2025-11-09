/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: user <lemontei@student.42porto.com>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/27 09:46:15 by user              #+#    #+#             */
/*   Updated: 2025/10/28 17:24:00 by lemontei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*cursor_sec;
	t_list	*new_node;
	void	*content_hold;

	cursor_sec = NULL;
	if (f && del)
	{
		while (lst)
		{
			content_hold = (*f)(lst->content);
			new_node = ft_lstnew(content_hold);
			if (!new_node)
			{
				ft_lstclear(&cursor_sec, (*del));
				del(content_hold);
				return (NULL);
			}
			ft_lstadd_back(&cursor_sec, new_node);
			lst = lst->next;
		}
	}
	return (cursor_sec);
}

/*
#include <stdio.h>

int main(void)
{
	t_list	*first = malloc(sizeof(t_list));
	t_list	*second = malloc(sizeof(t_list));
	t_list	*third = malloc(sizeof(t_list));

	first->content = (void *)10;
	second->content = (void *)20;
	third->content = (void *)30;

	first->next = second;
	second->next = third;
	third->next = NULL;
	t_list *ptr1 = first;
	printf("1st Linked list:\n");
	while (ptr1)
	{
		printf("%p\n", ptr1->content);
		ptr1 = ptr1->next;
	}

	t_list ptr2 = 
}
*/
