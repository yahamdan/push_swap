/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ps_utils2.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yahamdan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/17 20:28:36 by yahamdan          #+#    #+#             */
/*   Updated: 2023/01/30 19:29:35 by yahamdan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_lstadd_front(t_list **lst, t_list *new)
{
	if (!lst || !new)
		return ;
	new->next = *lst;
	*lst = new;
}

void	push_to_a(t_list **stack_a, t_list **stack_b)
{
	int	c;
	int	i;
	int	*arr;

	arr = ft_sort_int_tab(lst_in_tab(*stack_b));
	i = ft_lstsize(*stack_b) - 1;
	c = sm_hpusha(stack_a, stack_b, arr, &i);
	while (c > 0)
	{
		rr_a(stack_a);
		c--;
	}
	free(arr);
}

int	sm_hpusha(t_list **stack_a, t_list **stack_b, int *arr, int *i)
{
	int	c;
	int	size;

	c = 0;
	while (*stack_b)
	{
		size = ft_lstsize(*stack_b) / 2;
		if (if_exist(arr[*i], *stack_b) == 1)
		{
			help_sm_ps(stack_a, stack_b, &c, i);
		}
		else if (if_exist(arr[*i], *stack_b) == 0)
		{
			rr_a(stack_a);
			c--;
			*i = *i - 1;
		}
	}
	return (c);
}

void	help_sm_ps(t_list **stack_a, t_list **stack_b, int *c, int *i)
{
	int	size;

	size = ft_lstsize(*stack_b) / 2;
	if (get_pos(big(*stack_b), lst_in_tab(*stack_b)) == 0)
	{
		push_a(stack_a, stack_b);
		*i = *i - 1;
	}
	else if (get_pos(big(*stack_b), lst_in_tab(*stack_b)) <= size)
		rotpush(stack_a, stack_b, c);
	else if (get_pos(big(*stack_b), lst_in_tab(*stack_b)) > size)
	{
		if (*c == 0 || (*stack_b)->data > ft_lstlast(*stack_a)->data)
		{
			push_a(stack_a, stack_b);
			rotate_a(stack_a);
			*c = *c + 1;
		}
		else
			rr_b(stack_b);
	}
}

void	rotpush(t_list **stack_a, t_list **stack_b, int *c)
{
	if (*c == 0 || (*stack_b)->data > ft_lstlast(*stack_a)->data)
	{
		push_a(stack_a, stack_b);
		rotate_a(stack_a);
		*c = *c + 1;
	}
	else
		rotate_b(stack_b);
}
