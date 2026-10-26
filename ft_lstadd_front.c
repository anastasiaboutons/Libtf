typedef struct s_list
{
	void *content;
	struct s_list *next;
} t_list;

#include <stdlib.h>
#include <stdio.h>
void ft_lstadd_front(t_list **lst, t_list *new)
{
	new->next = *lst;
	*lst = new;

}

int	main()
{

	t_list	*a;
	a = malloc(sizeof(t_list)); 
	a->content = "salut";
	a->next = NULL;

	t_list	*n;
	n = malloc(sizeof(t_list));
	n->content = "non";
	n->next = NULL;

	ft_lstadd_front(&a, n);

	t_list	*p;
	p = a;
	while (p != NULL)
	{
		printf("%s\n", (char *)p->content);
		p = p->next;
	}
}
