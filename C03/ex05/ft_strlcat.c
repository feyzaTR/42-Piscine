/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aserbest <aserbest@student.42kocaeli.com.  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/26 19:20:20 by aserbest          #+#    #+#             */
/*   Updated: 2024/08/29 11:28:51 by aserbest         ###   ########.tr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		i++;
	}
	return (i);
}

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int	i;
	unsigned int	j;
	unsigned int	dest_len;
	unsigned int	src_len;

	i = 0;
	j = 0;
	while (dest[j] != '\0')
		j++;
	dest_len = j;
	src_len = ft_strlen(src);
	if (size == 0 || size <= dest_len)
		return (src_len + size);
	while (src[i] != '\0' && i < size - dest_len - 1)
	{
		dest[j] = src[i];
		i++;
		j++;
	}
	dest[j] = '\0';
	return (dest_len + src_len);
}
#include <stdio.h>
int main()
{
	char dest[] = "asjdlaksjd";
	char src[] = "feyza cık cık";
	printf("%d, %s", ft_strlcat(dest,src, 25),dest);
}
