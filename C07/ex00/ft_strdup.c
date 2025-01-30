/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yopeng <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/29 10:44:45 by yopeng            #+#    #+#             */
/*   Updated: 2025/01/30 11:16:40 by yopeng           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include<stdio.h>
#include<stdlib.h>

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		i++;
	}
	return (i);
}

char	*ft_strdup(char *src)
{
	int		i;
	int		size;
	char	*dup;

	size = ft_strlen(src) + 1;
	dup = malloc(size);
	if (dup == 0)
	{
		return (0);
	}
	i = 0;
	while (src[i] != '\0')
	{
		dup[i] = src[i];
		i++;
	}
	dup[i] = '\0';
	return (dup);
}
/*
int	main(void)
{
	char	*src = "helloworld";
	char	*dup;

	dup = ft_strdup(src);
	if (dup != 0)
	{
		printf("%s", dup);
	}
	free(dup);
	return (0);
}
*/
