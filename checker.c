/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   checker.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yahamdan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/28 13:07:30 by yahamdan          #+#    #+#             */
/*   Updated: 2023/01/31 15:06:28 by yahamdan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	get_opt_h(char *str, t_list **stack_a, t_list **stack_b)
{
	if (ft_strcmp(str, "sa\n") == 0)
		swapa_swapb(stack_a);
	else if (ft_strcmp(str, "sb\n") == 0)
		swapa_swapb(stack_b);
	else if (ft_strcmp(str, "ss\n") == 0)
		swap_a_b(stack_a, stack_b);
	else if (ft_strcmp(str, "ra\n") == 0)
		ra_rb(stack_a);
	else if (ft_strcmp(str, "rb\n") == 0)
		ra_rb(stack_b);
	else if (ft_strcmp(str, "rra\n") == 0)
		rra_rrb(stack_a);
	else if (ft_strcmp(str, "rrb\n") == 0)
		rra_rrb(stack_b);
	else if (ft_strcmp(str, "rrr\n") == 0)
		rrr_ab(stack_a, stack_b);
	else if (ft_strcmp(str, "pa\n") == 0)
		pusha_pushb(stack_b, stack_a);
	else if (ft_strcmp(str, "pb\n") == 0)
		pusha_pushb(stack_a, stack_b);
	else
		ft_error(1);
}

void	get_opt(t_list **stack_a, t_list **stack_b)
{
	char	*str;

	str = get_next_line(0);
	while (str)
	{
		get_opt_h(str, stack_a, stack_b);
		free(str);
		str = get_next_line(0);
	}
	free(str);
}

int	main(int ac, char **av)
{
	int		i;
	int		j;
	t_list	*stack_a;
	t_list	*stack_b;
	char	**sp;

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
	get_opt(&stack_a, &stack_b);
	if (check_if_sorted(stack_a) == 1)
		write(1, "OK\n", 3);
	else
		write(1, "KO\n", 3);
}
