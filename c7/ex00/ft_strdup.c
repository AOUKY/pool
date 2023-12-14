/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: haouky <haouky@student.1337.ma>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/03 14:41:44 by haouky            #+#    #+#             */
/*   Updated: 2023/10/04 14:48:51 by haouky           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdlib.h>

int	ls(char *s)
{
	int	i;

	i = 0;
	while (s[i] != 0)
	{
		i++;
	}
	return (i);
}

char	*ft_strdup(char *src)
{
	char	*s;
	int		i;

	s = malloc(ls(src) * sizeof(char) + 1);
	i = 0;
	while (src[i] != 0)
	{
		s[i] = src[i];
		i++;
	}
	s[i] = '\0';
	if (s == 0)
		return (0);
	return (s);
}
