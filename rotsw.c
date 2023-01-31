/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rotsw.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yahamdan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/29 20:35:03 by yahamdan          #+#    #+#             */
/*   Updated: 2023/01/30 16:36:38 by yahamdan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	swap(t_list **a)
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

void	rotate(t_list **a)
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

t_list	*ft_lstbfrlast(t_list *lst)
{
	if (!lst)
		return (NULL);
	while (lst)
	{
		if (lst->next->next == NULL)
			return (lst);
		lst = lst->next;
	}
	return (lst);
}
