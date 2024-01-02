/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: haouky <haouky@student.1337.ma>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/04 15:24:16 by haouky            #+#    #+#             */
/*   Updated: 2023/10/04 17:49:18 by haouky           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdlib.h>

int	ft_ultimate_range(int **range, int min, int max)
{
	int	i;
	int	rg;
	int	**s;

	s = &range;
	i = 0;
	if (min >= max)
	{
		**s = NULL;
		return (0);
	}
	rg = max - min;
	**s = malloc(rg * sizeof(int));
	if (!(**s))
		return (-1);
	while (i < rg)
	{
		(**s)[i] = min + i;
		i++;
	}
	return (rg);
}
