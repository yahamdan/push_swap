/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   checke_error.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yahamdan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/26 12:07:59 by yahamdan          #+#    #+#             */
/*   Updated: 2023/01/31 16:07:14 by yahamdan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	if_duplicate(int *arr, t_list **stack_a)
{
	int		i;
	int		j;
	int		k;
	t_list	*t;

	i = 0;
	t = *stack_a;
	k = ft_lstsize(t);
	while (arr[i])
	{
		j = i + 1;
		while (j < k)
		{
			if (arr[i] == arr[j])
				ft_error(1);
			j++;
		}
		i++;
	}
	free(arr);
	return (0);
}

void	ft_isdigit(char *sp)
{
	int	i;

	i = 0;
	while (sp[i])
	{
		if (sp[0] == '+' || (sp[0] == '-' && sp[1] != '\0'))
			i++;
		while (sp[i] >= 48 && sp[i] <= 57)
			i++;
		if (sp[i] && !(sp[i] >= 48 && sp[i] <= 57))
			ft_error(1);
	}
}

void	if_maxmin(char *sp)
{
	long	k;

	k = ft_atoi(sp);
	if (k > INT_MAX || k < INT_MIN)
		ft_error(1);
}

void	ft_error(int a)
{
	if (a == 1)
	{
		write(1, "Error\n", 6);
		exit (0);
	}
}

int	check_if_sorted(t_list *stack_a)
{
	while (stack_a && stack_a->next)
	{
		if (stack_a->data > stack_a->next->data)
			return (0);
		stack_a = stack_a->next;
	}
	return (1);
}
