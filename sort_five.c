/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_five.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yahamdan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/16 15:03:17 by yahamdan          #+#    #+#             */
/*   Updated: 2023/01/30 19:04:40 by yahamdan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	sort_three(t_list **stack_a)
{
	int	last;
	int	fst;
	int	mdl;

	last = ft_lstlast(*stack_a)->data;
	fst = (*stack_a)->data;
	mdl = (*stack_a)->next->data;
	if (ft_lstsize(*stack_a) == 2 && fst > mdl)
		swap_a(stack_a);
	else if (fst > mdl && mdl < last && fst < last)
		swap_a(stack_a);
	else if (fst > mdl && mdl < last && fst > last)
		rotate_a(stack_a);
	else if (fst < mdl && fst > last)
		rr_a(stack_a);
	else if (fst < mdl && mdl > last && fst < last)
	{
		rr_a(stack_a);
		swap_a(stack_a);
	}
	else if (fst > mdl && mdl > last)
	{
		swap_a(stack_a);
		rr_a(stack_a);
	}
}

void	sort_five(t_list **stack_a, t_list **stack_b)
{
	while (ft_lstsize(*stack_a) > 3)
	{
		if (check_if_sorted(*stack_a) == 1 && !stack_b)
			return ;
		else if (get_pos(sml(*stack_a), lst_in_tab(*stack_a)) == 0)
			push_b(stack_a, stack_b);
		else if (get_pos(sml(*stack_a), lst_in_tab(*stack_a)) > 2)
			rr_a(stack_a);
		else if (get_pos(sml(*stack_a), lst_in_tab(*stack_a)) <= 2)
			rotate_a(stack_a);
	}
	sort_(stack_a, stack_b);
	while (*stack_b)
		push_a(stack_a, stack_b);
}

int	ft_search1(t_list **stack_a, int nb)
{
	int		i;
	t_list	*tmp;

	i = 0;
	tmp = *stack_a;
	while (tmp && tmp->next)
	{
		if (tmp->data <= nb)
			return (i);
		i++;
		tmp = tmp->next;
	}
	return (-1);
}

void	sort_h(t_list **stack_a, t_list **stack_b)
{
	int	i;
	int	*arr;
	int	size;

	i = 1;
	arr = ft_sort_int_tab(lst_in_tab(*stack_a));
	size = ft_lstsize(*stack_a);
	while (*stack_a)
	{
		if (i == 5)
			sort_help(stack_a, stack_b, size, arr);
		if (ft_search1(stack_a, arr[(20 * i) - 1]) != -1)
			help_sh(stack_a, stack_b, arr, i);
		else
			i++;
	}
	push_to_a(stack_a, stack_b);
	free(arr);
}

void	sort_fh(t_list **stack_a, t_list **stack_b)
{
	int	i;
	int	size;
	int	*arr;

	i = 1;
	arr = ft_sort_int_tab(lst_in_tab(*stack_a));
	size = ft_lstsize(*stack_a);
	while (*stack_a)
	{
		if (i == 11)
			sort_help(stack_a, stack_b, size, arr);
		if (ft_search1(stack_a, arr[(45 * i) - 1]) != -1)
			help_sfh(stack_a, stack_b, arr, i);
		else
			i++;
	}
	push_to_a(stack_a, stack_b);
}
