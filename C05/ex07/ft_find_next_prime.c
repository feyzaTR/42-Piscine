/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_find_next_prime.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aserbest <aserbest@student.42kocaeli.com.  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/02 15:17:06 by aserbest          #+#    #+#             */
/*   Updated: 2024/09/02 15:17:58 by aserbest         ###   ########.tr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_is_prime(int nb)
{
	int	i;

	i = 2;
	if (nb <= 1)
		return (0);
	while (i <= nb / 2)
	{
		if ((nb % i) == 0)
			return (0);
		i++;
	}
	return (1);
}

int	ft_find_next_prime(int nb)
{
	int	x;
	int	control;

	x = nb;
	control = ft_is_prime(nb);
	while (control != 1)
	{
		++x;
		control = ft_is_prime(x);
	}
	return (x);
}
