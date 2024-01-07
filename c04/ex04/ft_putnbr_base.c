/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: haouky <haouky@student.1337.ma>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/28 09:33:24 by haouky            #+#    #+#             */
/*   Updated: 2023/10/01 15:03:30 by haouky           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

int	eror(char *base)
{
	int	i;
	int	j;

	i = 0;
	if (base[i] == 0 || base[i + 1] == 0)
		return (0);
	while (base[i] != 0)
	{
		j = i + 1;
		if (base[i] == '-' || base[i] == '+')
			return (0);
		while (base[j] != 0)
		{
			if (base[i] == base[j])
				return (0);
			j++;
		}
		i++;
	}
	return (1);
}

int	lb(char *bs)
{
	int	i;

	i = 0;
	while (bs[i] != 0)
		i++;
	return (i);
}

void	wrt(char c)
{
	write(1, &c, 1);
}

void	ft_putnbr_base(int nbr, char *base)
{
	int		i;
	int		l;
	char	c[35];
	long	nb;

	i = 0;
	l = lb(base);
	nb = nbr;
	if (nb == 0 && eror(base) == 1)
		wrt(base[0]);
	if (nb < 0 && eror(base) == 1)
	{
		wrt('-');
		nb = -nb;
	}
	while (nb != 0 && eror(base) == 1)
	{
		c[i] = base[nb % l];
		nb /= l;
		i++;
	}
	c[i] = '\0';
	while (i > 0 && eror(base) == 1)
		wrt(c[--i]);
}
