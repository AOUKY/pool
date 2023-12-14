/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: haouky <haouky@student.1337.ma>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/04 17:49:47 by haouky            #+#    #+#             */
/*   Updated: 2023/10/05 12:32:42 by haouky           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdlib.h>

void	cat(char *dest, char *src)
{
	int	i;
	int	j;

	i = 0;
	while (dest[i] != '\0')
	{
		i++;
	}
	j = 0;
	while (src[j] != '\0')
	{
		dest[i] = src[j];
		i++;
		j++;
	}
}

void	cpy(char *dest, char *src)
{
	int	i;

	i = 0;
	while (src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
}

int	ln(char *str)
{
	int	i;

	i = 0;
	while (str[i] != 0)
	{
		i++;
	}
	return (i);
}

char	*ft_strjoin(int size, char **strs, char *sep)
{
	char	*s;
	int		i;
	int		l;

	i = 0;
	l = 0;
	if (size == 0)
		return (malloc(sizeof(char)));
	while (i < size)
		l += ln(strs[i++]);
	l += ln(sep) * (size - 1);
	s = malloc(l);
	cpy(s, strs[0]);
	cat(s, sep);
	i = 1;
	while (i < size)
	{
		cat(s, strs[i]);
		if (i < size -1)
			cat(s, sep);
		i++;
	}
	s[l] = 0;
	return (s);
}
