typedef struct s_list
{
	void *content;
	struct s_list *next;
} t_list;

#include <stdlib.h>
#include <stdio.h>

void	ft_lstadd_back(t_list **lst, t_list *new)
{
	t_list	*p;
	p = *lst;

	if (*lst == NULL)
	{
		*lst = new;
		new->next = NULL;
		return;
	}	

	while (p->next != NULL)
		p = p->next;
	p->next = new;
	new->next = NULL;
}

int	main()
{
	t_list	*a;
//	a = malloc(sizeof(t_list));
//	a->content = "yo";
//	a->next = NULL; 
	a = NULL;

	t_list	*b;
	b = malloc(sizeof(t_list));
	b->content = "hello";
 	ft_lstadd_back(&a, b);
	printf("%s\n", (char *)a->content);
}
