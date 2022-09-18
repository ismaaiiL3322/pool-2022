/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: irkik <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/03 11:06:44 by irkik             #+#    #+#             */
/*   Updated: 2022/09/04 20:15:30 by irkik            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>
#include <stdio.h>

void	ft_rev_int_tab(int *tab, int size)
{
	int		a;
	int		temp;

	a = 0;
	while (a < (size / 2))
	{
		temp = tab[a];
		tab[a] = tab[size - a - 1];
		tab[size - a - 1] = temp;
		a++;
	}
}

