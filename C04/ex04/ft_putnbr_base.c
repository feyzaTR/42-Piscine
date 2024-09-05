/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aserbest <aserbest@student.42kocaeli.com.  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/28 17:43:44 by aserbest          #+#    #+#             */
/*   Updated: 2024/08/28 18:08:31 by aserbest         ###   ########.tr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

int	is_valid_base(char *base)
{
	int	i;

	i = 0;
	if (ft_strlen(base) == 0 || ft_strlen(base) == 1)
		return (0);
	while (base[i])
	{
		if (base[i] == '+' || base[i] == '-' || base[i] == base[i + 1])
			return (0);
		i++;
	}
	return (1);
}

void	base_rec(int nbr, char *base, int len)
{
	int	x;

	if (nbr < 0)
	{
		ft_putchar('-');
		nbr = -nbr;
	}
	if (nbr >= len)
		base_rec(nbr / len, base, len);
	x = base[nbr % len];
	ft_putchar(x);
}

void	ft_putnbr_base(int nbr, char *base)
{
	int	i;
	int	len;

	len = ft_strlen(base);
	i = 0;
	if (is_valid_base(base))
	{
		base_rec(nbr, base, len);
	}
}
