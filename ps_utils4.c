/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ps_utils4.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yahamdan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/28 13:24:56 by yahamdan          #+#    #+#             */
/*   Updated: 2023/01/31 15:47:00 by yahamdan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	sort_help(t_list **stack_a, t_list **stack_b, int size, int *arr)
{
	while (*stack_a)
	{
		if ((*stack_a)->data <= arr[size -1]
			&& (*stack_a)->data < ft_lstsize(*stack_a) / 2)
			push_b(stack_a, stack_b);
		else if ((*stack_a)->data <= arr[size -1]
			&& (*stack_a)->data >= ft_lstsize(*stack_a) / 2)
		{
			push_b(stack_a, stack_b);
			rotate_b(stack_b);
		}
	}
}

void	help_sh(t_list **stack_a, t_list **stack_b, int *arr, int i)
{
	int	size;

	size = ft_lstsize(*stack_a);
	if ((*stack_a)->data < arr[(20 * i) - 1]
		&& (*stack_a)->data < arr[(20 * i) - 20 / 2])
		push_b(stack_a, stack_b);
	else if ((*stack_a)->data <= arr[(20 * i) - 1]
		&& (*stack_a)->data >= arr[(20 * i) - 20 / 2])
	{
		push_b(stack_a, stack_b);
		rotate_b(stack_b);
	}
	else if (ft_search1(stack_a, arr[(20 * i) - 1]) > size / 2)
		rr_a(stack_a);
	else if (ft_search1(stack_a, arr[(20 * i) - 1]) <= size / 2)
		rotate_a(stack_a);
}

void	help_sfh(t_list **stack_a, t_list **stack_b, int *arr, int i)
{
	int	size;

	size = ft_lstsize(*stack_a);
	if (ft_search1(stack_a, arr[(45 * i) - 1]) != -1)
	{
		if ((*stack_a)->data <= arr[(45 * i) - 1]
			&& (*stack_a)->data <= arr[(45 * i) - 45 / 2])
			push_b(stack_a, stack_b);
		else if ((*stack_a)->data <= arr[(45 * i) - 1]
			&& (*stack_a)->data > arr[(45 * i) - 45 / 2])
		{
			push_b(stack_a, stack_b);
			rotate_b(stack_b);
		}
		else if (ft_search1(stack_a, arr[(45 * i) - 1]) >= size / 2)
			rr_a(stack_a);
		else if (ft_search1(stack_a, arr[(45 * i) - 1]) < size / 2)
			rotate_a(stack_a);
	}
}

void	sort_all(t_list **stack_a, t_list **stack_b)
{
	int	*arr;
	int	size;
	int	size1;

	arr = ft_sort_int_tab(lst_in_tab(*stack_a));
	size = ft_lstsize(*stack_a);
	while (*stack_a)
	{
		size1 = ft_lstsize(*stack_a) / 2;
		if ((*stack_a)->data <= arr[size -1] && (*stack_a)->data <= size1)
			push_b(stack_a, stack_b);
		else if ((*stack_a)->data <= arr[size -1] && (*stack_a)->data >= size1)
		{
			push_b(stack_a, stack_b);
			rotate_b(stack_b);
		}
	}
	push_to_a(stack_a, stack_b);
}
