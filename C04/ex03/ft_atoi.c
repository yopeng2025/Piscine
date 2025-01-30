/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yopeng <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/22 18:12:12 by yopeng            #+#    #+#             */
/*   Updated: 2025/01/23 11:17:09 by yopeng           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

int	ft_atoi(char *str)
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
		else if (str[i] >= 48 && str[i] <= 57)
		{
			while (str[i] >= 48 && str[i] <= 57)
			{
				j = 10 * j + str[i] - '0';
				i++;
			}
			break;
		}
		i++;
	}
	return (k * j);
}
/*
int	main(void)
{
	char str[50] = " ------  ++2025.2026abc";
	printf("%d", ft_atoi(str));
}
*/
//not using break!
