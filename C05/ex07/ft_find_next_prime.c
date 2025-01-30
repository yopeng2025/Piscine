/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_find_next_prime.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yopeng <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/28 14:53:26 by yopeng            #+#    #+#             */
/*   Updated: 2025/01/28 16:32:36 by yopeng           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
int	ft_prime(int nb)
{
	long long int	i;

	if (nb <= 1)
	{
		return (0);
	}
	i = 2;
	while (i * i <= nb)
	{
		if (nb % i == 0)
		{
			return (0);
		}
		i++;
	}
	return (1);
}

int	ft_find_next_prime(int nb)
{
	if (nb <= 1)
	{
		return (2);
	}
	while (!ft_prime(nb))
	{
		nb++;
	}
	return (nb);
}
/*
#include <stdio.h>

int	main (void)
{
	printf("%d\n", ft_find_next_prime(0));
	printf("%d\n", ft_find_next_prime(1));
	printf("%d\n", ft_find_next_prime(2));
	printf("%d\n", ft_find_next_prime(3));
	printf("%d\n", ft_find_next_prime(89));
	printf("%d\n", ft_find_next_prime(96));
	return (0);
}*/
