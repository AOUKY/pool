/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: haouky <haouky@student.1337.ma>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/04 14:21:00 by haouky            #+#    #+#             */
/*   Updated: 2023/10/04 15:23:45 by haouky           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdlib.h>

int	*ft_range(int min, int max)
{
	int	i;
	int	*s;
	int	rg;

	i = 0;
	if (min >= max)
		return (0);
	rg = max - min;
	s = malloc(rg * sizeof(int));
	if (s == 0)
		return (0);
	while (min < max)
	{
		s[i] = min;
		i++;
		min++;
	}
	return (s);
}
