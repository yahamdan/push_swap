/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   strlendup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yahamdan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/29 20:30:53 by yahamdan          #+#    #+#             */
/*   Updated: 2023/01/31 14:42:34 by yahamdan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

char	*ft_strdup(char *s1)
{
	size_t	i;
	size_t	len;
	char	*p;

	i = 0;
	len = ft_strlen(s1);
	p = (char *)malloc((len + 1) * sizeof(char));
	if (!p)
		return (NULL);
	while (i <= len)
	{
		p[i] = s1[i];
		i++;
	}
	return (p);
}

size_t	ft_strlen(char *s)
{
	size_t	i;

	i = 0;
	while (s[i])
		i++;
	return (i);
}

int	*lst_in_tab(t_list *stack_a)
{
	int	i;
	int	*arr;

	i = 0;
	arr = malloc(ft_lstsize(stack_a) * sizeof(int));
	if (!arr)
		return (0);
	while (stack_a)
	{
		arr[i] = stack_a->data;
		stack_a = stack_a->next;
		i++;
	}
	return (arr);
}

void	checkandlst(char **sp, t_list **stack_a)
{
	int	j;

	j = 0;
	while (sp[j])
	{
		if_maxmin(sp[j]);
		ft_isdigit(sp[j]);
		j++;
	}
	j = 0;
	while (sp[j])
	{
		ft_lstadd_back(stack_a, ft_lstnew(ft_atoi(sp[j])));
		free(sp[j]);
		j++;
	}
	free(sp);
}
