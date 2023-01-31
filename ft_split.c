/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yahamdan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/22 18:50:21 by yahamdan          #+#    #+#             */
/*   Updated: 2023/01/30 19:18:57 by yahamdan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	ws(char *s, char c)
{
	int	i;
	int	count;

	i = 0;
	count = 0;
	while (s[i])
	{
		while (s[i] == c)
			i++;
		if (s[i])
		{
			while (s[i] && s[i] != c)
				i++;
			count++;
		}
	}
	return (count);
}

void	free_me(char **p, int j)
{
	while (j >= 0)
		free(p[j--]);
	free(p);
}

void	splited(char *s, char **p, char c)
{
	int		i;
	int		j;
	int		x;

	i = 0;
	j = 0;
	while (s[i])
	{
		x = 0;
		while (s[i] && s[i] == c)
			i++;
		if (s[i])
		{
			x = i;
			while (s[i] && s[i] != c)
				i++;
			p[j] = ft_substr(s, x, i - x);
			if (!p[j])
				return (free_me(p, j));
			j++;
		}
	}
	p[j] = NULL;
}

char	**ft_split(char *s, char c)
{
	char	**p;

	if (!s)
		return (NULL);
	p = malloc((ws((char *)s, c) + 1) * sizeof(char *));
	if (!p)
		return (NULL);
	splited((char *)s, p, c);
	return (p);
}

char	*ft_substr(char *s, unsigned int start, size_t len)
{
	size_t	i;
	size_t	j;
	char	*substr;

	i = 0;
	j = 0;
	if (!s)
		return (NULL);
	if (start >= ft_strlen(s))
		return (ft_strdup(""));
	else if (len > ft_strlen(s) - start)
		len = ft_strlen(s) - start;
	substr = malloc(sizeof(char) * len + 1);
	if (!substr)
		return (NULL);
	while (s[i])
	{
		if (i >= start && j < len)
			substr[j++] = s[i];
		i++;
	}
	substr[j] = '\0';
	return (substr);
}
