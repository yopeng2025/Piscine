/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yopeng <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/29 16:57:00 by yopeng            #+#    #+#             */
/*   Updated: 2025/01/30 11:17:01 by yopeng           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include<stdio.h>
#include<stdlib.h>

int	*ft_range(int min, int max)
{
	int	*array;
	int	len;
	int	i;

	if (min >= max)
	{
		return (0);
	}
	len = max - min;
	array = malloc(len * sizeof(int));
	if (array == 0)
	{
		return (0);
	}
	i = 0;
	while (i < len)
	{
		array[i] = min + i;
		i++;
	}
	return (array);
}
/*
int	main(void)
{
	int	min;
	int	max;
	int	*array;
	int	len;
	int	i;

	min = 1;
	max = 50;
	len = max - min;
	array = ft_range(min, max);
	printf("from %d to %d\n", min, max);
	if (array == 0)
	{
		printf("NULL\n");
	}
	else
	{
		i = 0;
		while (i < len)
		{
			printf("%d\n", array[i]);
			i++;
		}
		printf("\n");
		free(array);
	}
	return (0);
}*/
