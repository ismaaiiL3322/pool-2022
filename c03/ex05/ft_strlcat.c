/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: irkik <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/10 18:23:24 by irkik             #+#    #+#             */
/*   Updated: 2022/09/11 13:06:33 by irkik            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>
#include <stdio.h>

int	ft_strlen(char *str)
{
	int		i;

	i = 0;
	while (str[i] != '\0')
	{
		i++;
	}
	return (i);
}

unsigned	int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	int		a;
	int		b;
	int		c;

	a = ft_strlen(dest);
	b = ft_strlen(dest) + ft_strlen(src);
	c = 0;
	if (size == 0 || size < (unsigned) a)
		return (ft_strlen(src) + size);
	while (src[c] != '\0' && (unsigned) a < size - 1)
	{
		dest[a] = src[c];
		a++;
		c++;
	}
	dest[a] = '\0';
	return (b);
}
