/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ps_utils4.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yahamdan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/28 13:24:56 by yahamdan          #+#    #+#             */
/*   Updated: 2023/02/04 23:08:16 by yahamdan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	sort_help(t_list **stack_a, t_list **stack_b, int size, int *arr)
{
	while (*stack_a)
	{
		if ((*stack_a)->data <= arr[size -1]
			&& (*stack_a)->data < arr[size / 2])
			push_b(stack_a, stack_b);
		else if ((*stack_a)->data <= arr[size -1]
			&& (*stack_a)->data >= arr[size / 2])
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
