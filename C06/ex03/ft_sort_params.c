/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_params.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aserbest <aserbest@student.42kocaeli.com.  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/31 18:49:16 by aserbest          #+#    #+#             */
/*   Updated: 2024/09/01 13:00:37 by aserbest         ###   ########.tr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	swap(char **a, char **b)
{
	char	*temp;

	temp = *a;
	*a = *b;
	*b = temp;
}

int	ft_strcmp(char *s1, char *s2)
{
	int	i;

	i = 0;
	while ((s1[i] == s2[i]) && (s1[i] != '\0' || s2[i] != '\0'))
		i++;
	return (s1[i] - s2[i]);
}

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		i++;
	}
	return (i);
}

void	write_v(int argc, char **argv)
{
	int	i;

	i = 1;
	while (i < argc)
	{
		write(1, argv[i], ft_strlen(argv[i]));
		write(1, "\n", 1);
		i++;
	}
}

int	main(int argc, char **argv)
{
	int	i;
	int	j;
	int	min;

	i = 1;
	while (i < argc - 1)
	{
		min = i;
		j = i + 1;
		while (j < argc)
		{
			if (ft_strcmp(argv[j], argv[min]) < 0)
			// argv[j] < argv[min]
				min = j;
			j++;
		}
		if (min != i)
			swap(&argv[i], &argv[min]);
		i++;
	}
	write_v(argc, argv);
	return (0);
	int A[2][2]= {{1,2},{3,4}};
}
