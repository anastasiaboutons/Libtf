t_list	*ft_lstlast(t_list *lst)
{
	t_list	*p;

	p = lst;
	while (p->next != NULL)
	{
		p = p->next;
	}
	return (p);
}
