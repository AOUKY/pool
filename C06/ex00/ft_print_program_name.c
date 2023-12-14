/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_program_name.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: haouky <haouky@student.1337.ma>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/30 14:26:07 by haouky            #+#    #+#             */
/*   Updated: 2023/10/03 11:21:21 by haouky           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

int	main(int c, char **v)
{
	int	i;

	if (c == 1)
	{
		i = 0;
		while (v[0][i] != 0)
		{
			write(1, &v[0][i], 1);
			i++;
		}
		write(1, "\n", 1);
	}
}
