/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anrassou <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/26 19:19:13 by anrassou          #+#    #+#             */
/*   Updated: 2026/10/26 19:19:15 by anrassou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*lst_n;
	t_list	*a;
	t_list	*b;

	lst_n = NULL;
	a = NULL;
	while (lst != NULL)
	{
		b = a;
		a = malloc(sizeof(t_list));
		if (a == NULL)
		{
			ft_lstclear(&lst_n, del);
			return (NULL);
		}
		a->content = f(lst->content);
		a->next = NULL;
		if (lst_n == NULL)
			lst_n = a;
		else
			b->next = a;
		lst = lst->next;
	}
	return (lst_n);
}
