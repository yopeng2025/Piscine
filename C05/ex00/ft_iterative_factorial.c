/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yopeng <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/26 13:38:42 by yopeng            #+#    #+#             */
/*   Updated: 2025/01/28 15:52:09 by yopeng           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_factorial(int nb)
{
	int	n;

	if (nb < 0)
		return (0);
	else if (nb == 0)
		return (1);
	n = nb;
	while (nb > 1)
	{
		n = n * (nb - 1);
		nb--;
	}
	return (n);
}
/*
#include <unistd.h>
#include <stdio.h>

int	main(void)
{
	printf("%d\n", ft_iterative_factorial(1));
	printf("%d\n", ft_iterative_factorial(2));
	printf("%d\n", ft_iterative_factorial(3));
	printf("%d\n", ft_iterative_factorial(4));
	printf("%d\n", ft_iterative_factorial(10));
	return 0;
}
*/
