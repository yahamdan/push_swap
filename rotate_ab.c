/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rotate_ab.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yahamdan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/26 22:19:36 by yahamdan          #+#    #+#             */
/*   Updated: 2023/01/29 20:36:02 by yahamdan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	rotate_a(t_list **a)
{
	rotate(a);
	write(1, "ra\n", 3);
}

void	rotate_b(t_list **b)
{
	rotate(b);
	write(1, "rb\n", 3);
}

void	rr(t_list **a)
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

void	rr_b(t_list **b)
{
	rr(b);
	write(1, "rrb\n", 4);
}

void	rr_a(t_list **a)
{
	rr(a);
	write(1, "rra\n", 4);
}
