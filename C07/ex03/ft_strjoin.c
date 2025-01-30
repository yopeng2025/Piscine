/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yopeng <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/30 11:00:21 by yopeng            #+#    #+#             */
/*   Updated: 2025/01/30 16:58:34 by yopeng           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<stdlib.h>
#include<stdio.h>
#include<string.h>

int	ft_strlen(char *str)
{
	int	len;

	len = 0;
	while (str[len])
	{
		len++;
	}
	return (len);
}

int	ft_seplen(char *sep)
{
	return (ft_strlen(sep));
}

int	ft_total_len(int size, char **strs, char *sep)
{	
	int	seplen;
	int	total_len;
	int	i;

	i = 0;
	seplen = ft_seplen(sep);
	total_len = 0;
	while (i < size)
	{
		total_len = total_len + ft_strlen(strs[i]);
		i++;
	}
	total_len = total_len + (size - 1) * seplen;
	return (total_len);
}

void	ft_cat(int size, char **strs, char *sep)
{
	char	*c;
	char	*s;
	char	*fin;
	char	*ptr;
	int	i;

	ptr = fin;
	i = 0;
	while (i < size)
	{
		c = strs[i];
		while(*c)
		{
			*ptr++ = *c++;
		}
		if (i < size - 1)
		{
			s = sep;
			while (*s)
			{
				*ptr++ = *s++;
			}
		}
		i++;
	}
	*ptr= '\0';
}

char	*ft_strjoin(int size, char **strs, char *sep)
{
	char	*fin;
	int	seplen;
	int	total_len;

	if (size == 0)
	{
		fin = malloc(1);
		if (!fin)
		{
			*fin = '\0';
		}
		return (fin);
	}
	seplen = ft_seplen(sep);
	total_len = ft_total_len(size, strs, sep);
	fin = malloc(total_len + 1);
	if (!fin)
	{
		return (0);
	}
	ft_cat(size, strs, sep);
	return (fin);
}

int	main(void)
{
	char	*strs[] = {"hi", "hello", "world"};
	char	*sep = ",";
	char	*fin = ft_strjoin(3, strs, sep);
	if (fin)
	{
		printf("%s\n", fin);
		free(fin);
	}
	else
	{
		printf("failed\n");
	}
	return (0);
}
