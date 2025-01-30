/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yopeng <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/30 10:03:55 by yopeng            #+#    #+#             */
/*   Updated: 2025/01/30 11:17:26 by yopeng           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include<stdio.h>
#include<stdlib.h>

int	ft_ultimate_range(int **range, int min, int max)
{
	int	len;
	int	i;

	if (min >= max)
	{
		*range = NULL;
		return (0);
	}
	len = max - min;
	*range = malloc(len * sizeof(int));
	if (*range == NULL)
	{
		return (-1);
	}
	i = 0;
	while (i < len)
	{
		(*range)[i] = min + i;
		i++;
	}
	return (len);
}
/*
int	main(void)
{
	int	*range;
	int	min = 2;
	int	max = 5;
	int	len;
	int	i;

	printf("from%dto%d\n", min, max);
	len = ft_ultimate_range(&range, min, max);
	if (range == NULL)
	{
		printf("fail");
	}
	i = 0;
	while (i < len)
	{
		printf("%d\n", range[i]);
		i++;
	}
	printf("len:%d", len);
	return (0);
}*/
