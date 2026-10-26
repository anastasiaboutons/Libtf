typedef struct s_list
{
	void *content;
	struct s_list *next;
} t_list;

#include <stdlib.h>
t_list *ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list *lst_n; 
	t_list	*a;
	t_list	*b;

	(void)del;

	lst_n = NULL;
	a = NULL;

	while (lst != NULL)
	{
		b = a;
		a = malloc(sizeof(t_list));
		if (a == NULL)
			return (NULL);
		a->content = f(lst->content);
		a->next = NULL;
		if (lst_n == NULL)
			lst_n = a;
		else
			b->next = a;
		lst = lst->next;
	}
	return (lst_n)
}
