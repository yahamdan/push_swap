/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   checker_utils.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yahamdan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/29 12:28:58 by yahamdan          #+#    #+#             */
/*   Updated: 2023/01/30 18:57:47 by yahamdan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ra_rb(t_list **a)
{
	t_list	*tmp;

	if (*a && (*a)->next)
	{
		tmp = *a;
		*a = (*a)->next;
		tmp->next = NULL;
		ft_lstlast(*a)->next = tmp;
	}
}

void	r_ab(t_list **a, t_list **b)
{
	ra_rb(a);
	ra_rb(b);
}

void	rra_rrb(t_list **a)
{
	t_list	*tmp;

	if (*a && (*a)->next)
	{
		tmp = ft_lstlast(*a);
		ft_lstbfrlast(*a)->next = NULL;
		tmp->next = *a;
		*a = tmp;
	}
}

void	rrr_ab(t_list **a, t_list **b)
{
	rra_rrb(a);
	rra_rrb(b);
}

void	swapa_swapb(t_list **a)
{
	t_list	*tmp;

	if (*a && (*a)->next)
	{
		tmp = (*a)->next;
		(*a)->next = tmp->next;
		tmp->next = *a;
		*a = tmp;
	}
}
