/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yopeng <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/23 11:19:22 by yopeng            #+#    #+#             */
/*   Updated: 2025/01/26 13:10:40 by yopeng           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int	ft_strlen(char *base)
{
	int	i;

	i = 0;
	while (base[i] != '\0')
	{
		i++;
	}
	return (i);
}

int	validity(char *base)
{
	int	j;

	j = 0;
	if (base[0] == '\0' || ft_strlen(base) == '0')
		return (0);
	while (base[j] != '\0')
	{
		if (base[j] == 43 || base[j] == 45)
			return (0);
		if (base[j] == base[j + 1])
			return (0);
		j++;
	}
	return (1);
}

void	ft_putnbr_base(int nbr, char *base)
{
	int	baselen;
	int	n;
	int	val;

	baselen = ft_strlen(base);
	n = nbr;
	val = validity(base);
	if (val == 1)
	{
		if (n < 0)
		{
			ft_putchar('-');
			n *= -1;
		}
		if (n < baselen)
			ft_putchar(base[n]);
		if (n >= baselen)
		{
			ft_putnbr_base(n / baselen, base);
			ft_putchar(base[n % baselen]);
		}
	}
}

int	main(void)
{
	ft_putnbr_base(-12, "01");
	printf("\n");
	ft_putnbr_base(40, "01234567");
	printf("\n");
	ft_putnbr_base(89456, "0123456789");
	printf("\n");
	ft_putnbr_base(50, "0123456789abcdef");
	return (0);
}
