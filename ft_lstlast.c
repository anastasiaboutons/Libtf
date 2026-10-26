typedef struct s_list
{
	void *content;
	struct s_list *next;
} t_list;

#include <stdlib.h>
#include <stdio.h>
t_list *ft_lstlast(t_list *lst)
{
	t_list	*p;
	p = lst;

	while (p->next != NULL)
	{
		p = p->next;
	}
	return(p);
}

int	main()
{
	t_list	*a;
	a = malloc(sizeof(t_list));
	a->content = "salut";

	t_list	*b;
	b = malloc(sizeof(t_list));
	b->content = "hey";
	a->next = b;
	b->next = NULL;

	printf("%s\n",(char *)ft_lstlast(a)->content);
}
