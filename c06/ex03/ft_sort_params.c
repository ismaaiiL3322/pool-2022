/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_params.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: irkik <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/13 19:40:55 by irkik             #+#    #+#             */
/*   Updated: 2022/09/15 16:20:45 by irkik            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

void	putstr(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		write(1, &str[i], 1);
		i++;
	}
}

int	ft_strcmp(char *s1, char *s2)
{
	int	i;

	i = 0;
	while (s1[i] != '\0' || s2[i] != '\0')
	{
		if (s1[i] > s2[i])
			return (1);
		if (s1[i] < s2[i])
			return (-1);
		i++;
	}
	return (s1[i] - s2[i]);
}

void	ft_sort_param(int size, char *arr[])
{
	int		a;
	int		b;
	char	*temp;

	a = 1;
	while (a < size)
	{
		b = a + 1;
		while (b < size)
		{
			if (ft_strcmp(arr[a], arr[b]) == 1)
			{
				temp = arr[a];
				arr[a] = arr[b];
				arr[b] = temp;
			}
			b++;
		}
		a++;
	}
	return ;
}

int	main(int argc, char *argv[])
{
	int		i;

	ft_sort_param(argc, argv);
	i = 0;
	while (++i < argc)
	{
		putstr(argv[i]);
		write(1, "\n", 1);
	}
	return (0);
}
