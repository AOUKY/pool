/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: haouky <haouky@student.1337.ma>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/21 16:30:11 by haouky            #+#    #+#             */
/*   Updated: 2023/09/23 14:03:22 by haouky           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	low(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] >= 'A' && str[i] <= 'Z')
		{
			str[i] = str[i] + 32;
		}
		i++;
	}
}

char	*ft_strcapitalize(char *str)
{
	int	i;
	int	dx;

	i = 0;
	dx = 1;
	low(str);
	while (str[i] != '\0')
	{
		if ((str[i] >= 'a' && str[i] <= 'z') && (dx == 1))
		{
			str[i] = str[i] - 32;
			dx = 0;
		}
		else if (!((str[i] >= 'a' && str[i] <= 'z')
				|| (str[i] >= 'A' && str[i] <= 'Z')
				|| (str[i] >= '1' && str[i] <= '9')))
			dx = 1;
		else if (str[i] >= '1' && str[i] <= '9')
			dx = 0;
		i++;
	}
	return (str);
}
