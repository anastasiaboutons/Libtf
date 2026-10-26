typedef struct s_list
{
	void *content;
	struct s_list *next;
} t_list;

#include <stdlib.h>
#include <stdio.h>

void ft_lstdelone(t_list *lst, void (*del)(void*))
{
	if (lst == NULL)
		return;
	del(lst->content);
	free(lst);
}

#include <string.h>

int	main(void)
{
	t_list	*m;

	m = malloc(sizeof(t_list));
	m->content = strdup("salut");
	m->next = NULL;
	ft_lstdelone(m, free);
	return (0);
}

