/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_utils.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yahamdan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/13 02:01:42 by yahamdan          #+#    #+#             */
/*   Updated: 2023/01/29 22:38:44 by yahamdan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

char	*ft_strjoin(char *dst, char *buff)
{
	char	*p;
	int		i;
	int		j;

	if (!dst && !buff)
		return (NULL);
	if (!dst)
		return (ft_strdup(buff));
	p = ft_calloc((ft_strlen(buff) + ft_strlen(dst) + 1), sizeof(char));
	if (!p)
		return (0);
	i = -1;
	while (dst[++i])
		p[i] = dst[i];
	j = 0;
	while (buff[j])
		p[i++] = buff[j++];
	p[i] = '\0';
	free(dst);
	return (p);
}

char	*ft_strchr(char *s, int c)
{
	int	i;

	i = 0;
	if (!s)
		return (0);
	while (s && s[i])
	{
		if (s[i] == c)
			return ((char *)s + i);
		i++;
	}
	return (0);
}

void	*ft_calloc(size_t count, size_t size)
{
	size_t	i;
	char	*ptr;

	i = 0;
	if (count && size > SIZE_MAX / count)
		return (NULL);
	ptr = malloc(count * size);
	if (!ptr)
		return (NULL);
	while (i < count)
	{
		ptr[i] = '\0';
		i++;
	}
	return (ptr);
}
