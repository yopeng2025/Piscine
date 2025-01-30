/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_int_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yopeng <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/20 10:16:44 by yopeng            #+#    #+#             */
/*   Updated: 2025/01/20 19:56:58 by yopeng           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<unistd.h>
//#include<stdio.h>

void	ft_sort_int_tab(int *tab, int size)
{
	int	i;
	int	j;
	int	swap;

	i = 0;
	j = 0;
	while (i < size - 1)
	{
		while (j < size - i - 1)
		{
			if (tab[j] > tab[j + 1])
			{
				swap = tab[j];
				tab[j] = tab[j + 1];
				tab[j + 1] = swap;
			}
			j++;
		}
		j = 0;
		i++;
	}
}
/*
int	main(void)
{
	int	tab[5] = {7, 0, 5, 9, 4};
	int	size = 5;
	ft_sort_int_tab (tab, size);
	printf ("%d,%d,%d,%d,%d", tab[0], tab[1], tab[2], tab[3], tab[4]);
	return (0);
}
*/
