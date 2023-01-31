/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yahamdan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/26 17:23:29 by yahamdan          #+#    #+#             */
/*   Updated: 2023/01/30 17:08:21 by yahamdan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include <stdlib.h>
# include <unistd.h>
# include <stdio.h>
# include <string.h>
# include <fcntl.h>
# include <limits.h>
# include <strings.h>

typedef struct s_list
{	
	int				data;
	struct s_list	*next;
}					t_list;

void	rr(t_list **a);
void	ft_error(int a);
void	rr_a(t_list **a);
void	swap(t_list **a);
void	rr_b(t_list **b);
void	swap_a(t_list **a);
void	swap_b(t_list **b);
void	rotate(t_list **a);
size_t	ft_strlen(char *s);
long	ft_atoi(char *str);
void	if_maxmin(char *sp);
int		ws(char *s, char c);
int		big(t_list *stack_b);
char	*ft_strdup(char *s1);
void	rotate_a(t_list **a);
void	rotate_b(t_list **b);
int		sml(t_list *stack_a);
void	ft_isdigit(char *sp);
void	swapp(int *a, int *b);
int		ft_lstsize(t_list *lst);
t_list	*ft_lstnew(int content);
void	free_me(char **p, int j);
int		get_pos(int a, int *arr);
t_list	*ft_lstlast(t_list *lst);
int		*ft_sort_int_tab(int *tab);
char	**ft_split(char *s, char c);
t_list	*ft_lstbfrlast(t_list *lst);
void	sort_three(t_list **stack_a);
int		*lst_in_tab(t_list *stack_a);
int		if_exist(int a, t_list *stack_b);
int		check_if_sorted(t_list *stack_a);
void	splited(char *s, char **p, char c);
int		ft_search1(t_list **stack_a, int nb);
void	push(t_list **stack_b, t_list **stack_a);
void	checkandlst(char **sp, t_list **stack_a);
int		if_duplicate(int *arr, t_list **stack_a);
void	sort_(t_list **stack_a, t_list **stack_b);
void	ft_lstadd_back(t_list **lst, t_list *new);
void	sort_h(t_list **stack_a, t_list **stack_b);
void	ft_lstadd_front(t_list **lst, t_list *new);
void	push_a(t_list **stack_a, t_list **stack_b);
void	push_b(t_list **stack_a, t_list **stack_b);
void	sort_fh(t_list **stack_a, t_list **stack_b);
void	sort_all(t_list **stack_a, t_list **stack_b);
void	push_to_a(t_list **stack_a, t_list **stack_b);
void	sort_five(t_list **stack_a, t_list **stack_b);
void	rotpush(t_list **stack_a, t_list **stack_b, int *c);
char	*ft_substr(char *s, unsigned int start, size_t len);
void	help_sh(t_list **stack_a, t_list **stack_b, int *arr, int i);
void	help_sfh(t_list **stack_a, t_list **stack_b, int *arr, int i);
void	help_sm_ps(t_list **stack_a, t_list **stack_b, int *c, int *i);
int		sm_hpusha(t_list **stack_a, t_list **stack_b, int *arr, int *i);
void	sort_help(t_list **stack_a, t_list **stack_b, int size, int *arr);

//  BONUS PART

# ifndef BUFFER_SIZE
#  define BUFFER_SIZE 1
# endif

void	ra_rb(t_list **a);
void	rra_rrb(t_list **a);
char	*get_next_line(int fd);
void	swapa_swapb(t_list **a);
char	*ft_strchr(char *s, int c);
void	r_ab(t_list **a, t_list **b);
int		ft_strcmp(char *s1, char *s2);
void	rrr_ab(t_list **a, t_list **b);
char	*ft_strjoin(char *s1, char *s2);
void	swap_a_b(t_list **a, t_list **b);
void	*ft_calloc(size_t count, size_t size);
void	get_opt(t_list **stack_a, t_list **stack_b);
void	pusha_pushb(t_list **stack_b, t_list **stack_a);
void	get_opt_h(char *str, t_list **stack_a, t_list **stack_b);

#endif