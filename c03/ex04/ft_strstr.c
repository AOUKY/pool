/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: haouky <haouky@student.1337.ma>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/23 18:38:32 by haouky            #+#    #+#             */
/*   Updated: 2023/09/27 09:25:37 by haouky           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
int	find(char *find, char *str)
{
	int	i;

	i = 0;
	while (find[i] == str[i] && find[i] != 0)
		i++;
	return (i);
}

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
		i++;
	return (i);
}

char	*ft_strstr(char *str, char *to_find)
{
	int	i;
	int	j;
	int	sz;

	i = 0;
	sz = ft_strlen(to_find);
	if (to_find[i] == 0)
	{
		return (str);
	}
	while (str[i] != 0)
	{
		j = 0;
		if (str[i] == to_find[j])
		{
			j = find (&to_find[j], &str[i]);
			if (j == sz)
				return (&str[i]);
		}
		i++;
	}
	return (0);
}
