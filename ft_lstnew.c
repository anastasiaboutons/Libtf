typedef struct s_list
{
	void *content;
	struct s_list *next;
} t_list;

#include <stdlib.h>
#include <stdio.h>

t_list	*ft_lstnew(void *content)
{
	t_list	*a;

	a = malloc(sizeof(t_list));

	a->content = content;
	a->next = NULL;
	return (a);
}

int	main()
{
	char	*b = "Salut";
	printf("%p\n", ft_lstnew (b));
	printf("%s\n", (char *)ft_lstnew(b)->content);
}
