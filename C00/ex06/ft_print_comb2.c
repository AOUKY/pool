/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: haouky <haouky@student.1337.ma>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/17 09:15:44 by haouky            #+#    #+#             */
/*   Updated: 2023/09/17 14:45:21 by haouky           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	print(int na, int nb)
{
	char	a;
	char	b;
	char	c;
	char	d;

	a = (na / 10) + '0';
	b = (na % 10) + '0';
	c = (nb / 10) + '0';
	d = (nb % 10) + '0';
	write (1, &a, 1);
	write (1, &b, 1);
	write (1, " ", 1);
	write (1, &c, 1);
	write (1, &d, 1);
	if (na != 98)
		write (1, ", ", 2);
}

void	ft_print_comb2(void)
{
	int	n1;
	int	n2;

	n1 = 0;
	n2 = 1;
	while (n1 <= 98)
	{
		while (n2 <= 99)
		{
			print (n1, n2);
			n2++;
		}
		n1++;
		n2 = n1 + 1;
	}
}
int main()
{
	ft_print_comb2;
}
