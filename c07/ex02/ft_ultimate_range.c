/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: haouky <haouky@student.1337.ma>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/04 15:24:16 by haouky            #+#    #+#             */
/*   Updated: 2023/10/05 12:05:04 by haouky           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdlib.h>

int	ft_ultimate_range(int **range, int min, int max)
{
	int	i;
	int	rg;

	i = 0;
	if (min >= max)
		return (0);
	rg = max - min;
	*range = malloc(rg * sizeof(int));
	if (!(*range))
		return (-1);
	if (rg <= 0)
	{
		*range = NULL;
		return (0);
	}
	while (min < max)
	{
		(*range)[i] = min;
		i++;
		min++;
	}
	return (rg);
}
