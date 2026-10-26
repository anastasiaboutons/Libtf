typedef struct s_list
{
	void *content;
	struct s_list *next;
} t_list;

#include <stdio.h>

void ft_lstiter(t_list *lst, void (*f)(void *))
{
	while (lst != NULL)
	{
		f(lst->content);
		lst = lst->next;
	}

}
