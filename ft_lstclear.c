/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anrassou <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/26 19:18:25 by anrassou          #+#    #+#             */
/*   Updated: 2026/10/26 19:18:28 by anrassou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void*))
{
	t_list	*a;

	if (*lst == NULL)
		return ;
	a = *lst;
	while (a != 0)
	{
		a = (*lst)->next;
		del((*lst)->content);
		free(*lst);
		*lst = a;
	}
}
