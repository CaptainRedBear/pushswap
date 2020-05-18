#include "../includes/push_swap.h"

void	ft_swap(t_stack **head)
{
	t_stack *tmp;

	if (!head || !(*head))
		return ;
	tmp = (*head)->next;
	if (!tmp)
		return ;
	(*head)->next = (*head)->next->next;
	tmp->next = *head;
	*head = tmp;
}

void	swap_a(t_stack **head)
{
	ft_swap(head);
	ft_putstr("sa\n");
}

void	swap_b(t_stack **head)
{
	ft_swap(head);
	ft_putstr("sb\n");
}

void	swap_both(t_stack **head_a, t_stack **head_b)
{
	ft_swap(head_a);
	ft_swap(head_b);
	ft_putstr("ss\n");
}
