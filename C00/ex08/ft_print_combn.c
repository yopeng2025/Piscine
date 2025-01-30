/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_combn.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yopeng <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/22 09:52:59 by yopeng            #+#    #+#             */
/*   Updated: 2025/01/24 09:54:43 by yopeng           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<unistd.h>
#include<stdio.h>

void	ft_putchar (char c)
{
	write(1, &c, 1);
}

void	ft_print(int *tab, int n)
{
	int	i;
	int	tf;

	i = 1;
	tf = 1;
	while (i < n)
	{
		if(tab[i - 1] >= tab[i])
			tf = 0;
		i++;
	}
	if(tf)
	{
		i = 0;
		while(i < n)
			ft_putchar(tab[i++] +'0');
		if (tab[0] < (10-n))
		{
			ft_putchar(',');
			ft_putchar(' ');
		}
	}
}

void	ft_print_combn(int n)
{
	int	i;
	int	tab[n];

	i = 0;
	while (i < n)
		tab[i++] = 0;
	while (tab[0] <= (10 - n)&& n>=1 && n<10)
	{
		ft_print(tab, n);
		tab[n - 1]++;
		i = n - 1;
		while (i && n > 1)
		{
			if (tab[i] > 9)
			{
				tab[i - 1]++;
				tab[i] =0;
			}
			i--;
		}

	}
}

int	main(void)
{
	int	n;

	n = 2;
	ft_print_combn(n);
	printf("%d", ft_print_combn(n));
}
