/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi_base.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yopeng <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/23 13:58:32 by yopeng            #+#    #+#             */
/*   Updated: 2025/01/25 17:48:18 by yopeng           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <unistd.h>
//#include <stdio.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
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
	return(1);
}

int	ft_atoi_base(char *str, char*base)
{
	int	i;
	int	j;
	int	k;

	i = 0;
	j = 0;
	k = 1;
	while (str[i] != '\0')
	{
		if (str[i] == 45)
			k *= -1;
		else if (str[i] >= 48 && str[i] <=57}
		{
			while (str[i] >= 48 && str[i] <= 57)
			{
				j = 10 * j +str[i] - '0';
				i++;
			}
			break;
		}
		i++;
	}
	return (k * j);
}
