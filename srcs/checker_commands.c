#include "../includes/push_swap.h"

void	do_pa(t_stack **head_b, t_stack **head_a)
{
	t_stack *tmp;

	if (!head_b || !(*head_b))
		return ;
	tmp = (*head_b)->next;
	(*head_b)->next = *head_a;
	*head_a = *head_b;
	*head_b = tmp;
}

void	do_pb(t_stack **head_b, t_stack **head_a)
{
	t_stack *tmp;

	if (!head_a || !(*head_a))
		return ;
	tmp = (*head_a)->next;
	(*head_a)->next = *head_b;
	*head_b = *head_a;
	*head_a = tmp;
}

void	do_ss_ch(t_stack **head_b, t_stack **head_a)
{
	ft_swap(head_b);
	ft_swap(head_a);
}

void	do_rr(t_stack **head_a, t_stack **head_b)
{
	ft_rotate(head_a);
	ft_rotate(head_b);
}

void	do_rrr(t_stack **head_a, t_stack **head_b)
{
	ft_rev_rotate(head_a);
	ft_rev_rotate(head_b);
}
