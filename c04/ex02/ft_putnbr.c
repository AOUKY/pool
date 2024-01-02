/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: haouky <haouky@student.1337.ma>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/26 17:53:38 by haouky            #+#    #+#             */
/*   Updated: 2023/09/28 11:57:42 by haouky           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

void	wrt(char c)
{
	write(1, &c, 1);
}

void	ft_putnbr(int nb)
{
	int		i;
	char	c[11];

	i = 0;
	if (nb == -2147483648)
		write (1, "-2147483648", 11);
	else if (nb < 0)
	{
		wrt('-');
		nb = -nb;
	}
	else if (nb == 0)
		wrt('0');
	while (nb > 0)
	{
		c[i] = nb % 10;
		nb = nb / 10;
		i++;
	}
	i--;
	while (i >= 0)
	{
		wrt(c[i] + 48);
		i--;
	}
}