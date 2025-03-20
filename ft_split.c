/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mohmajdo <mohmajdo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/24 18:26:34 by mohmajdo          #+#    #+#             */
/*   Updated: 2025/03/18 23:59:28 by mohmajdo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static int	ft_countwords(char *str, int c)
{
	int	count;
	int	i;
	int	k;

	i = 0;
	k = 0;
	count = 0;
	while (str[i])
	{
		if (str[i] != c)
		{
			if (!k)
			{
				k = 1;
				count++;
			}
		}
		else
			k = 0;
		i++;
	}
	return (count);
}

static char	ft_len(char *str, int c)
{
	int	j;

	j = 0;
	while (str[j] && str[j] != c)
	{
		j++;
	}
	return (j);
}

static char	*ft_allocatstring(char *str, int c)
{
	char	*buffer;
	int		i;
	int		j;

	i = ft_len(str, c);
	j = 0;
	buffer = gc_malloc(sizeof(char) * (i + 1));
	if (!buffer)
		return (NULL);
	while (j < i)
	{
		buffer[j] = str[j];
		j++;
	}
	buffer[j] = '\0';
	return (buffer);
}

char	**ft_split(char *str, int c)
{
	char	**buffer;
	int		size;
	int		i;

	size = ft_countwords(str, c);
	if (!str || size == 0)
		return (NULL);
	buffer = gc_malloc(sizeof(char *) * (size + 1));
	if (buffer == NULL)
		return (NULL);
	i = -1;
	while (++i < size)
	{
		while (*str && *str == c)
			str++;
		buffer[i] = ft_allocatstring(str, c);
		if (!buffer[i])
		{
			ft_freebuffer(buffer);
			return (NULL);
		}
		str += ft_len(str, c);
	}
	buffer[i] = NULL;
	return (buffer);
}
