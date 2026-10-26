unsigned int	ft_lstsize(t_list *lst)
{
	unsigned int	i;
	t_list		*p;

	p = lst;
	i = 0;
	while (p != NULL)
	{
		i++;
		p = p->next;
	}
	return (i);
}
