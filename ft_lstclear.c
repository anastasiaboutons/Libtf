#include <stdlib.h>

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
