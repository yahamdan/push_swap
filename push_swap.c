/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yahamdan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/27 18:31:28 by yahamdan          #+#    #+#             */
/*   Updated: 2023/02/04 23:08:25 by yahamdan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	if_exist(int a, t_list *stack_b)
{
	while (stack_b)
	{
		if (a == (stack_b)->data)
			return (1);
		stack_b = (stack_b)->next;
	}
	return (0);
}

void	sort_(t_list **stack_a, t_list **stack_b)
{
	if (check_if_sorted(*stack_a) == 1)
		return ;
	if (ft_lstsize(*stack_a) <= 3)
		sort_three(stack_a);
	else if (ft_lstsize(*stack_a) <= 5)
		sort_five(stack_a, stack_b);
	else if (ft_lstsize(*stack_a) <= 100)
		sort_h(stack_a, stack_b);
	else
		sort_fh(stack_a, stack_b);
}

int	main(int ac, char **av)
{
	int		i;
	int		j;
	char	**sp;
	t_list	*stack_a;
	t_list	*stack_b;

	j = 0;
	i = 1;
	if (ac < 2)
		exit(0);
	while (av[i])
	{
		j = 0;
		sp = ft_split(av[i], ' ');
		if (sp[0] == '\0')
			ft_error(1);
		checkandlst(sp, &stack_a);
		i++;
	}
	sort_(&stack_a, &stack_b);
}
