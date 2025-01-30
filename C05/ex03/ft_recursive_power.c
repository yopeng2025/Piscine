/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yopeng <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/27 13:33:57 by yopeng            #+#    #+#             */
/*   Updated: 2025/01/28 16:19:47 by yopeng           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_recursive_power(int nb, int power)
{
	int	n;

	n = nb;
	if (power < 0)
	{
		return (0);
	}
	else if (power == 0)
	{	
		return (1);
	}
	else if (power > 0)
	{
		n = n * ft_recursive_power(nb, power - 1);
	}
	return (n);
}
/* 
#include<unistd.h>
#include<stdio.h>

int	main (void)
{
	printf("%d\n", ft_recursive_power(3, 3));
	printf("%d\n", ft_recursive_power(2, 2));
	printf("%d\n", ft_recursive_power(4, 4));
	printf("%d\n", ft_recursive_power(5, 5));
	return (0);
}*/
