/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ps_utils3.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yahamdan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/14 19:30:41 by yahamdan          #+#    #+#             */
/*   Updated: 2023/02/04 21:48:37 by yahamdan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	sml(t_list *stack_a)
{
	int		sm;
	t_list	*stack;

	sm = 0;
	if (stack_a)
	{
		stack = stack_a;
		sm = stack->data;
		while (stack)
		{
			if (stack->data < sm)
				sm = stack->data;
			stack = stack->next;
		}
	}
	return (sm);
}

int	big(t_list *stack_b)
{
	int		bg;
	t_list	*stack;

	bg = 0;
	if (stack_b)
	{
		stack = stack_b;
		bg = stack->data;
		while (stack)
		{
			if (stack->data > bg)
				bg = stack->data;
			stack = stack->next;
		}
	}
	return (bg);
}

void	swapp(int *a, int *b)
{
	int	tmp;

	tmp = *a;
	*a = *b;
	*b = tmp;
}

int	*ft_sort_int_tab(int *tab, int size)
{
	int	i;
	int	j;

	i = 0;
	while (i < size)
	{
		j = i + 1;
		while (j < size)
		{
			if (tab[j] < tab[i])
			{
				swapp(&tab[i], &tab[j]);
			}
			j++;
		}
		i++;
	}
	j = 0;
	return (tab);
}

int	get_pos(int a, int *arr)
{
	int	i;

	i = 0;
	while (a != arr[i])
		i++;
	free(arr);
	return (i);
}
