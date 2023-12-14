/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_non_printable.c                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: haouky <haouky@student.1337.ma>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/24 14:09:08 by haouky            #+#    #+#             */
/*   Updated: 2023/09/24 14:38:50 by haouky           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	print(char a)
{
	write(1, &a, 1);
}

void	ft_putstr_non_printable(char *str)
{
	char	*hx;
	int		i;

	i = 0;
	hx = "0123456789abcdef";
	while (str[i] != '\0')
	{
		if ((str[i] >= 0 && str[i] <= 31) || (str[i] == 127))
		{
			print('\\');
			print(hx[str[i] / 16]);
			print(hx[str[i] % 16]);
		}
		else 
			print(str[i]);
		i++;
	}
}
