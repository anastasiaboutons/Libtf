typedef struct s_list
{
	void *content;
	struct s_list *next;
} t_list;

#include <stdio.h>
#include <stdlib.h>
unsigned int	ft_lstsize(t_list *lst)
{
	t_list	*p;
	p = lst;

	unsigned int	i;
	i = 0;

	while (p != NULL)
	{
		i++;
		p = p->next;
	}
	return (i);
}

int	main()
{
	t_list *a;
	a = malloc(sizeof(t_list));
	a->content = "yo";
	a->next = NULL;

	t_list *b;
	b = malloc(sizeof(t_list));
	b->content = "bof";
	b->next = a;

	printf("%d\n", ft_lstsize(b));
}
