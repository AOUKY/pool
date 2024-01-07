/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi_base.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: haouky <haouky@student.1337.ma>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/30 09:21:47 by haouky            #+#    #+#             */
/*   Updated: 2023/10/01 14:28:50 by haouky           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
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
		if (base[i] == '-' || base[i] == '+' 
			|| (base[i] >= 9 && base[i] <= 13) || base[i] == 32)
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

int	cond(char *s, char *bs)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	while (bs[j] != 0)
	{
		if (s[i] == bs[j])
			return (1);
		j++;
	}
	return (0);
}

int	work(char *str, char *base)
{
	int	i;
	int	nb;
	int	j;
	int	l;

	i = 0;
	nb = 0;
	j = 0;
	l = lb(base);
	while (cond(&str[i], base) == 1 && eror(base) == 1)
	{
		nb = nb * l;
		j = 0;
		while (base[j] != 0)
		{
			if (base[j] == str[i])
				nb = nb + j;
			j++;
		}
		i++;
	}
	return (nb);
}

int	ft_atoi_base(char *str, char *base)
{
	int	i;
	int	ng;
	int	nb;

	i = 0;
	nb = 0;
	ng = 0;
	while (((str[i] >= 9 && str[i] <= 13) || str[i] == 32) && eror(base) == 1)
		i++;
	while ((str[i] == '-' || str[i] == '+') && eror(base) == 1)
	{
		if (str[i] == '-')
			ng++;
		i++;
	}
	nb = work(&str[i], base);
	if ((ng % 2 == 0) && eror(base) == 1)
		return (nb);
	else 
		return (-nb);
}
