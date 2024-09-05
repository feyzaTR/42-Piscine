/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aserbest <aserbest@student.42kocaeli.com.  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/20 16:26:13 by aserbest          #+#    #+#             */
/*   Updated: 2024/08/20 16:26:15 by aserbest         ###   ########.tr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putstr(char *str)
{
	int	i;

	i = 0;
	while (*(str + i) != '\0')
	{
		write(1, (str + i), 1);
		i++;
	}
}
int main()
{
	char A[]="feyza";
	int Z[] = {0,1,2,3};
	char * ptr;
	ptr=A+3;
	int * p;
	p=Z+2;
	ft_putstr(A);
	return 0;
}
