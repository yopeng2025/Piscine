/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yopeng <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/21 10:02:11 by yopeng            #+#    #+#             */
/*   Updated: 2025/01/21 12:43:31 by yopeng           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_calculate(int n)
{
	ft_putchar('0' + n / 10);
	ft_putchar('0' + n % 10);
}

void	ft_print_comb2(void)
{
	int	a;
	int	b;

	a = 0;
	while (a < 99)
	{	
		b = a + 1;
		while (b < 100)
		{
			ft_calculate(a);
			ft_putchar(' ');
			ft_calculate(b);
			if (a != 98)
			{
				ft_putchar(',');
				ft_putchar(' ');
			}
			b++;
		}
		a++;
	}
}
/*
int	main(void)
{
	ft_print_comb2();
	return (0);
}
*/
//zero in ft_putchar is used to tell computer that 
//the number here is numeric but not ascii/
