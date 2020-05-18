#include "../includes/push_swap.h"

void	ft_rev_rotate(t_stack **head)
{
	t_stack *tmp;
	t_stack *next;

	if (!head || !(*head) || !(*head)->next)
		return ;
	tmp = *head;
	while (tmp->next->next)
		tmp = tmp->next;
	next = tmp->next;
	tmp->next = NULL;
	next->next = *head;
	*head = next;
}

void	rev_rotate_a(t_stack **head)
{
	ft_rev_rotate(head);
	ft_putstr("rra\n");
}

void	rev_rotate_b(t_stack **head)
{
	ft_rev_rotate(head);
	ft_putstr("rrb\n");
}

void	rev_rotate_both(t_stack **head_a, t_stack **head_b)
{
	ft_rev_rotate(head_a);
	ft_rev_rotate(head_b);
	ft_putstr("rrr\n");
}
